{
  TTree* fChain = _file0->Get("analysistree/anatree");

  fChain->Draw("quickeventdisplayproxy3d.C+");  
}
