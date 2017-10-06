void makeComparison(){

    gStyle->SetOptStat(0);

    // draw uplane
    TCanvas* Uplane = new TCanvas("Uplane", "Uplane", 500, 500);
    Uplane->cd();
    TH2I* mcc7Plot = (TH2I*)_file0->Get("yplane");
    TH2I* mcc8Plot = (TH2I*)_file1->Get("yplane");
    
    mcc7Plot->SetFillColorAlpha(kBlue, 0.4);
    mcc8Plot->SetFillColorAlpha(kRed, 0.4);
    
    mcc8Plot->Draw("boxsame");
    
    mcc7Plot->Draw("boxsame");

}
