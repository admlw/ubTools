void compare(){

    TH1D* h = (TH1D*)_file0->Get("TimeWfm_channel6200"); 
    TH1D* h2 = (TH1D*)_file1->Get("TimeWfm_channel6200");
    TH1D* h3 = (TH1D*)_file2->Get("TimeWfm_channel6200");
    TH1D* h4 = (TH1D*)_file3->Get("TimeWfm_channel6200");
    TH1D* h5 = (TH1D*)_file4->Get("TimeWfm_channel6200");

    TCanvas *c1 = new TCanvas("c1", "c1", 500, 500);
    c1->cd();

    h->SetLineWidth(2);
    h->Draw();

    h2->SetLineWidth(2);
    h2->SetLineColor(kRed);
    h2->SetLineStyle(2);

    h2->Draw("same");
 
    h3->SetLineWidth(2);
    h3->SetLineColor(kPink);
    h3->SetLineStyle(3);
 
    h3->Draw("same");

    h4->SetLineWidth(2);
    h4->SetLineColor(kGreen);
    h4->SetLineStyle(4);
 
    h4->Draw("same");

    h5->SetLineWidth(2);
    h5->SetLineColor(kOrange);
    h5->SetLineStyle(5);
 
    h5->Draw("same");

}
