//
// Calls a TTree::Draw() command with a proxy passed as the argument. Bulk of 
// actual logic contained in the proxy.
//

{
  // Open TFile and get the analysistree
  TTree* fChain = _file0->Get("analysistree/anatree");

  // TTree Draw instance
  fChain->Draw("quickeventdisplayproxy.C+");  
}
