#include "GEVD.h"

int main(int argv, char** argc){

    TString rawDProducer(argc[3]);
    art::InputTag rawDTag {rawDProducer};

    int threshold = atoi(argc[4]);
    int selEvent = atoi(argc[2]);

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


    TFile f_output("tempFile.root", "RECREATE");
    
    TH1D* waveform = new TH1D("waveform", "", 6400, 0, 6400);
    TH1D* pedestalvalues = new TH1D("pedestalvalues", "", 100, -5, 5);

    TH2D *uplane = new TH2D("uplane", "", 2400, 0, 2399, 6400, 0, 6400);
    TH2D *vplane = new TH2D("vplane", "", 2400, 2400, 4799, 6400, 0, 6400);
    TH2D *yplane = new TH2D("yplane", "", 3456, 4800, 8256, 6400, 0, 6400);

    ///////////////////////////////////////////////////////////////////////////

    //
    // begin event loop
    //

    for (gallery::Event ev(filenames); !ev.atEnd(); ev.next()){

        int event = ev.eventAuxiliary().event();
        if (selEvent != event) continue;        

        const auto& rawDHandle = ev.getValidHandle< std::vector<raw::RawDigit> >(rawDTag);

        for (auto const& rawD : (*rawDHandle)){

            int channel = rawD.Channel();
            pedestalvalues->Fill(rawD.GetPedestal());
            
            TString chanNo = Form("channel%i", channel);
            waveform->SetName(chanNo);

            if (channel >= 0 && channel < 2400){

                for (int i = 0; i < 6400; i++){

                    if (rawD.ADC(i)-rawD.GetPedestal() < threshold) uplane->SetBinContent(channel, i, 0);
                    else uplane->SetBinContent(channel, i, rawD.ADC(i)-rawD.GetPedestal());
                    
                    waveform->SetBinContent(i, rawD.ADC(i)-rawD.GetPedestal());
                }
            }

            if (channel >= 2400 && channel < 4800){

                for (int i = 0; i < 6400; i++){

                    if (rawD.ADC(i)-rawD.GetPedestal() < threshold) vplane->SetBinContent(channel, i, 0);
                    else vplane->SetBinContent(channel-2400, i, rawD.ADC(i)-rawD.GetPedestal());
                    waveform->SetBinContent(i, rawD.ADC(i)-rawD.GetPedestal());
                }
            }

            if (channel >= 4800 && channel < 8256){

                for (int i = 0; i < 6400; i++){

                    if (rawD.ADC(i)-rawD.GetPedestal() < threshold) yplane->SetBinContent(channel, i, 0);
                    else yplane->SetBinContent(channel-4800, i, rawD.ADC(i)-rawD.GetPedestal());
                    waveform->SetBinContent(i, rawD.ADC(i)-rawD.GetPedestal());
                    
                }
            }
        }

        break;
    }


    f_output.cd();
    f_output.Write();
    f_output.Close();
}
