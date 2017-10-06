#include "hitcomparer.h"

int main(int argv, char** argc){

    TString hitProducer(argc[4]);
    art::InputTag hitTag {hitProducer};

    int selEvent = atoi(argc[3]);

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


    TFile f_output(argc[2], "RECREATE");
    
    TH2I *uplane = new TH2I("uplane", "", 2400, 0, 2399, 6400, 0, 6400);
    TH2I *vplane = new TH2I("vplane", "", 2400, 2400, 4799, 6400, 0, 6400);
    TH2I *yplane = new TH2I("yplane", "", 3456, 4800, 8256, 6400, 0, 6400);

    uplane->SetMarkerStyle(20);
    uplane->SetMarkerSize(0.25);

    vplane->SetMarkerStyle(20);
    vplane->SetMarkerSize(0.25);

    yplane->SetMarkerStyle(20);
    yplane->SetMarkerSize(0.25);

    ///////////////////////////////////////////////////////////////////////////

    //
    // begin event loop
    //

    for (gallery::Event ev(filenames); !ev.atEnd(); ev.next()){

        int event = ev.eventAuxiliary().event();
        
        if (selEvent != event) continue;        

        const auto& hitHandle = ev.getValidHandle< std::vector<recob::Hit> >(hitTag);

        for (auto const& hit : (*hitHandle)){

            int channel = std::floor(hit.Channel());
            float peakTime = hit.PeakTime(); // in ticks

            if (channel >= 0 && channel < 2400){

                uplane->SetBinContent(channel, peakTime, 1);

            }

            if (channel >= 2400 && channel < 4800){

                vplane->SetBinContent(channel-2400, peakTime, 1);

            }

            if (channel >= 4800 && channel < 8256){

                yplane->SetBinContent(channel-4800, peakTime, 1);

            }
        }

        break;
    }


    f_output.cd();
    f_output.Write();
    f_output.Close();
}
