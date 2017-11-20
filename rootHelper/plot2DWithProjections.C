void plot2DWithProjections(TH2D* h2, TString title){
  TCanvas *c1 = new TCanvas("c1", "c1",600,600);
  gStyle->SetOptStat(0);
  gStyle->SetPalette(kRainBow);

  // Create the three pads
  TPad *centerPad = new TPad("centerPad", "centerPad",0.0,0.0,0.75,0.75);
  centerPad->SetRightMargin(0.025);
  centerPad->SetTopMargin(0.025);
  centerPad->Draw();
  
  rightPad = new TPad("rightPad", "rightPad",0.75,0.0,1.0,0.75);
  rightPad->SetTopMargin(0.025);
  rightPad->SetLeftMargin(0.035);
  rightPad->Draw();
  
  topPad = new TPad("topPad", "topPad",0.0,0.75,0.75,1.0);
  topPad->SetRightMargin(0.025);
  topPad->SetBottomMargin(0.035);
  topPad->Draw();

  
  TH1D * projh2X = h2->ProjectionX();
  TH1D * projh2Y = h2->ProjectionY();

  // Drawing
  centerPad->cd();
  gStyle->SetPalette(1);
  h2->GetYaxis()->SetTitleOffset(1.5);
  h2->Draw("COL");

  topPad->cd();
  projh2X->SetFillColor(kGray);
  projh2X->GetYaxis()->SetLabelSize(0.10);
  projh2X->SetNdivisions(5,"y");
  projh2X->GetXaxis()->SetLabelOffset(1000);
  projh2X->Draw("bar");

  rightPad->cd();
  projh2Y->SetFillColor(kGray);
  projh2Y->GetYaxis()->SetLabelOffset(-0.05);
  projh2Y->GetYaxis()->SetLabelSize(0.10);
  projh2Y->GetXaxis()->SetLabelOffset(1000);
  projh2Y->SetNdivisions(5, "y");
  projh2Y->Draw("hbar");

  c1->SaveAs(title+".png");

}

