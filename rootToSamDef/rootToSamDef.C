#include "TFile.h"
#include "TTree.h"
#include "TString.h"
#include <iostream>
#include <fstream>
#include <vector>

void rootToSamDef(){

  int fRun;
  int fSubRun;
  int fEvent;

  std::cout << "[RootToSamDef]  Opening File..." << std::endl;
  TFile *file = new TFile("/uboone/data/users/alister1/libosAnalysisOutput/rootfile.root", "READ");

  std::cout << "[RootToSamDef]  Getting TTree and setting addresses..." << std::endl;
  TTree *tree = (TTree*)file->Get("cc1unpselana/fMC_TrunMean");
  tree->SetBranchAddress("fRun", &fRun);
  tree->SetBranchAddress("fSubRun", &fSubRun);
  tree->SetBranchAddress("fEvent", &fEvent);

  TString samString("samweb count-files \"defname:prod_reco_optfilter_bnb_v11_unblind_mcc8 and (");

  std::vector<std::pair<int, int>> runEventPairs;

  for (int i = 0; i < tree->GetEntries(); i++){

    tree->GetEntry(i);

    std::pair<int, int> runEventPair;
    runEventPair.first = fRun;
    runEventPair.second = fEvent;

    runEventPairs.push_back(runEventPair);
  }

  std::sort(runEventPairs.begin(), runEventPairs.end());

  for (int i = 0; i < 100; i++){
  
    std::cout << runEventPairs.at(i).first << " " << runEventPairs.at(i).second << std::endl;

    TString appendString = Form("(run_number = %i and first_event <= %i and last_event >= %i) or ", runEventPairs.at(i).first, runEventPairs.at(i).second, runEventPairs.at(i).second);

    samString.Append(appendString); 
  }

  samString.Resize(samString.Length()-4);
  samString.Append(")\"");

  std::cout << samString << std::endl;

  std::ofstream samCommand;
  samCommand.open("samCommand.sh", std::ios_base::app);
  samCommand << samString;
  samCommand.close();

}
