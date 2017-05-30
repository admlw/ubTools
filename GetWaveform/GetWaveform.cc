#include "GetWaveform.h"

TH1D* average(TH1* h, TH1D* hAverage, int binSize){
    int counter = 0;
    double average = 0;
    for (int i = 0; i < 6400; i= i+binSize){
        average = 0;
        for (int j = 0; j < binSize; j++){
            average = average + h->GetBinContent(i+j);
        }

        average = average/binSize;
        hAverage->SetBinContent(counter, average);
        counter++;
    }
    return hAverage;
}


int main(int argv, char** argc){

    //TString wcRawDProducer("digitfilter");
    TString wcRawDProducer("wcNoiseFilter");
    art::InputTag wcRawDTag {wcRawDProducer};

    int binSize = 10;

    ///////////////////////////////////////////////////////////////////////////

    //
    // input files
    //

    // construct vector of input files from input textfile

    std::vector<std::string> filenames;
    filenames.push_back(argc[1]);

    ///////////////////////////////////////////////////////////////////////////

    //
    // create output file and histograms
    //


    TFile f_output(argc[2], "UPDATE");

    int selectedChannel = atoi(argc[3]);

    TH1D* waveform = new TH1D("waveform", "", 6400, 0, 6400);
    TH1* frqspace = 0;
    TH1D* hAverage = new TH1D("hAverage", "", 6400/binSize, 0, 6400);
    TH1D* ADCs = new TH1D("ADCs", "", 400, -200, 200);

    ///////////////////////////////////////////////////////////////////////////

    //
    // begin event loop
    //

    for (gallery::Event ev(filenames); !ev.atEnd(); ev.next()){

        int event = ev.eventAuxiliary().event();
        int run = ev.eventAuxiliary().run();

        const auto& rawDHandle = ev.getValidHandle< std::vector<raw::RawDigit> >(wcRawDTag);

        for (auto const& rawD : (*rawDHandle)){

            int channel = rawD.Channel();

            if (selectedChannel != channel) continue;

            TString chanNo = Form("TimeWfm_channel%i", channel);
            waveform->SetName(chanNo);

            for (size_t i = 0; i < 6400; i++){
                waveform->SetBinContent(i, rawD.ADC(i)-rawD.GetPedestal());
                ADCs->Fill(rawD.ADC(i)-rawD.GetPedestal());
            }

            std::cout << "RMS total: " << ADCs->GetRMS() << std::endl;

            double rms = 0;
            if (ADCs->Integral() != 0){
                Double_t par[3];
                double xq = 0.5;
                ADCs->GetQuantiles(1,&par[0],&xq);
                xq = 0.5 - 0.34;
                ADCs->GetQuantiles(1,&par[1],&xq);
                xq = 0.5 + 0.34;
                ADCs->GetQuantiles(1,&par[2],&xq);
                rms = sqrt((pow(par[2]-par[0],2) + pow(par[1]-par[0],2))/2.);
                Double_t mean = par[0];
            }

            TString ADCsName = Form("ADCs_channel%i", channel);
            ADCs->SetName(ADCsName);
            std::cout << "RMS truncated " << rms << std::endl;

            TString frqname = Form("FrequencyWfm_channel%i", channel);
            frqspace = (TH1*)waveform->FFT(frqspace, "MAG RTC M");
            frqspace->SetName(frqname);
            
            TString hAverageName = Form("FreqAvg_channel%i", channel);
            hAverage = average(frqspace, hAverage, 10);
            hAverage->SetName(hAverageName);


            f_output.cd();
            frqspace->Write();

        }
        break;
    }
    f_output.cd();
    f_output.Write();
    f_output.Close();

}
