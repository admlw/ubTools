#include "GetSimChan.h"

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

    TString SimChanProducer("largeant");
    art::InputTag SimChanTag {SimChanProducer};

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

    int selectedRun = atoi(argc[4]);
    int selectedEvent = atoi(argc[5]);
    int selectedChannel = atoi(argc[6]);

    TH1D* waveform = new TH1D("waveform", "", 9594, 0, 9594);
    TH1* frqspace = 0;
    TH1D* hAverage = new TH1D("hAverage", "", 9594/binSize, 0, 9594);
    TH1D* nElectrons = new TH1D("nElectrons", "", 400, -20000, 20000);

    ///////////////////////////////////////////////////////////////////////////

    //
    // begin event loop
    //

    for (gallery::Event ev(filenames); !ev.atEnd(); ev.next()){

        int run = ev.eventAuxiliary().run();
        int event = ev.eventAuxiliary().event();

        if (selectedRun != run || selectedEvent != event) continue;

        const auto& simChHandle = ev.getValidHandle< std::vector<sim::SimChannel> >(SimChanTag);

        for (auto const& simCh : (*simChHandle)){

            int channel = simCh.Channel();

            if (selectedChannel != channel) continue;

            TString chanNo = Form("TimeWfm_channel%i", channel);
            waveform->SetName(chanNo);

            auto const& tdcidemap = simCh.TDCIDEMap();
            double nElecs[(int)tdcidemap.size()];
            unsigned short tdc[(int)tdcidemap.size()];
            int i = 0;

            for (auto timeSlice : tdcidemap){
                
                tdc[i] = timeSlice.first;
                const std::vector<sim::IDE> ideVec = timeSlice.second;

                double nElec = 0;
                for (size_t j =0; j < ideVec.size(); j++){

                    nElec = nElec + ideVec[j].numElectrons;
                
                }
                
                nElecs[i] = nElec;

                waveform->SetBinContent(timeSlice.first-7295, nElec);

                nElectrons->Fill(nElec);

                i++;
            }


            double rms = 0;
            if (nElectrons->Integral() != 0){
                Double_t par[3];
                double xq = 0.5;
                nElectrons->GetQuantiles(1,&par[0],&xq);
                xq = 0.5 - 0.34;
                nElectrons->GetQuantiles(1,&par[1],&xq);
                xq = 0.5 + 0.34;
                nElectrons->GetQuantiles(1,&par[2],&xq);
                rms = sqrt((pow(par[2]-par[0],2) + pow(par[1]-par[0],2))/2.);
                Double_t mean = par[0];
            }

            TString nElectronsName = Form("nElectrons_channel%i", channel);
            nElectrons->SetName(nElectronsName);
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
