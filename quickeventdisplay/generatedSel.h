/////////////////////////////////////////////////////////////////////////
//   This class has been automatically generated 
//   (at Fri Jul  8 11:32:35 2016 by ROOT version 5.34/32)
//   from TTree anatree/analysis tree
//   found on file: /pnfs/uboone/persistent/users/aschu/offbeam_data_bnbSWtrigger/data_offbeam_bnbext_v05_08_00_anatree.root
/////////////////////////////////////////////////////////////////////////


#ifndef generatedSel_h
#define generatedSel_h

// System Headers needed by the proxy
#if defined(__CINT__) && !defined(__MAKECINT__)
   #define ROOT_Rtypes
   #define ROOT_TError
#endif
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TPad.h>
#include <TH1.h>
#include <TSelector.h>
#include <TBranchProxy.h>
#include <TBranchProxyDirector.h>
#include <TBranchProxyTemplate.h>
#include <TFriendProxy.h>
using namespace ROOT;

// forward declarations needed by this particular proxy


// Header needed by this particular proxy
#include "quickeventdisplayproxy.h"


class quickeventdisplayproxy_Interface {
   // This class defines the list of methods that are directly used by generatedSel,
   // and that can be overloaded in the user's script
public:
   void quickeventdisplayproxy_Begin(TTree*) {}
   void quickeventdisplayproxy_SlaveBegin(TTree*) {}
   Bool_t quickeventdisplayproxy_Notify() { return kTRUE; }
   Bool_t quickeventdisplayproxy_Process(Long64_t) { return kTRUE; }
   void quickeventdisplayproxy_SlaveTerminate() {}
   void quickeventdisplayproxy_Terminate() {}
};


class generatedSel : public TSelector, public quickeventdisplayproxy_Interface {
public :
   TTree          *fChain;         //!pointer to the analyzed TTree or TChain
   TH1            *htemp;          //!pointer to the histogram
   TBranchProxyDirector fDirector; //!Manages the proxys

   // Optional User methods
   TClass         *fClass;    // Pointer to this class's description

   // Proxy for each of the branches, leaves and friends of the tree
   TIntProxy                                                                        run;
   TIntProxy                                                                        subrun;
   TIntProxy                                                                        event;
   TDoubleProxy                                                                     evttime;
   TDoubleProxy                                                                     beamtime;
   TDoubleProxy                                                                     pot;
   TCharProxy                                                                       isdata;
   TDoubleProxy                                                                     taulife;
   TUIntProxy                                                                       triggernumber;
   TDoubleProxy                                                                     triggertime;
   TDoubleProxy                                                                     beamgatetime;
   TUIntProxy                                                                       triggerbits;
   TDoubleProxy                                                                     potbnb;
   TDoubleProxy                                                                     potnumitgt;
   TDoubleProxy                                                                     potnumi101;
   TIntProxy                                                                        no_hits;
   TIntProxy                                                                        no_hits_stored;
   TArrayShortProxy                                                                 hit_plane;
   TArrayShortProxy                                                                 hit_wire;
   TArrayShortProxy                                                                 hit_channel;
   TArrayFloatProxy                                                                 hit_peakT;
   TArrayFloatProxy                                                                 hit_charge;
   TArrayFloatProxy                                                                 hit_ph;
   TArrayFloatProxy                                                                 hit_startT;
   TArrayFloatProxy                                                                 hit_endT;
   TArrayFloatProxy                                                                 hit_rms;
   TArrayFloatProxy                                                                 hit_trueX;
   TArrayFloatProxy                                                                 hit_goodnessOfFit;
   TArrayShortProxy                                                                 hit_multiplicity;
   TArrayShortProxy                                                                 hit_trkid;
   TArrayShortProxy                                                                 hit_trkKey;
   TArrayShortProxy                                                                 hit_clusterid;
   TArrayShortProxy                                                                 hit_clusterKey;
   TArrayFloatProxy                                                                 hit_nelec;
   TArrayFloatProxy                                                                 hit_energy;
   TShortProxy                                                                      nnuvtx;
   TArrayFloatProxy                                                                 nuvtxx;
   TArrayFloatProxy                                                                 nuvtxy;
   TArrayFloatProxy                                                                 nuvtxz;
   TArrayShortProxy                                                                 nuvtxpdg;
   TShortProxy                                                                      nclusters;
   TArrayShortProxy                                                                 clusterId;
   TArrayShortProxy                                                                 clusterView;
   TArrayFloatProxy                                                                 cluster_StartCharge;
   TArrayFloatProxy                                                                 cluster_StartAngle;
   TArrayFloatProxy                                                                 cluster_EndCharge;
   TArrayFloatProxy                                                                 cluster_EndAngle;
   TArrayFloatProxy                                                                 cluster_Integral;
   TArrayFloatProxy                                                                 cluster_IntegralAverage;
   TArrayFloatProxy                                                                 cluster_SummedADC;
   TArrayFloatProxy                                                                 cluster_SummedADCaverage;
   TArrayFloatProxy                                                                 cluster_MultipleHitDensity;
   TArrayFloatProxy                                                                 cluster_Width;
   TArrayShortProxy                                                                 cluster_NHits;
   TArrayShortProxy                                                                 cluster_StartWire;
   TArrayShortProxy                                                                 cluster_StartTick;
   TArrayShortProxy                                                                 cluster_EndWire;
   TArrayShortProxy                                                                 cluster_EndTick;
   TArrayShortProxy                                                                 cluncosmictags_tagger;
   TArrayFloatProxy                                                                 clucosmicscore_tagger;
   TArrayShortProxy                                                                 clucosmictype_tagger;
   TIntProxy                                                                        no_flashes;
   TArrayFloatProxy                                                                 flash_time;
   TArrayFloatProxy                                                                 flash_pe;
   TArrayFloatProxy                                                                 flash_ycenter;
   TArrayFloatProxy                                                                 flash_zcenter;
   TArrayFloatProxy                                                                 flash_ywidth;
   TArrayFloatProxy                                                                 flash_zwidth;
   TArrayFloatProxy                                                                 flash_timewidth;
   TCharProxy                                                                       kNTracker;
   TCharProxy                                                                       kNVertexAlgos;
   TShortProxy                                                                      nPFParticles;
   TArrayShortProxy                                                                 pfp_selfID;
   TArrayShortProxy                                                                 pfp_isPrimary;
   TArrayShortProxy                                                                 pfp_numDaughters;
   TArrayProxy<TArrayType<Short_t,10> >                                             pfp_daughterIDs;
   TArrayShortProxy                                                                 pfp_parentID;
   TArrayShortProxy                                                                 pfp_vertexID;
   TArrayShortProxy                                                                 pfp_isShower;
   TArrayShortProxy                                                                 pfp_isTrack;
   TArrayShortProxy                                                                 pfp_trackID;
   TArrayShortProxy                                                                 pfp_showerID;
   TArrayIntProxy                                                                   pfp_pdgCode;
   TArrayShortProxy                                                                 pfp_numClusters;
   TArrayProxy<TArrayType<Short_t,10> >                                             pfp_clusterIDs;
   TArrayShortProxy                                                                 pfp_isNeutrino;
   TShortProxy                                                                      pfp_numNeutrinos;
   TArrayShortProxy                                                                 pfp_neutrinoIDs;
   TShortProxy                                                                      ntracks_trackkalmanhit;
   TArrayShortProxy                                                                 trkId_trackkalmanhit;
   TArrayShortProxy                                                                 trkncosmictags_tagger_trackkalmanhit;
   TArrayFloatProxy                                                                 trkcosmicscore_tagger_trackkalmanhit;
   TArrayShortProxy                                                                 trkcosmictype_tagger_trackkalmanhit;
   TArrayShortProxy                                                                 trkncosmictags_containmenttagger_trackkalmanhit;
   TArrayFloatProxy                                                                 trkcosmicscore_containmenttagger_trackkalmanhit;
   TArrayShortProxy                                                                 trkcosmictype_containmenttagger_trackkalmanhit;
   TArrayShortProxy                                                                 trkncosmictags_flashmatch_trackkalmanhit;
   TArrayFloatProxy                                                                 trkcosmicscore_flashmatch_trackkalmanhit;
   TArrayShortProxy                                                                 trkcosmictype_flashmatch_trackkalmanhit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkke_trackkalmanhit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkrange_trackkalmanhit;
   TArrayProxy<TArrayType<Int_t,3> >                                                trkidtruth_trackkalmanhit;
   TArrayProxy<TArrayType<Short_t,3> >                                              trkorigin_trackkalmanhit;
   TArrayProxy<TArrayType<Int_t,3> >                                                trkpdgtruth_trackkalmanhit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkefftruth_trackkalmanhit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpurtruth_trackkalmanhit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpitchc_trackkalmanhit;
   TArrayProxy<TArrayType<Short_t,3> >                                              ntrkhits_trackkalmanhit;
   TArrayProxy<TMultiArrayType<TArrayType<Float_t,2000> ,3> >                       trkdedx_trackkalmanhit;
   TArrayProxy<TMultiArrayType<TArrayType<Float_t,2000> ,3> >                       trkdqdx_trackkalmanhit;
   TArrayProxy<TMultiArrayType<TArrayType<Float_t,2000> ,3> >                       trkresrg_trackkalmanhit;
   TArrayProxy<TMultiArrayType<TMultiArrayType<TArrayType<Float_t,3> ,2000> ,3> >   trkxyz_trackkalmanhit;
   TArrayFloatProxy                                                                 trkstartx_trackkalmanhit;
   TArrayFloatProxy                                                                 trkstarty_trackkalmanhit;
   TArrayFloatProxy                                                                 trkstartz_trackkalmanhit;
   TArrayFloatProxy                                                                 trkstartd_trackkalmanhit;
   TArrayFloatProxy                                                                 trkendx_trackkalmanhit;
   TArrayFloatProxy                                                                 trkendy_trackkalmanhit;
   TArrayFloatProxy                                                                 trkendz_trackkalmanhit;
   TArrayFloatProxy                                                                 trkendd_trackkalmanhit;
   TArrayFloatProxy                                                                 trkflashT0_trackkalmanhit;
   TArrayFloatProxy                                                                 trktrueT0_trackkalmanhit;
   TArrayIntProxy                                                                   trkg4id_trackkalmanhit;
   TArrayIntProxy                                                                   trkorig_trackkalmanhit;
   TArrayFloatProxy                                                                 trkpurity_trackkalmanhit;
   TArrayFloatProxy                                                                 trkcompleteness_trackkalmanhit;
   TArrayFloatProxy                                                                 trktheta_trackkalmanhit;
   TArrayFloatProxy                                                                 trkphi_trackkalmanhit;
   TArrayFloatProxy                                                                 trkstartdcosx_trackkalmanhit;
   TArrayFloatProxy                                                                 trkstartdcosy_trackkalmanhit;
   TArrayFloatProxy                                                                 trkstartdcosz_trackkalmanhit;
   TArrayFloatProxy                                                                 trkenddcosx_trackkalmanhit;
   TArrayFloatProxy                                                                 trkenddcosy_trackkalmanhit;
   TArrayFloatProxy                                                                 trkenddcosz_trackkalmanhit;
   TArrayFloatProxy                                                                 trkthetaxz_trackkalmanhit;
   TArrayFloatProxy                                                                 trkthetayz_trackkalmanhit;
   TArrayFloatProxy                                                                 trkmom_trackkalmanhit;
   TArrayFloatProxy                                                                 trkmomrange_trackkalmanhit;
   TArrayFloatProxy                                                                 trkmommschi2_trackkalmanhit;
   TArrayFloatProxy                                                                 trkmommsllhd_trackkalmanhit;
   TArrayFloatProxy                                                                 trklen_trackkalmanhit;
   TArrayShortProxy                                                                 trksvtxid_trackkalmanhit;
   TArrayShortProxy                                                                 trkevtxid_trackkalmanhit;
   TArrayProxy<TArrayType<Int_t,3> >                                                trkpidpdg_trackkalmanhit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchi_trackkalmanhit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchipr_trackkalmanhit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchika_trackkalmanhit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchipi_trackkalmanhit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchimu_trackkalmanhit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidpida_trackkalmanhit;
   TArrayShortProxy                                                                 trkpidbestplane_trackkalmanhit;
   TArrayShortProxy                                                                 trkhasPFParticle_trackkalmanhit;
   TArrayShortProxy                                                                 trkPFParticleID_trackkalmanhit;
   TShortProxy                                                                      ntracks_stitchkalmanhit;
   TArrayShortProxy                                                                 trkId_stitchkalmanhit;
   TArrayShortProxy                                                                 trkncosmictags_tagger_stitchkalmanhit;
   TArrayFloatProxy                                                                 trkcosmicscore_tagger_stitchkalmanhit;
   TArrayShortProxy                                                                 trkcosmictype_tagger_stitchkalmanhit;
   TArrayShortProxy                                                                 trkncosmictags_containmenttagger_stitchkalmanhit;
   TArrayFloatProxy                                                                 trkcosmicscore_containmenttagger_stitchkalmanhit;
   TArrayShortProxy                                                                 trkcosmictype_containmenttagger_stitchkalmanhit;
   TArrayShortProxy                                                                 trkncosmictags_flashmatch_stitchkalmanhit;
   TArrayFloatProxy                                                                 trkcosmicscore_flashmatch_stitchkalmanhit;
   TArrayShortProxy                                                                 trkcosmictype_flashmatch_stitchkalmanhit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkke_stitchkalmanhit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkrange_stitchkalmanhit;
   TArrayProxy<TArrayType<Int_t,3> >                                                trkidtruth_stitchkalmanhit;
   TArrayProxy<TArrayType<Short_t,3> >                                              trkorigin_stitchkalmanhit;
   TArrayProxy<TArrayType<Int_t,3> >                                                trkpdgtruth_stitchkalmanhit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkefftruth_stitchkalmanhit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpurtruth_stitchkalmanhit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpitchc_stitchkalmanhit;
   TArrayProxy<TArrayType<Short_t,3> >                                              ntrkhits_stitchkalmanhit;
   TArrayProxy<TMultiArrayType<TArrayType<Float_t,2000> ,3> >                       trkdedx_stitchkalmanhit;
   TArrayProxy<TMultiArrayType<TArrayType<Float_t,2000> ,3> >                       trkdqdx_stitchkalmanhit;
   TArrayProxy<TMultiArrayType<TArrayType<Float_t,2000> ,3> >                       trkresrg_stitchkalmanhit;
   TArrayProxy<TMultiArrayType<TMultiArrayType<TArrayType<Float_t,3> ,2000> ,3> >   trkxyz_stitchkalmanhit;
   TArrayFloatProxy                                                                 trkstartx_stitchkalmanhit;
   TArrayFloatProxy                                                                 trkstarty_stitchkalmanhit;
   TArrayFloatProxy                                                                 trkstartz_stitchkalmanhit;
   TArrayFloatProxy                                                                 trkstartd_stitchkalmanhit;
   TArrayFloatProxy                                                                 trkendx_stitchkalmanhit;
   TArrayFloatProxy                                                                 trkendy_stitchkalmanhit;
   TArrayFloatProxy                                                                 trkendz_stitchkalmanhit;
   TArrayFloatProxy                                                                 trkendd_stitchkalmanhit;
   TArrayFloatProxy                                                                 trkflashT0_stitchkalmanhit;
   TArrayFloatProxy                                                                 trktrueT0_stitchkalmanhit;
   TArrayIntProxy                                                                   trkg4id_stitchkalmanhit;
   TArrayIntProxy                                                                   trkorig_stitchkalmanhit;
   TArrayFloatProxy                                                                 trkpurity_stitchkalmanhit;
   TArrayFloatProxy                                                                 trkcompleteness_stitchkalmanhit;
   TArrayFloatProxy                                                                 trktheta_stitchkalmanhit;
   TArrayFloatProxy                                                                 trkphi_stitchkalmanhit;
   TArrayFloatProxy                                                                 trkstartdcosx_stitchkalmanhit;
   TArrayFloatProxy                                                                 trkstartdcosy_stitchkalmanhit;
   TArrayFloatProxy                                                                 trkstartdcosz_stitchkalmanhit;
   TArrayFloatProxy                                                                 trkenddcosx_stitchkalmanhit;
   TArrayFloatProxy                                                                 trkenddcosy_stitchkalmanhit;
   TArrayFloatProxy                                                                 trkenddcosz_stitchkalmanhit;
   TArrayFloatProxy                                                                 trkthetaxz_stitchkalmanhit;
   TArrayFloatProxy                                                                 trkthetayz_stitchkalmanhit;
   TArrayFloatProxy                                                                 trkmom_stitchkalmanhit;
   TArrayFloatProxy                                                                 trkmomrange_stitchkalmanhit;
   TArrayFloatProxy                                                                 trkmommschi2_stitchkalmanhit;
   TArrayFloatProxy                                                                 trkmommsllhd_stitchkalmanhit;
   TArrayFloatProxy                                                                 trklen_stitchkalmanhit;
   TArrayShortProxy                                                                 trksvtxid_stitchkalmanhit;
   TArrayShortProxy                                                                 trkevtxid_stitchkalmanhit;
   TArrayProxy<TArrayType<Int_t,3> >                                                trkpidpdg_stitchkalmanhit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchi_stitchkalmanhit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchipr_stitchkalmanhit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchika_stitchkalmanhit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchipi_stitchkalmanhit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchimu_stitchkalmanhit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidpida_stitchkalmanhit;
   TArrayShortProxy                                                                 trkpidbestplane_stitchkalmanhit;
   TArrayShortProxy                                                                 trkhasPFParticle_stitchkalmanhit;
   TArrayShortProxy                                                                 trkPFParticleID_stitchkalmanhit;
   TShortProxy                                                                      ntracks_pandoraCosmic;
   TArrayShortProxy                                                                 trkId_pandoraCosmic;
   TArrayShortProxy                                                                 trkncosmictags_tagger_pandoraCosmic;
   TArrayFloatProxy                                                                 trkcosmicscore_tagger_pandoraCosmic;
   TArrayShortProxy                                                                 trkcosmictype_tagger_pandoraCosmic;
   TArrayShortProxy                                                                 trkncosmictags_containmenttagger_pandoraCosmic;
   TArrayFloatProxy                                                                 trkcosmicscore_containmenttagger_pandoraCosmic;
   TArrayShortProxy                                                                 trkcosmictype_containmenttagger_pandoraCosmic;
   TArrayShortProxy                                                                 trkncosmictags_flashmatch_pandoraCosmic;
   TArrayFloatProxy                                                                 trkcosmicscore_flashmatch_pandoraCosmic;
   TArrayShortProxy                                                                 trkcosmictype_flashmatch_pandoraCosmic;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkke_pandoraCosmic;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkrange_pandoraCosmic;
   TArrayProxy<TArrayType<Int_t,3> >                                                trkidtruth_pandoraCosmic;
   TArrayProxy<TArrayType<Short_t,3> >                                              trkorigin_pandoraCosmic;
   TArrayProxy<TArrayType<Int_t,3> >                                                trkpdgtruth_pandoraCosmic;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkefftruth_pandoraCosmic;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpurtruth_pandoraCosmic;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpitchc_pandoraCosmic;
   TArrayProxy<TArrayType<Short_t,3> >                                              ntrkhits_pandoraCosmic;
   TArrayProxy<TMultiArrayType<TArrayType<Float_t,2000> ,3> >                       trkdedx_pandoraCosmic;
   TArrayProxy<TMultiArrayType<TArrayType<Float_t,2000> ,3> >                       trkdqdx_pandoraCosmic;
   TArrayProxy<TMultiArrayType<TArrayType<Float_t,2000> ,3> >                       trkresrg_pandoraCosmic;
   TArrayProxy<TMultiArrayType<TMultiArrayType<TArrayType<Float_t,3> ,2000> ,3> >   trkxyz_pandoraCosmic;
   TArrayFloatProxy                                                                 trkstartx_pandoraCosmic;
   TArrayFloatProxy                                                                 trkstarty_pandoraCosmic;
   TArrayFloatProxy                                                                 trkstartz_pandoraCosmic;
   TArrayFloatProxy                                                                 trkstartd_pandoraCosmic;
   TArrayFloatProxy                                                                 trkendx_pandoraCosmic;
   TArrayFloatProxy                                                                 trkendy_pandoraCosmic;
   TArrayFloatProxy                                                                 trkendz_pandoraCosmic;
   TArrayFloatProxy                                                                 trkendd_pandoraCosmic;
   TArrayFloatProxy                                                                 trkflashT0_pandoraCosmic;
   TArrayFloatProxy                                                                 trktrueT0_pandoraCosmic;
   TArrayIntProxy                                                                   trkg4id_pandoraCosmic;
   TArrayIntProxy                                                                   trkorig_pandoraCosmic;
   TArrayFloatProxy                                                                 trkpurity_pandoraCosmic;
   TArrayFloatProxy                                                                 trkcompleteness_pandoraCosmic;
   TArrayFloatProxy                                                                 trktheta_pandoraCosmic;
   TArrayFloatProxy                                                                 trkphi_pandoraCosmic;
   TArrayFloatProxy                                                                 trkstartdcosx_pandoraCosmic;
   TArrayFloatProxy                                                                 trkstartdcosy_pandoraCosmic;
   TArrayFloatProxy                                                                 trkstartdcosz_pandoraCosmic;
   TArrayFloatProxy                                                                 trkenddcosx_pandoraCosmic;
   TArrayFloatProxy                                                                 trkenddcosy_pandoraCosmic;
   TArrayFloatProxy                                                                 trkenddcosz_pandoraCosmic;
   TArrayFloatProxy                                                                 trkthetaxz_pandoraCosmic;
   TArrayFloatProxy                                                                 trkthetayz_pandoraCosmic;
   TArrayFloatProxy                                                                 trkmom_pandoraCosmic;
   TArrayFloatProxy                                                                 trkmomrange_pandoraCosmic;
   TArrayFloatProxy                                                                 trkmommschi2_pandoraCosmic;
   TArrayFloatProxy                                                                 trkmommsllhd_pandoraCosmic;
   TArrayFloatProxy                                                                 trklen_pandoraCosmic;
   TArrayShortProxy                                                                 trksvtxid_pandoraCosmic;
   TArrayShortProxy                                                                 trkevtxid_pandoraCosmic;
   TArrayProxy<TArrayType<Int_t,3> >                                                trkpidpdg_pandoraCosmic;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchi_pandoraCosmic;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchipr_pandoraCosmic;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchika_pandoraCosmic;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchipi_pandoraCosmic;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchimu_pandoraCosmic;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidpida_pandoraCosmic;
   TArrayShortProxy                                                                 trkpidbestplane_pandoraCosmic;
   TArrayShortProxy                                                                 trkhasPFParticle_pandoraCosmic;
   TArrayShortProxy                                                                 trkPFParticleID_pandoraCosmic;
   TShortProxy                                                                      ntracks_pandoraCosmicKHit;
   TArrayShortProxy                                                                 trkId_pandoraCosmicKHit;
   TArrayShortProxy                                                                 trkncosmictags_tagger_pandoraCosmicKHit;
   TArrayFloatProxy                                                                 trkcosmicscore_tagger_pandoraCosmicKHit;
   TArrayShortProxy                                                                 trkcosmictype_tagger_pandoraCosmicKHit;
   TArrayShortProxy                                                                 trkncosmictags_containmenttagger_pandoraCosmicKHit;
   TArrayFloatProxy                                                                 trkcosmicscore_containmenttagger_pandoraCosmicKHit;
   TArrayShortProxy                                                                 trkcosmictype_containmenttagger_pandoraCosmicKHit;
   TArrayShortProxy                                                                 trkncosmictags_flashmatch_pandoraCosmicKHit;
   TArrayFloatProxy                                                                 trkcosmicscore_flashmatch_pandoraCosmicKHit;
   TArrayShortProxy                                                                 trkcosmictype_flashmatch_pandoraCosmicKHit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkke_pandoraCosmicKHit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkrange_pandoraCosmicKHit;
   TArrayProxy<TArrayType<Int_t,3> >                                                trkidtruth_pandoraCosmicKHit;
   TArrayProxy<TArrayType<Short_t,3> >                                              trkorigin_pandoraCosmicKHit;
   TArrayProxy<TArrayType<Int_t,3> >                                                trkpdgtruth_pandoraCosmicKHit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkefftruth_pandoraCosmicKHit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpurtruth_pandoraCosmicKHit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpitchc_pandoraCosmicKHit;
   TArrayProxy<TArrayType<Short_t,3> >                                              ntrkhits_pandoraCosmicKHit;
   TArrayProxy<TMultiArrayType<TArrayType<Float_t,2000> ,3> >                       trkdedx_pandoraCosmicKHit;
   TArrayProxy<TMultiArrayType<TArrayType<Float_t,2000> ,3> >                       trkdqdx_pandoraCosmicKHit;
   TArrayProxy<TMultiArrayType<TArrayType<Float_t,2000> ,3> >                       trkresrg_pandoraCosmicKHit;
   TArrayProxy<TMultiArrayType<TMultiArrayType<TArrayType<Float_t,3> ,2000> ,3> >   trkxyz_pandoraCosmicKHit;
   TArrayFloatProxy                                                                 trkstartx_pandoraCosmicKHit;
   TArrayFloatProxy                                                                 trkstarty_pandoraCosmicKHit;
   TArrayFloatProxy                                                                 trkstartz_pandoraCosmicKHit;
   TArrayFloatProxy                                                                 trkstartd_pandoraCosmicKHit;
   TArrayFloatProxy                                                                 trkendx_pandoraCosmicKHit;
   TArrayFloatProxy                                                                 trkendy_pandoraCosmicKHit;
   TArrayFloatProxy                                                                 trkendz_pandoraCosmicKHit;
   TArrayFloatProxy                                                                 trkendd_pandoraCosmicKHit;
   TArrayFloatProxy                                                                 trkflashT0_pandoraCosmicKHit;
   TArrayFloatProxy                                                                 trktrueT0_pandoraCosmicKHit;
   TArrayIntProxy                                                                   trkg4id_pandoraCosmicKHit;
   TArrayIntProxy                                                                   trkorig_pandoraCosmicKHit;
   TArrayFloatProxy                                                                 trkpurity_pandoraCosmicKHit;
   TArrayFloatProxy                                                                 trkcompleteness_pandoraCosmicKHit;
   TArrayFloatProxy                                                                 trktheta_pandoraCosmicKHit;
   TArrayFloatProxy                                                                 trkphi_pandoraCosmicKHit;
   TArrayFloatProxy                                                                 trkstartdcosx_pandoraCosmicKHit;
   TArrayFloatProxy                                                                 trkstartdcosy_pandoraCosmicKHit;
   TArrayFloatProxy                                                                 trkstartdcosz_pandoraCosmicKHit;
   TArrayFloatProxy                                                                 trkenddcosx_pandoraCosmicKHit;
   TArrayFloatProxy                                                                 trkenddcosy_pandoraCosmicKHit;
   TArrayFloatProxy                                                                 trkenddcosz_pandoraCosmicKHit;
   TArrayFloatProxy                                                                 trkthetaxz_pandoraCosmicKHit;
   TArrayFloatProxy                                                                 trkthetayz_pandoraCosmicKHit;
   TArrayFloatProxy                                                                 trkmom_pandoraCosmicKHit;
   TArrayFloatProxy                                                                 trkmomrange_pandoraCosmicKHit;
   TArrayFloatProxy                                                                 trkmommschi2_pandoraCosmicKHit;
   TArrayFloatProxy                                                                 trkmommsllhd_pandoraCosmicKHit;
   TArrayFloatProxy                                                                 trklen_pandoraCosmicKHit;
   TArrayShortProxy                                                                 trksvtxid_pandoraCosmicKHit;
   TArrayShortProxy                                                                 trkevtxid_pandoraCosmicKHit;
   TArrayProxy<TArrayType<Int_t,3> >                                                trkpidpdg_pandoraCosmicKHit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchi_pandoraCosmicKHit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchipr_pandoraCosmicKHit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchika_pandoraCosmicKHit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchipi_pandoraCosmicKHit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchimu_pandoraCosmicKHit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidpida_pandoraCosmicKHit;
   TArrayShortProxy                                                                 trkpidbestplane_pandoraCosmicKHit;
   TArrayShortProxy                                                                 trkhasPFParticle_pandoraCosmicKHit;
   TArrayShortProxy                                                                 trkPFParticleID_pandoraCosmicKHit;
   TShortProxy                                                                      ntracks_pandoraNu;
   TArrayShortProxy                                                                 trkId_pandoraNu;
   TArrayShortProxy                                                                 trkncosmictags_tagger_pandoraNu;
   TArrayFloatProxy                                                                 trkcosmicscore_tagger_pandoraNu;
   TArrayShortProxy                                                                 trkcosmictype_tagger_pandoraNu;
   TArrayShortProxy                                                                 trkncosmictags_containmenttagger_pandoraNu;
   TArrayFloatProxy                                                                 trkcosmicscore_containmenttagger_pandoraNu;
   TArrayShortProxy                                                                 trkcosmictype_containmenttagger_pandoraNu;
   TArrayShortProxy                                                                 trkncosmictags_flashmatch_pandoraNu;
   TArrayFloatProxy                                                                 trkcosmicscore_flashmatch_pandoraNu;
   TArrayShortProxy                                                                 trkcosmictype_flashmatch_pandoraNu;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkke_pandoraNu;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkrange_pandoraNu;
   TArrayProxy<TArrayType<Int_t,3> >                                                trkidtruth_pandoraNu;
   TArrayProxy<TArrayType<Short_t,3> >                                              trkorigin_pandoraNu;
   TArrayProxy<TArrayType<Int_t,3> >                                                trkpdgtruth_pandoraNu;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkefftruth_pandoraNu;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpurtruth_pandoraNu;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpitchc_pandoraNu;
   TArrayProxy<TArrayType<Short_t,3> >                                              ntrkhits_pandoraNu;
   TArrayProxy<TMultiArrayType<TArrayType<Float_t,2000> ,3> >                       trkdedx_pandoraNu;
   TArrayProxy<TMultiArrayType<TArrayType<Float_t,2000> ,3> >                       trkdqdx_pandoraNu;
   TArrayProxy<TMultiArrayType<TArrayType<Float_t,2000> ,3> >                       trkresrg_pandoraNu;
   TArrayProxy<TMultiArrayType<TMultiArrayType<TArrayType<Float_t,3> ,2000> ,3> >   trkxyz_pandoraNu;
   TArrayFloatProxy                                                                 trkstartx_pandoraNu;
   TArrayFloatProxy                                                                 trkstarty_pandoraNu;
   TArrayFloatProxy                                                                 trkstartz_pandoraNu;
   TArrayFloatProxy                                                                 trkstartd_pandoraNu;
   TArrayFloatProxy                                                                 trkendx_pandoraNu;
   TArrayFloatProxy                                                                 trkendy_pandoraNu;
   TArrayFloatProxy                                                                 trkendz_pandoraNu;
   TArrayFloatProxy                                                                 trkendd_pandoraNu;
   TArrayFloatProxy                                                                 trkflashT0_pandoraNu;
   TArrayFloatProxy                                                                 trktrueT0_pandoraNu;
   TArrayIntProxy                                                                   trkg4id_pandoraNu;
   TArrayIntProxy                                                                   trkorig_pandoraNu;
   TArrayFloatProxy                                                                 trkpurity_pandoraNu;
   TArrayFloatProxy                                                                 trkcompleteness_pandoraNu;
   TArrayFloatProxy                                                                 trktheta_pandoraNu;
   TArrayFloatProxy                                                                 trkphi_pandoraNu;
   TArrayFloatProxy                                                                 trkstartdcosx_pandoraNu;
   TArrayFloatProxy                                                                 trkstartdcosy_pandoraNu;
   TArrayFloatProxy                                                                 trkstartdcosz_pandoraNu;
   TArrayFloatProxy                                                                 trkenddcosx_pandoraNu;
   TArrayFloatProxy                                                                 trkenddcosy_pandoraNu;
   TArrayFloatProxy                                                                 trkenddcosz_pandoraNu;
   TArrayFloatProxy                                                                 trkthetaxz_pandoraNu;
   TArrayFloatProxy                                                                 trkthetayz_pandoraNu;
   TArrayFloatProxy                                                                 trkmom_pandoraNu;
   TArrayFloatProxy                                                                 trkmomrange_pandoraNu;
   TArrayFloatProxy                                                                 trkmommschi2_pandoraNu;
   TArrayFloatProxy                                                                 trkmommsllhd_pandoraNu;
   TArrayFloatProxy                                                                 trklen_pandoraNu;
   TArrayShortProxy                                                                 trksvtxid_pandoraNu;
   TArrayShortProxy                                                                 trkevtxid_pandoraNu;
   TArrayProxy<TArrayType<Int_t,3> >                                                trkpidpdg_pandoraNu;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchi_pandoraNu;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchipr_pandoraNu;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchika_pandoraNu;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchipi_pandoraNu;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchimu_pandoraNu;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidpida_pandoraNu;
   TArrayShortProxy                                                                 trkpidbestplane_pandoraNu;
   TArrayShortProxy                                                                 trkhasPFParticle_pandoraNu;
   TArrayShortProxy                                                                 trkPFParticleID_pandoraNu;
   TShortProxy                                                                      ntracks_pandoraNuKHit;
   TArrayShortProxy                                                                 trkId_pandoraNuKHit;
   TArrayShortProxy                                                                 trkncosmictags_tagger_pandoraNuKHit;
   TArrayFloatProxy                                                                 trkcosmicscore_tagger_pandoraNuKHit;
   TArrayShortProxy                                                                 trkcosmictype_tagger_pandoraNuKHit;
   TArrayShortProxy                                                                 trkncosmictags_containmenttagger_pandoraNuKHit;
   TArrayFloatProxy                                                                 trkcosmicscore_containmenttagger_pandoraNuKHit;
   TArrayShortProxy                                                                 trkcosmictype_containmenttagger_pandoraNuKHit;
   TArrayShortProxy                                                                 trkncosmictags_flashmatch_pandoraNuKHit;
   TArrayFloatProxy                                                                 trkcosmicscore_flashmatch_pandoraNuKHit;
   TArrayShortProxy                                                                 trkcosmictype_flashmatch_pandoraNuKHit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkke_pandoraNuKHit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkrange_pandoraNuKHit;
   TArrayProxy<TArrayType<Int_t,3> >                                                trkidtruth_pandoraNuKHit;
   TArrayProxy<TArrayType<Short_t,3> >                                              trkorigin_pandoraNuKHit;
   TArrayProxy<TArrayType<Int_t,3> >                                                trkpdgtruth_pandoraNuKHit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkefftruth_pandoraNuKHit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpurtruth_pandoraNuKHit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpitchc_pandoraNuKHit;
   TArrayProxy<TArrayType<Short_t,3> >                                              ntrkhits_pandoraNuKHit;
   TArrayProxy<TMultiArrayType<TArrayType<Float_t,2000> ,3> >                       trkdedx_pandoraNuKHit;
   TArrayProxy<TMultiArrayType<TArrayType<Float_t,2000> ,3> >                       trkdqdx_pandoraNuKHit;
   TArrayProxy<TMultiArrayType<TArrayType<Float_t,2000> ,3> >                       trkresrg_pandoraNuKHit;
   TArrayProxy<TMultiArrayType<TMultiArrayType<TArrayType<Float_t,3> ,2000> ,3> >   trkxyz_pandoraNuKHit;
   TArrayFloatProxy                                                                 trkstartx_pandoraNuKHit;
   TArrayFloatProxy                                                                 trkstarty_pandoraNuKHit;
   TArrayFloatProxy                                                                 trkstartz_pandoraNuKHit;
   TArrayFloatProxy                                                                 trkstartd_pandoraNuKHit;
   TArrayFloatProxy                                                                 trkendx_pandoraNuKHit;
   TArrayFloatProxy                                                                 trkendy_pandoraNuKHit;
   TArrayFloatProxy                                                                 trkendz_pandoraNuKHit;
   TArrayFloatProxy                                                                 trkendd_pandoraNuKHit;
   TArrayFloatProxy                                                                 trkflashT0_pandoraNuKHit;
   TArrayFloatProxy                                                                 trktrueT0_pandoraNuKHit;
   TArrayIntProxy                                                                   trkg4id_pandoraNuKHit;
   TArrayIntProxy                                                                   trkorig_pandoraNuKHit;
   TArrayFloatProxy                                                                 trkpurity_pandoraNuKHit;
   TArrayFloatProxy                                                                 trkcompleteness_pandoraNuKHit;
   TArrayFloatProxy                                                                 trktheta_pandoraNuKHit;
   TArrayFloatProxy                                                                 trkphi_pandoraNuKHit;
   TArrayFloatProxy                                                                 trkstartdcosx_pandoraNuKHit;
   TArrayFloatProxy                                                                 trkstartdcosy_pandoraNuKHit;
   TArrayFloatProxy                                                                 trkstartdcosz_pandoraNuKHit;
   TArrayFloatProxy                                                                 trkenddcosx_pandoraNuKHit;
   TArrayFloatProxy                                                                 trkenddcosy_pandoraNuKHit;
   TArrayFloatProxy                                                                 trkenddcosz_pandoraNuKHit;
   TArrayFloatProxy                                                                 trkthetaxz_pandoraNuKHit;
   TArrayFloatProxy                                                                 trkthetayz_pandoraNuKHit;
   TArrayFloatProxy                                                                 trkmom_pandoraNuKHit;
   TArrayFloatProxy                                                                 trkmomrange_pandoraNuKHit;
   TArrayFloatProxy                                                                 trkmommschi2_pandoraNuKHit;
   TArrayFloatProxy                                                                 trkmommsllhd_pandoraNuKHit;
   TArrayFloatProxy                                                                 trklen_pandoraNuKHit;
   TArrayShortProxy                                                                 trksvtxid_pandoraNuKHit;
   TArrayShortProxy                                                                 trkevtxid_pandoraNuKHit;
   TArrayProxy<TArrayType<Int_t,3> >                                                trkpidpdg_pandoraNuKHit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchi_pandoraNuKHit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchipr_pandoraNuKHit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchika_pandoraNuKHit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchipi_pandoraNuKHit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchimu_pandoraNuKHit;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidpida_pandoraNuKHit;
   TArrayShortProxy                                                                 trkpidbestplane_pandoraNuKHit;
   TArrayShortProxy                                                                 trkhasPFParticle_pandoraNuKHit;
   TArrayShortProxy                                                                 trkPFParticleID_pandoraNuKHit;
   TShortProxy                                                                      ntracks_pandoraNuPMA;
   TArrayShortProxy                                                                 trkId_pandoraNuPMA;
   TArrayShortProxy                                                                 trkncosmictags_tagger_pandoraNuPMA;
   TArrayFloatProxy                                                                 trkcosmicscore_tagger_pandoraNuPMA;
   TArrayShortProxy                                                                 trkcosmictype_tagger_pandoraNuPMA;
   TArrayShortProxy                                                                 trkncosmictags_containmenttagger_pandoraNuPMA;
   TArrayFloatProxy                                                                 trkcosmicscore_containmenttagger_pandoraNuPMA;
   TArrayShortProxy                                                                 trkcosmictype_containmenttagger_pandoraNuPMA;
   TArrayShortProxy                                                                 trkncosmictags_flashmatch_pandoraNuPMA;
   TArrayFloatProxy                                                                 trkcosmicscore_flashmatch_pandoraNuPMA;
   TArrayShortProxy                                                                 trkcosmictype_flashmatch_pandoraNuPMA;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkke_pandoraNuPMA;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkrange_pandoraNuPMA;
   TArrayProxy<TArrayType<Int_t,3> >                                                trkidtruth_pandoraNuPMA;
   TArrayProxy<TArrayType<Short_t,3> >                                              trkorigin_pandoraNuPMA;
   TArrayProxy<TArrayType<Int_t,3> >                                                trkpdgtruth_pandoraNuPMA;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkefftruth_pandoraNuPMA;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpurtruth_pandoraNuPMA;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpitchc_pandoraNuPMA;
   TArrayProxy<TArrayType<Short_t,3> >                                              ntrkhits_pandoraNuPMA;
   TArrayProxy<TMultiArrayType<TArrayType<Float_t,2000> ,3> >                       trkdedx_pandoraNuPMA;
   TArrayProxy<TMultiArrayType<TArrayType<Float_t,2000> ,3> >                       trkdqdx_pandoraNuPMA;
   TArrayProxy<TMultiArrayType<TArrayType<Float_t,2000> ,3> >                       trkresrg_pandoraNuPMA;
   TArrayProxy<TMultiArrayType<TMultiArrayType<TArrayType<Float_t,3> ,2000> ,3> >   trkxyz_pandoraNuPMA;
   TArrayFloatProxy                                                                 trkstartx_pandoraNuPMA;
   TArrayFloatProxy                                                                 trkstarty_pandoraNuPMA;
   TArrayFloatProxy                                                                 trkstartz_pandoraNuPMA;
   TArrayFloatProxy                                                                 trkstartd_pandoraNuPMA;
   TArrayFloatProxy                                                                 trkendx_pandoraNuPMA;
   TArrayFloatProxy                                                                 trkendy_pandoraNuPMA;
   TArrayFloatProxy                                                                 trkendz_pandoraNuPMA;
   TArrayFloatProxy                                                                 trkendd_pandoraNuPMA;
   TArrayFloatProxy                                                                 trkflashT0_pandoraNuPMA;
   TArrayFloatProxy                                                                 trktrueT0_pandoraNuPMA;
   TArrayIntProxy                                                                   trkg4id_pandoraNuPMA;
   TArrayIntProxy                                                                   trkorig_pandoraNuPMA;
   TArrayFloatProxy                                                                 trkpurity_pandoraNuPMA;
   TArrayFloatProxy                                                                 trkcompleteness_pandoraNuPMA;
   TArrayFloatProxy                                                                 trktheta_pandoraNuPMA;
   TArrayFloatProxy                                                                 trkphi_pandoraNuPMA;
   TArrayFloatProxy                                                                 trkstartdcosx_pandoraNuPMA;
   TArrayFloatProxy                                                                 trkstartdcosy_pandoraNuPMA;
   TArrayFloatProxy                                                                 trkstartdcosz_pandoraNuPMA;
   TArrayFloatProxy                                                                 trkenddcosx_pandoraNuPMA;
   TArrayFloatProxy                                                                 trkenddcosy_pandoraNuPMA;
   TArrayFloatProxy                                                                 trkenddcosz_pandoraNuPMA;
   TArrayFloatProxy                                                                 trkthetaxz_pandoraNuPMA;
   TArrayFloatProxy                                                                 trkthetayz_pandoraNuPMA;
   TArrayFloatProxy                                                                 trkmom_pandoraNuPMA;
   TArrayFloatProxy                                                                 trkmomrange_pandoraNuPMA;
   TArrayFloatProxy                                                                 trkmommschi2_pandoraNuPMA;
   TArrayFloatProxy                                                                 trkmommsllhd_pandoraNuPMA;
   TArrayFloatProxy                                                                 trklen_pandoraNuPMA;
   TArrayShortProxy                                                                 trksvtxid_pandoraNuPMA;
   TArrayShortProxy                                                                 trkevtxid_pandoraNuPMA;
   TArrayProxy<TArrayType<Int_t,3> >                                                trkpidpdg_pandoraNuPMA;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchi_pandoraNuPMA;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchipr_pandoraNuPMA;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchika_pandoraNuPMA;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchipi_pandoraNuPMA;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchimu_pandoraNuPMA;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidpida_pandoraNuPMA;
   TArrayShortProxy                                                                 trkpidbestplane_pandoraNuPMA;
   TArrayShortProxy                                                                 trkhasPFParticle_pandoraNuPMA;
   TArrayShortProxy                                                                 trkPFParticleID_pandoraNuPMA;
   TShortProxy                                                                      ntracks_pmtrack;
   TArrayShortProxy                                                                 trkId_pmtrack;
   TArrayShortProxy                                                                 trkncosmictags_tagger_pmtrack;
   TArrayFloatProxy                                                                 trkcosmicscore_tagger_pmtrack;
   TArrayShortProxy                                                                 trkcosmictype_tagger_pmtrack;
   TArrayShortProxy                                                                 trkncosmictags_containmenttagger_pmtrack;
   TArrayFloatProxy                                                                 trkcosmicscore_containmenttagger_pmtrack;
   TArrayShortProxy                                                                 trkcosmictype_containmenttagger_pmtrack;
   TArrayShortProxy                                                                 trkncosmictags_flashmatch_pmtrack;
   TArrayFloatProxy                                                                 trkcosmicscore_flashmatch_pmtrack;
   TArrayShortProxy                                                                 trkcosmictype_flashmatch_pmtrack;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkke_pmtrack;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkrange_pmtrack;
   TArrayProxy<TArrayType<Int_t,3> >                                                trkidtruth_pmtrack;
   TArrayProxy<TArrayType<Short_t,3> >                                              trkorigin_pmtrack;
   TArrayProxy<TArrayType<Int_t,3> >                                                trkpdgtruth_pmtrack;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkefftruth_pmtrack;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpurtruth_pmtrack;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpitchc_pmtrack;
   TArrayProxy<TArrayType<Short_t,3> >                                              ntrkhits_pmtrack;
   TArrayProxy<TMultiArrayType<TArrayType<Float_t,2000> ,3> >                       trkdedx_pmtrack;
   TArrayProxy<TMultiArrayType<TArrayType<Float_t,2000> ,3> >                       trkdqdx_pmtrack;
   TArrayProxy<TMultiArrayType<TArrayType<Float_t,2000> ,3> >                       trkresrg_pmtrack;
   TArrayProxy<TMultiArrayType<TMultiArrayType<TArrayType<Float_t,3> ,2000> ,3> >   trkxyz_pmtrack;
   TArrayFloatProxy                                                                 trkstartx_pmtrack;
   TArrayFloatProxy                                                                 trkstarty_pmtrack;
   TArrayFloatProxy                                                                 trkstartz_pmtrack;
   TArrayFloatProxy                                                                 trkstartd_pmtrack;
   TArrayFloatProxy                                                                 trkendx_pmtrack;
   TArrayFloatProxy                                                                 trkendy_pmtrack;
   TArrayFloatProxy                                                                 trkendz_pmtrack;
   TArrayFloatProxy                                                                 trkendd_pmtrack;
   TArrayFloatProxy                                                                 trkflashT0_pmtrack;
   TArrayFloatProxy                                                                 trktrueT0_pmtrack;
   TArrayIntProxy                                                                   trkg4id_pmtrack;
   TArrayIntProxy                                                                   trkorig_pmtrack;
   TArrayFloatProxy                                                                 trkpurity_pmtrack;
   TArrayFloatProxy                                                                 trkcompleteness_pmtrack;
   TArrayFloatProxy                                                                 trktheta_pmtrack;
   TArrayFloatProxy                                                                 trkphi_pmtrack;
   TArrayFloatProxy                                                                 trkstartdcosx_pmtrack;
   TArrayFloatProxy                                                                 trkstartdcosy_pmtrack;
   TArrayFloatProxy                                                                 trkstartdcosz_pmtrack;
   TArrayFloatProxy                                                                 trkenddcosx_pmtrack;
   TArrayFloatProxy                                                                 trkenddcosy_pmtrack;
   TArrayFloatProxy                                                                 trkenddcosz_pmtrack;
   TArrayFloatProxy                                                                 trkthetaxz_pmtrack;
   TArrayFloatProxy                                                                 trkthetayz_pmtrack;
   TArrayFloatProxy                                                                 trkmom_pmtrack;
   TArrayFloatProxy                                                                 trkmomrange_pmtrack;
   TArrayFloatProxy                                                                 trkmommschi2_pmtrack;
   TArrayFloatProxy                                                                 trkmommsllhd_pmtrack;
   TArrayFloatProxy                                                                 trklen_pmtrack;
   TArrayShortProxy                                                                 trksvtxid_pmtrack;
   TArrayShortProxy                                                                 trkevtxid_pmtrack;
   TArrayProxy<TArrayType<Int_t,3> >                                                trkpidpdg_pmtrack;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchi_pmtrack;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchipr_pmtrack;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchika_pmtrack;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchipi_pmtrack;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidchimu_pmtrack;
   TArrayProxy<TArrayType<Float_t,3> >                                              trkpidpida_pmtrack;
   TArrayShortProxy                                                                 trkpidbestplane_pmtrack;
   TArrayShortProxy                                                                 trkhasPFParticle_pmtrack;
   TArrayShortProxy                                                                 trkPFParticleID_pmtrack;
   TShortProxy                                                                      nvtx_cccluster;
   TArrayShortProxy                                                                 vtxId_cccluster;
   TArrayFloatProxy                                                                 vtxx_cccluster;
   TArrayFloatProxy                                                                 vtxy_cccluster;
   TArrayFloatProxy                                                                 vtxz_cccluster;
   TArrayShortProxy                                                                 vtxhasPFParticle_cccluster;
   TArrayShortProxy                                                                 vtxPFParticleID_cccluster;
   TShortProxy                                                                      nvtx_pandoraNu;
   TArrayShortProxy                                                                 vtxId_pandoraNu;
   TArrayFloatProxy                                                                 vtxx_pandoraNu;
   TArrayFloatProxy                                                                 vtxy_pandoraNu;
   TArrayFloatProxy                                                                 vtxz_pandoraNu;
   TArrayShortProxy                                                                 vtxhasPFParticle_pandoraNu;
   TArrayShortProxy                                                                 vtxPFParticleID_pandoraNu;
   TShortProxy                                                                      nvtx_pandoraCosmic;
   TArrayShortProxy                                                                 vtxId_pandoraCosmic;
   TArrayFloatProxy                                                                 vtxx_pandoraCosmic;
   TArrayFloatProxy                                                                 vtxy_pandoraCosmic;
   TArrayFloatProxy                                                                 vtxz_pandoraCosmic;
   TArrayShortProxy                                                                 vtxhasPFParticle_pandoraCosmic;
   TArrayShortProxy                                                                 vtxPFParticleID_pandoraCosmic;
   TShortProxy                                                                      nvtx_pmtrack;
   TArrayShortProxy                                                                 vtxId_pmtrack;
   TArrayFloatProxy                                                                 vtxx_pmtrack;
   TArrayFloatProxy                                                                 vtxy_pmtrack;
   TArrayFloatProxy                                                                 vtxz_pmtrack;
   TArrayShortProxy                                                                 vtxhasPFParticle_pmtrack;
   TArrayShortProxy                                                                 vtxPFParticleID_pmtrack;
   TShortProxy                                                                      nvtx_linecluster;
   TArrayShortProxy                                                                 vtxId_linecluster;
   TArrayFloatProxy                                                                 vtxx_linecluster;
   TArrayFloatProxy                                                                 vtxy_linecluster;
   TArrayFloatProxy                                                                 vtxz_linecluster;
   TArrayShortProxy                                                                 vtxhasPFParticle_linecluster;
   TArrayShortProxy                                                                 vtxPFParticleID_linecluster;


   generatedSel(TTree *tree=0) : 
      fChain(0),
      htemp(0),
      fDirector(tree,-1),
      fClass                (TClass::GetClass("generatedSel")),
      run                                                                             (&fDirector,"run"),
      subrun                                                                          (&fDirector,"subrun"),
      event                                                                           (&fDirector,"event"),
      evttime                                                                         (&fDirector,"evttime"),
      beamtime                                                                        (&fDirector,"beamtime"),
      pot                                                                             (&fDirector,"pot"),
      isdata                                                                          (&fDirector,"isdata"),
      taulife                                                                         (&fDirector,"taulife"),
      triggernumber                                                                   (&fDirector,"triggernumber"),
      triggertime                                                                     (&fDirector,"triggertime"),
      beamgatetime                                                                    (&fDirector,"beamgatetime"),
      triggerbits                                                                     (&fDirector,"triggerbits"),
      potbnb                                                                          (&fDirector,"potbnb"),
      potnumitgt                                                                      (&fDirector,"potnumitgt"),
      potnumi101                                                                      (&fDirector,"potnumi101"),
      no_hits                                                                         (&fDirector,"no_hits"),
      no_hits_stored                                                                  (&fDirector,"no_hits_stored"),
      hit_plane                                                                       (&fDirector,"hit_plane"),
      hit_wire                                                                        (&fDirector,"hit_wire"),
      hit_channel                                                                     (&fDirector,"hit_channel"),
      hit_peakT                                                                       (&fDirector,"hit_peakT"),
      hit_charge                                                                      (&fDirector,"hit_charge"),
      hit_ph                                                                          (&fDirector,"hit_ph"),
      hit_startT                                                                      (&fDirector,"hit_startT"),
      hit_endT                                                                        (&fDirector,"hit_endT"),
      hit_rms                                                                         (&fDirector,"hit_rms"),
      hit_trueX                                                                       (&fDirector,"hit_trueX"),
      hit_goodnessOfFit                                                               (&fDirector,"hit_goodnessOfFit"),
      hit_multiplicity                                                                (&fDirector,"hit_multiplicity"),
      hit_trkid                                                                       (&fDirector,"hit_trkid"),
      hit_trkKey                                                                      (&fDirector,"hit_trkKey"),
      hit_clusterid                                                                   (&fDirector,"hit_clusterid"),
      hit_clusterKey                                                                  (&fDirector,"hit_clusterKey"),
      hit_nelec                                                                       (&fDirector,"hit_nelec"),
      hit_energy                                                                      (&fDirector,"hit_energy"),
      nnuvtx                                                                          (&fDirector,"nnuvtx"),
      nuvtxx                                                                          (&fDirector,"nuvtxx"),
      nuvtxy                                                                          (&fDirector,"nuvtxy"),
      nuvtxz                                                                          (&fDirector,"nuvtxz"),
      nuvtxpdg                                                                        (&fDirector,"nuvtxpdg"),
      nclusters                                                                       (&fDirector,"nclusters"),
      clusterId                                                                       (&fDirector,"clusterId"),
      clusterView                                                                     (&fDirector,"clusterView"),
      cluster_StartCharge                                                             (&fDirector,"cluster_StartCharge"),
      cluster_StartAngle                                                              (&fDirector,"cluster_StartAngle"),
      cluster_EndCharge                                                               (&fDirector,"cluster_EndCharge"),
      cluster_EndAngle                                                                (&fDirector,"cluster_EndAngle"),
      cluster_Integral                                                                (&fDirector,"cluster_Integral"),
      cluster_IntegralAverage                                                         (&fDirector,"cluster_IntegralAverage"),
      cluster_SummedADC                                                               (&fDirector,"cluster_SummedADC"),
      cluster_SummedADCaverage                                                        (&fDirector,"cluster_SummedADCaverage"),
      cluster_MultipleHitDensity                                                      (&fDirector,"cluster_MultipleHitDensity"),
      cluster_Width                                                                   (&fDirector,"cluster_Width"),
      cluster_NHits                                                                   (&fDirector,"cluster_NHits"),
      cluster_StartWire                                                               (&fDirector,"cluster_StartWire"),
      cluster_StartTick                                                               (&fDirector,"cluster_StartTick"),
      cluster_EndWire                                                                 (&fDirector,"cluster_EndWire"),
      cluster_EndTick                                                                 (&fDirector,"cluster_EndTick"),
      cluncosmictags_tagger                                                           (&fDirector,"cluncosmictags_tagger"),
      clucosmicscore_tagger                                                           (&fDirector,"clucosmicscore_tagger"),
      clucosmictype_tagger                                                            (&fDirector,"clucosmictype_tagger"),
      no_flashes                                                                      (&fDirector,"no_flashes"),
      flash_time                                                                      (&fDirector,"flash_time"),
      flash_pe                                                                        (&fDirector,"flash_pe"),
      flash_ycenter                                                                   (&fDirector,"flash_ycenter"),
      flash_zcenter                                                                   (&fDirector,"flash_zcenter"),
      flash_ywidth                                                                    (&fDirector,"flash_ywidth"),
      flash_zwidth                                                                    (&fDirector,"flash_zwidth"),
      flash_timewidth                                                                 (&fDirector,"flash_timewidth"),
      kNTracker                                                                       (&fDirector,"kNTracker"),
      kNVertexAlgos                                                                   (&fDirector,"kNVertexAlgos"),
      nPFParticles                                                                    (&fDirector,"nPFParticles"),
      pfp_selfID                                                                      (&fDirector,"pfp_selfID"),
      pfp_isPrimary                                                                   (&fDirector,"pfp_isPrimary"),
      pfp_numDaughters                                                                (&fDirector,"pfp_numDaughters"),
      pfp_daughterIDs                                                                 (&fDirector,"pfp_daughterIDs"),
      pfp_parentID                                                                    (&fDirector,"pfp_parentID"),
      pfp_vertexID                                                                    (&fDirector,"pfp_vertexID"),
      pfp_isShower                                                                    (&fDirector,"pfp_isShower"),
      pfp_isTrack                                                                     (&fDirector,"pfp_isTrack"),
      pfp_trackID                                                                     (&fDirector,"pfp_trackID"),
      pfp_showerID                                                                    (&fDirector,"pfp_showerID"),
      pfp_pdgCode                                                                     (&fDirector,"pfp_pdgCode"),
      pfp_numClusters                                                                 (&fDirector,"pfp_numClusters"),
      pfp_clusterIDs                                                                  (&fDirector,"pfp_clusterIDs"),
      pfp_isNeutrino                                                                  (&fDirector,"pfp_isNeutrino"),
      pfp_numNeutrinos                                                                (&fDirector,"pfp_numNeutrinos"),
      pfp_neutrinoIDs                                                                 (&fDirector,"pfp_neutrinoIDs"),
      ntracks_trackkalmanhit                                                          (&fDirector,"ntracks_trackkalmanhit"),
      trkId_trackkalmanhit                                                            (&fDirector,"trkId_trackkalmanhit"),
      trkncosmictags_tagger_trackkalmanhit                                            (&fDirector,"trkncosmictags_tagger_trackkalmanhit"),
      trkcosmicscore_tagger_trackkalmanhit                                            (&fDirector,"trkcosmicscore_tagger_trackkalmanhit"),
      trkcosmictype_tagger_trackkalmanhit                                             (&fDirector,"trkcosmictype_tagger_trackkalmanhit"),
      trkncosmictags_containmenttagger_trackkalmanhit                                 (&fDirector,"trkncosmictags_containmenttagger_trackkalmanhit"),
      trkcosmicscore_containmenttagger_trackkalmanhit                                 (&fDirector,"trkcosmicscore_containmenttagger_trackkalmanhit"),
      trkcosmictype_containmenttagger_trackkalmanhit                                  (&fDirector,"trkcosmictype_containmenttagger_trackkalmanhit"),
      trkncosmictags_flashmatch_trackkalmanhit                                        (&fDirector,"trkncosmictags_flashmatch_trackkalmanhit"),
      trkcosmicscore_flashmatch_trackkalmanhit                                        (&fDirector,"trkcosmicscore_flashmatch_trackkalmanhit"),
      trkcosmictype_flashmatch_trackkalmanhit                                         (&fDirector,"trkcosmictype_flashmatch_trackkalmanhit"),
      trkke_trackkalmanhit                                                            (&fDirector,"trkke_trackkalmanhit"),
      trkrange_trackkalmanhit                                                         (&fDirector,"trkrange_trackkalmanhit"),
      trkidtruth_trackkalmanhit                                                       (&fDirector,"trkidtruth_trackkalmanhit"),
      trkorigin_trackkalmanhit                                                        (&fDirector,"trkorigin_trackkalmanhit"),
      trkpdgtruth_trackkalmanhit                                                      (&fDirector,"trkpdgtruth_trackkalmanhit"),
      trkefftruth_trackkalmanhit                                                      (&fDirector,"trkefftruth_trackkalmanhit"),
      trkpurtruth_trackkalmanhit                                                      (&fDirector,"trkpurtruth_trackkalmanhit"),
      trkpitchc_trackkalmanhit                                                        (&fDirector,"trkpitchc_trackkalmanhit"),
      ntrkhits_trackkalmanhit                                                         (&fDirector,"ntrkhits_trackkalmanhit"),
      trkdedx_trackkalmanhit                                                          (&fDirector,"trkdedx_trackkalmanhit"),
      trkdqdx_trackkalmanhit                                                          (&fDirector,"trkdqdx_trackkalmanhit"),
      trkresrg_trackkalmanhit                                                         (&fDirector,"trkresrg_trackkalmanhit"),
      trkxyz_trackkalmanhit                                                           (&fDirector,"trkxyz_trackkalmanhit"),
      trkstartx_trackkalmanhit                                                        (&fDirector,"trkstartx_trackkalmanhit"),
      trkstarty_trackkalmanhit                                                        (&fDirector,"trkstarty_trackkalmanhit"),
      trkstartz_trackkalmanhit                                                        (&fDirector,"trkstartz_trackkalmanhit"),
      trkstartd_trackkalmanhit                                                        (&fDirector,"trkstartd_trackkalmanhit"),
      trkendx_trackkalmanhit                                                          (&fDirector,"trkendx_trackkalmanhit"),
      trkendy_trackkalmanhit                                                          (&fDirector,"trkendy_trackkalmanhit"),
      trkendz_trackkalmanhit                                                          (&fDirector,"trkendz_trackkalmanhit"),
      trkendd_trackkalmanhit                                                          (&fDirector,"trkendd_trackkalmanhit"),
      trkflashT0_trackkalmanhit                                                       (&fDirector,"trkflashT0_trackkalmanhit"),
      trktrueT0_trackkalmanhit                                                        (&fDirector,"trktrueT0_trackkalmanhit"),
      trkg4id_trackkalmanhit                                                          (&fDirector,"trkg4id_trackkalmanhit"),
      trkorig_trackkalmanhit                                                          (&fDirector,"trkorig_trackkalmanhit"),
      trkpurity_trackkalmanhit                                                        (&fDirector,"trkpurity_trackkalmanhit"),
      trkcompleteness_trackkalmanhit                                                  (&fDirector,"trkcompleteness_trackkalmanhit"),
      trktheta_trackkalmanhit                                                         (&fDirector,"trktheta_trackkalmanhit"),
      trkphi_trackkalmanhit                                                           (&fDirector,"trkphi_trackkalmanhit"),
      trkstartdcosx_trackkalmanhit                                                    (&fDirector,"trkstartdcosx_trackkalmanhit"),
      trkstartdcosy_trackkalmanhit                                                    (&fDirector,"trkstartdcosy_trackkalmanhit"),
      trkstartdcosz_trackkalmanhit                                                    (&fDirector,"trkstartdcosz_trackkalmanhit"),
      trkenddcosx_trackkalmanhit                                                      (&fDirector,"trkenddcosx_trackkalmanhit"),
      trkenddcosy_trackkalmanhit                                                      (&fDirector,"trkenddcosy_trackkalmanhit"),
      trkenddcosz_trackkalmanhit                                                      (&fDirector,"trkenddcosz_trackkalmanhit"),
      trkthetaxz_trackkalmanhit                                                       (&fDirector,"trkthetaxz_trackkalmanhit"),
      trkthetayz_trackkalmanhit                                                       (&fDirector,"trkthetayz_trackkalmanhit"),
      trkmom_trackkalmanhit                                                           (&fDirector,"trkmom_trackkalmanhit"),
      trkmomrange_trackkalmanhit                                                      (&fDirector,"trkmomrange_trackkalmanhit"),
      trkmommschi2_trackkalmanhit                                                     (&fDirector,"trkmommschi2_trackkalmanhit"),
      trkmommsllhd_trackkalmanhit                                                     (&fDirector,"trkmommsllhd_trackkalmanhit"),
      trklen_trackkalmanhit                                                           (&fDirector,"trklen_trackkalmanhit"),
      trksvtxid_trackkalmanhit                                                        (&fDirector,"trksvtxid_trackkalmanhit"),
      trkevtxid_trackkalmanhit                                                        (&fDirector,"trkevtxid_trackkalmanhit"),
      trkpidpdg_trackkalmanhit                                                        (&fDirector,"trkpidpdg_trackkalmanhit"),
      trkpidchi_trackkalmanhit                                                        (&fDirector,"trkpidchi_trackkalmanhit"),
      trkpidchipr_trackkalmanhit                                                      (&fDirector,"trkpidchipr_trackkalmanhit"),
      trkpidchika_trackkalmanhit                                                      (&fDirector,"trkpidchika_trackkalmanhit"),
      trkpidchipi_trackkalmanhit                                                      (&fDirector,"trkpidchipi_trackkalmanhit"),
      trkpidchimu_trackkalmanhit                                                      (&fDirector,"trkpidchimu_trackkalmanhit"),
      trkpidpida_trackkalmanhit                                                       (&fDirector,"trkpidpida_trackkalmanhit"),
      trkpidbestplane_trackkalmanhit                                                  (&fDirector,"trkpidbestplane_trackkalmanhit"),
      trkhasPFParticle_trackkalmanhit                                                 (&fDirector,"trkhasPFParticle_trackkalmanhit"),
      trkPFParticleID_trackkalmanhit                                                  (&fDirector,"trkPFParticleID_trackkalmanhit"),
      ntracks_stitchkalmanhit                                                         (&fDirector,"ntracks_stitchkalmanhit"),
      trkId_stitchkalmanhit                                                           (&fDirector,"trkId_stitchkalmanhit"),
      trkncosmictags_tagger_stitchkalmanhit                                           (&fDirector,"trkncosmictags_tagger_stitchkalmanhit"),
      trkcosmicscore_tagger_stitchkalmanhit                                           (&fDirector,"trkcosmicscore_tagger_stitchkalmanhit"),
      trkcosmictype_tagger_stitchkalmanhit                                            (&fDirector,"trkcosmictype_tagger_stitchkalmanhit"),
      trkncosmictags_containmenttagger_stitchkalmanhit                                (&fDirector,"trkncosmictags_containmenttagger_stitchkalmanhit"),
      trkcosmicscore_containmenttagger_stitchkalmanhit                                (&fDirector,"trkcosmicscore_containmenttagger_stitchkalmanhit"),
      trkcosmictype_containmenttagger_stitchkalmanhit                                 (&fDirector,"trkcosmictype_containmenttagger_stitchkalmanhit"),
      trkncosmictags_flashmatch_stitchkalmanhit                                       (&fDirector,"trkncosmictags_flashmatch_stitchkalmanhit"),
      trkcosmicscore_flashmatch_stitchkalmanhit                                       (&fDirector,"trkcosmicscore_flashmatch_stitchkalmanhit"),
      trkcosmictype_flashmatch_stitchkalmanhit                                        (&fDirector,"trkcosmictype_flashmatch_stitchkalmanhit"),
      trkke_stitchkalmanhit                                                           (&fDirector,"trkke_stitchkalmanhit"),
      trkrange_stitchkalmanhit                                                        (&fDirector,"trkrange_stitchkalmanhit"),
      trkidtruth_stitchkalmanhit                                                      (&fDirector,"trkidtruth_stitchkalmanhit"),
      trkorigin_stitchkalmanhit                                                       (&fDirector,"trkorigin_stitchkalmanhit"),
      trkpdgtruth_stitchkalmanhit                                                     (&fDirector,"trkpdgtruth_stitchkalmanhit"),
      trkefftruth_stitchkalmanhit                                                     (&fDirector,"trkefftruth_stitchkalmanhit"),
      trkpurtruth_stitchkalmanhit                                                     (&fDirector,"trkpurtruth_stitchkalmanhit"),
      trkpitchc_stitchkalmanhit                                                       (&fDirector,"trkpitchc_stitchkalmanhit"),
      ntrkhits_stitchkalmanhit                                                        (&fDirector,"ntrkhits_stitchkalmanhit"),
      trkdedx_stitchkalmanhit                                                         (&fDirector,"trkdedx_stitchkalmanhit"),
      trkdqdx_stitchkalmanhit                                                         (&fDirector,"trkdqdx_stitchkalmanhit"),
      trkresrg_stitchkalmanhit                                                        (&fDirector,"trkresrg_stitchkalmanhit"),
      trkxyz_stitchkalmanhit                                                          (&fDirector,"trkxyz_stitchkalmanhit"),
      trkstartx_stitchkalmanhit                                                       (&fDirector,"trkstartx_stitchkalmanhit"),
      trkstarty_stitchkalmanhit                                                       (&fDirector,"trkstarty_stitchkalmanhit"),
      trkstartz_stitchkalmanhit                                                       (&fDirector,"trkstartz_stitchkalmanhit"),
      trkstartd_stitchkalmanhit                                                       (&fDirector,"trkstartd_stitchkalmanhit"),
      trkendx_stitchkalmanhit                                                         (&fDirector,"trkendx_stitchkalmanhit"),
      trkendy_stitchkalmanhit                                                         (&fDirector,"trkendy_stitchkalmanhit"),
      trkendz_stitchkalmanhit                                                         (&fDirector,"trkendz_stitchkalmanhit"),
      trkendd_stitchkalmanhit                                                         (&fDirector,"trkendd_stitchkalmanhit"),
      trkflashT0_stitchkalmanhit                                                      (&fDirector,"trkflashT0_stitchkalmanhit"),
      trktrueT0_stitchkalmanhit                                                       (&fDirector,"trktrueT0_stitchkalmanhit"),
      trkg4id_stitchkalmanhit                                                         (&fDirector,"trkg4id_stitchkalmanhit"),
      trkorig_stitchkalmanhit                                                         (&fDirector,"trkorig_stitchkalmanhit"),
      trkpurity_stitchkalmanhit                                                       (&fDirector,"trkpurity_stitchkalmanhit"),
      trkcompleteness_stitchkalmanhit                                                 (&fDirector,"trkcompleteness_stitchkalmanhit"),
      trktheta_stitchkalmanhit                                                        (&fDirector,"trktheta_stitchkalmanhit"),
      trkphi_stitchkalmanhit                                                          (&fDirector,"trkphi_stitchkalmanhit"),
      trkstartdcosx_stitchkalmanhit                                                   (&fDirector,"trkstartdcosx_stitchkalmanhit"),
      trkstartdcosy_stitchkalmanhit                                                   (&fDirector,"trkstartdcosy_stitchkalmanhit"),
      trkstartdcosz_stitchkalmanhit                                                   (&fDirector,"trkstartdcosz_stitchkalmanhit"),
      trkenddcosx_stitchkalmanhit                                                     (&fDirector,"trkenddcosx_stitchkalmanhit"),
      trkenddcosy_stitchkalmanhit                                                     (&fDirector,"trkenddcosy_stitchkalmanhit"),
      trkenddcosz_stitchkalmanhit                                                     (&fDirector,"trkenddcosz_stitchkalmanhit"),
      trkthetaxz_stitchkalmanhit                                                      (&fDirector,"trkthetaxz_stitchkalmanhit"),
      trkthetayz_stitchkalmanhit                                                      (&fDirector,"trkthetayz_stitchkalmanhit"),
      trkmom_stitchkalmanhit                                                          (&fDirector,"trkmom_stitchkalmanhit"),
      trkmomrange_stitchkalmanhit                                                     (&fDirector,"trkmomrange_stitchkalmanhit"),
      trkmommschi2_stitchkalmanhit                                                    (&fDirector,"trkmommschi2_stitchkalmanhit"),
      trkmommsllhd_stitchkalmanhit                                                    (&fDirector,"trkmommsllhd_stitchkalmanhit"),
      trklen_stitchkalmanhit                                                          (&fDirector,"trklen_stitchkalmanhit"),
      trksvtxid_stitchkalmanhit                                                       (&fDirector,"trksvtxid_stitchkalmanhit"),
      trkevtxid_stitchkalmanhit                                                       (&fDirector,"trkevtxid_stitchkalmanhit"),
      trkpidpdg_stitchkalmanhit                                                       (&fDirector,"trkpidpdg_stitchkalmanhit"),
      trkpidchi_stitchkalmanhit                                                       (&fDirector,"trkpidchi_stitchkalmanhit"),
      trkpidchipr_stitchkalmanhit                                                     (&fDirector,"trkpidchipr_stitchkalmanhit"),
      trkpidchika_stitchkalmanhit                                                     (&fDirector,"trkpidchika_stitchkalmanhit"),
      trkpidchipi_stitchkalmanhit                                                     (&fDirector,"trkpidchipi_stitchkalmanhit"),
      trkpidchimu_stitchkalmanhit                                                     (&fDirector,"trkpidchimu_stitchkalmanhit"),
      trkpidpida_stitchkalmanhit                                                      (&fDirector,"trkpidpida_stitchkalmanhit"),
      trkpidbestplane_stitchkalmanhit                                                 (&fDirector,"trkpidbestplane_stitchkalmanhit"),
      trkhasPFParticle_stitchkalmanhit                                                (&fDirector,"trkhasPFParticle_stitchkalmanhit"),
      trkPFParticleID_stitchkalmanhit                                                 (&fDirector,"trkPFParticleID_stitchkalmanhit"),
      ntracks_pandoraCosmic                                                           (&fDirector,"ntracks_pandoraCosmic"),
      trkId_pandoraCosmic                                                             (&fDirector,"trkId_pandoraCosmic"),
      trkncosmictags_tagger_pandoraCosmic                                             (&fDirector,"trkncosmictags_tagger_pandoraCosmic"),
      trkcosmicscore_tagger_pandoraCosmic                                             (&fDirector,"trkcosmicscore_tagger_pandoraCosmic"),
      trkcosmictype_tagger_pandoraCosmic                                              (&fDirector,"trkcosmictype_tagger_pandoraCosmic"),
      trkncosmictags_containmenttagger_pandoraCosmic                                  (&fDirector,"trkncosmictags_containmenttagger_pandoraCosmic"),
      trkcosmicscore_containmenttagger_pandoraCosmic                                  (&fDirector,"trkcosmicscore_containmenttagger_pandoraCosmic"),
      trkcosmictype_containmenttagger_pandoraCosmic                                   (&fDirector,"trkcosmictype_containmenttagger_pandoraCosmic"),
      trkncosmictags_flashmatch_pandoraCosmic                                         (&fDirector,"trkncosmictags_flashmatch_pandoraCosmic"),
      trkcosmicscore_flashmatch_pandoraCosmic                                         (&fDirector,"trkcosmicscore_flashmatch_pandoraCosmic"),
      trkcosmictype_flashmatch_pandoraCosmic                                          (&fDirector,"trkcosmictype_flashmatch_pandoraCosmic"),
      trkke_pandoraCosmic                                                             (&fDirector,"trkke_pandoraCosmic"),
      trkrange_pandoraCosmic                                                          (&fDirector,"trkrange_pandoraCosmic"),
      trkidtruth_pandoraCosmic                                                        (&fDirector,"trkidtruth_pandoraCosmic"),
      trkorigin_pandoraCosmic                                                         (&fDirector,"trkorigin_pandoraCosmic"),
      trkpdgtruth_pandoraCosmic                                                       (&fDirector,"trkpdgtruth_pandoraCosmic"),
      trkefftruth_pandoraCosmic                                                       (&fDirector,"trkefftruth_pandoraCosmic"),
      trkpurtruth_pandoraCosmic                                                       (&fDirector,"trkpurtruth_pandoraCosmic"),
      trkpitchc_pandoraCosmic                                                         (&fDirector,"trkpitchc_pandoraCosmic"),
      ntrkhits_pandoraCosmic                                                          (&fDirector,"ntrkhits_pandoraCosmic"),
      trkdedx_pandoraCosmic                                                           (&fDirector,"trkdedx_pandoraCosmic"),
      trkdqdx_pandoraCosmic                                                           (&fDirector,"trkdqdx_pandoraCosmic"),
      trkresrg_pandoraCosmic                                                          (&fDirector,"trkresrg_pandoraCosmic"),
      trkxyz_pandoraCosmic                                                            (&fDirector,"trkxyz_pandoraCosmic"),
      trkstartx_pandoraCosmic                                                         (&fDirector,"trkstartx_pandoraCosmic"),
      trkstarty_pandoraCosmic                                                         (&fDirector,"trkstarty_pandoraCosmic"),
      trkstartz_pandoraCosmic                                                         (&fDirector,"trkstartz_pandoraCosmic"),
      trkstartd_pandoraCosmic                                                         (&fDirector,"trkstartd_pandoraCosmic"),
      trkendx_pandoraCosmic                                                           (&fDirector,"trkendx_pandoraCosmic"),
      trkendy_pandoraCosmic                                                           (&fDirector,"trkendy_pandoraCosmic"),
      trkendz_pandoraCosmic                                                           (&fDirector,"trkendz_pandoraCosmic"),
      trkendd_pandoraCosmic                                                           (&fDirector,"trkendd_pandoraCosmic"),
      trkflashT0_pandoraCosmic                                                        (&fDirector,"trkflashT0_pandoraCosmic"),
      trktrueT0_pandoraCosmic                                                         (&fDirector,"trktrueT0_pandoraCosmic"),
      trkg4id_pandoraCosmic                                                           (&fDirector,"trkg4id_pandoraCosmic"),
      trkorig_pandoraCosmic                                                           (&fDirector,"trkorig_pandoraCosmic"),
      trkpurity_pandoraCosmic                                                         (&fDirector,"trkpurity_pandoraCosmic"),
      trkcompleteness_pandoraCosmic                                                   (&fDirector,"trkcompleteness_pandoraCosmic"),
      trktheta_pandoraCosmic                                                          (&fDirector,"trktheta_pandoraCosmic"),
      trkphi_pandoraCosmic                                                            (&fDirector,"trkphi_pandoraCosmic"),
      trkstartdcosx_pandoraCosmic                                                     (&fDirector,"trkstartdcosx_pandoraCosmic"),
      trkstartdcosy_pandoraCosmic                                                     (&fDirector,"trkstartdcosy_pandoraCosmic"),
      trkstartdcosz_pandoraCosmic                                                     (&fDirector,"trkstartdcosz_pandoraCosmic"),
      trkenddcosx_pandoraCosmic                                                       (&fDirector,"trkenddcosx_pandoraCosmic"),
      trkenddcosy_pandoraCosmic                                                       (&fDirector,"trkenddcosy_pandoraCosmic"),
      trkenddcosz_pandoraCosmic                                                       (&fDirector,"trkenddcosz_pandoraCosmic"),
      trkthetaxz_pandoraCosmic                                                        (&fDirector,"trkthetaxz_pandoraCosmic"),
      trkthetayz_pandoraCosmic                                                        (&fDirector,"trkthetayz_pandoraCosmic"),
      trkmom_pandoraCosmic                                                            (&fDirector,"trkmom_pandoraCosmic"),
      trkmomrange_pandoraCosmic                                                       (&fDirector,"trkmomrange_pandoraCosmic"),
      trkmommschi2_pandoraCosmic                                                      (&fDirector,"trkmommschi2_pandoraCosmic"),
      trkmommsllhd_pandoraCosmic                                                      (&fDirector,"trkmommsllhd_pandoraCosmic"),
      trklen_pandoraCosmic                                                            (&fDirector,"trklen_pandoraCosmic"),
      trksvtxid_pandoraCosmic                                                         (&fDirector,"trksvtxid_pandoraCosmic"),
      trkevtxid_pandoraCosmic                                                         (&fDirector,"trkevtxid_pandoraCosmic"),
      trkpidpdg_pandoraCosmic                                                         (&fDirector,"trkpidpdg_pandoraCosmic"),
      trkpidchi_pandoraCosmic                                                         (&fDirector,"trkpidchi_pandoraCosmic"),
      trkpidchipr_pandoraCosmic                                                       (&fDirector,"trkpidchipr_pandoraCosmic"),
      trkpidchika_pandoraCosmic                                                       (&fDirector,"trkpidchika_pandoraCosmic"),
      trkpidchipi_pandoraCosmic                                                       (&fDirector,"trkpidchipi_pandoraCosmic"),
      trkpidchimu_pandoraCosmic                                                       (&fDirector,"trkpidchimu_pandoraCosmic"),
      trkpidpida_pandoraCosmic                                                        (&fDirector,"trkpidpida_pandoraCosmic"),
      trkpidbestplane_pandoraCosmic                                                   (&fDirector,"trkpidbestplane_pandoraCosmic"),
      trkhasPFParticle_pandoraCosmic                                                  (&fDirector,"trkhasPFParticle_pandoraCosmic"),
      trkPFParticleID_pandoraCosmic                                                   (&fDirector,"trkPFParticleID_pandoraCosmic"),
      ntracks_pandoraCosmicKHit                                                       (&fDirector,"ntracks_pandoraCosmicKHit"),
      trkId_pandoraCosmicKHit                                                         (&fDirector,"trkId_pandoraCosmicKHit"),
      trkncosmictags_tagger_pandoraCosmicKHit                                         (&fDirector,"trkncosmictags_tagger_pandoraCosmicKHit"),
      trkcosmicscore_tagger_pandoraCosmicKHit                                         (&fDirector,"trkcosmicscore_tagger_pandoraCosmicKHit"),
      trkcosmictype_tagger_pandoraCosmicKHit                                          (&fDirector,"trkcosmictype_tagger_pandoraCosmicKHit"),
      trkncosmictags_containmenttagger_pandoraCosmicKHit                              (&fDirector,"trkncosmictags_containmenttagger_pandoraCosmicKHit"),
      trkcosmicscore_containmenttagger_pandoraCosmicKHit                              (&fDirector,"trkcosmicscore_containmenttagger_pandoraCosmicKHit"),
      trkcosmictype_containmenttagger_pandoraCosmicKHit                               (&fDirector,"trkcosmictype_containmenttagger_pandoraCosmicKHit"),
      trkncosmictags_flashmatch_pandoraCosmicKHit                                     (&fDirector,"trkncosmictags_flashmatch_pandoraCosmicKHit"),
      trkcosmicscore_flashmatch_pandoraCosmicKHit                                     (&fDirector,"trkcosmicscore_flashmatch_pandoraCosmicKHit"),
      trkcosmictype_flashmatch_pandoraCosmicKHit                                      (&fDirector,"trkcosmictype_flashmatch_pandoraCosmicKHit"),
      trkke_pandoraCosmicKHit                                                         (&fDirector,"trkke_pandoraCosmicKHit"),
      trkrange_pandoraCosmicKHit                                                      (&fDirector,"trkrange_pandoraCosmicKHit"),
      trkidtruth_pandoraCosmicKHit                                                    (&fDirector,"trkidtruth_pandoraCosmicKHit"),
      trkorigin_pandoraCosmicKHit                                                     (&fDirector,"trkorigin_pandoraCosmicKHit"),
      trkpdgtruth_pandoraCosmicKHit                                                   (&fDirector,"trkpdgtruth_pandoraCosmicKHit"),
      trkefftruth_pandoraCosmicKHit                                                   (&fDirector,"trkefftruth_pandoraCosmicKHit"),
      trkpurtruth_pandoraCosmicKHit                                                   (&fDirector,"trkpurtruth_pandoraCosmicKHit"),
      trkpitchc_pandoraCosmicKHit                                                     (&fDirector,"trkpitchc_pandoraCosmicKHit"),
      ntrkhits_pandoraCosmicKHit                                                      (&fDirector,"ntrkhits_pandoraCosmicKHit"),
      trkdedx_pandoraCosmicKHit                                                       (&fDirector,"trkdedx_pandoraCosmicKHit"),
      trkdqdx_pandoraCosmicKHit                                                       (&fDirector,"trkdqdx_pandoraCosmicKHit"),
      trkresrg_pandoraCosmicKHit                                                      (&fDirector,"trkresrg_pandoraCosmicKHit"),
      trkxyz_pandoraCosmicKHit                                                        (&fDirector,"trkxyz_pandoraCosmicKHit"),
      trkstartx_pandoraCosmicKHit                                                     (&fDirector,"trkstartx_pandoraCosmicKHit"),
      trkstarty_pandoraCosmicKHit                                                     (&fDirector,"trkstarty_pandoraCosmicKHit"),
      trkstartz_pandoraCosmicKHit                                                     (&fDirector,"trkstartz_pandoraCosmicKHit"),
      trkstartd_pandoraCosmicKHit                                                     (&fDirector,"trkstartd_pandoraCosmicKHit"),
      trkendx_pandoraCosmicKHit                                                       (&fDirector,"trkendx_pandoraCosmicKHit"),
      trkendy_pandoraCosmicKHit                                                       (&fDirector,"trkendy_pandoraCosmicKHit"),
      trkendz_pandoraCosmicKHit                                                       (&fDirector,"trkendz_pandoraCosmicKHit"),
      trkendd_pandoraCosmicKHit                                                       (&fDirector,"trkendd_pandoraCosmicKHit"),
      trkflashT0_pandoraCosmicKHit                                                    (&fDirector,"trkflashT0_pandoraCosmicKHit"),
      trktrueT0_pandoraCosmicKHit                                                     (&fDirector,"trktrueT0_pandoraCosmicKHit"),
      trkg4id_pandoraCosmicKHit                                                       (&fDirector,"trkg4id_pandoraCosmicKHit"),
      trkorig_pandoraCosmicKHit                                                       (&fDirector,"trkorig_pandoraCosmicKHit"),
      trkpurity_pandoraCosmicKHit                                                     (&fDirector,"trkpurity_pandoraCosmicKHit"),
      trkcompleteness_pandoraCosmicKHit                                               (&fDirector,"trkcompleteness_pandoraCosmicKHit"),
      trktheta_pandoraCosmicKHit                                                      (&fDirector,"trktheta_pandoraCosmicKHit"),
      trkphi_pandoraCosmicKHit                                                        (&fDirector,"trkphi_pandoraCosmicKHit"),
      trkstartdcosx_pandoraCosmicKHit                                                 (&fDirector,"trkstartdcosx_pandoraCosmicKHit"),
      trkstartdcosy_pandoraCosmicKHit                                                 (&fDirector,"trkstartdcosy_pandoraCosmicKHit"),
      trkstartdcosz_pandoraCosmicKHit                                                 (&fDirector,"trkstartdcosz_pandoraCosmicKHit"),
      trkenddcosx_pandoraCosmicKHit                                                   (&fDirector,"trkenddcosx_pandoraCosmicKHit"),
      trkenddcosy_pandoraCosmicKHit                                                   (&fDirector,"trkenddcosy_pandoraCosmicKHit"),
      trkenddcosz_pandoraCosmicKHit                                                   (&fDirector,"trkenddcosz_pandoraCosmicKHit"),
      trkthetaxz_pandoraCosmicKHit                                                    (&fDirector,"trkthetaxz_pandoraCosmicKHit"),
      trkthetayz_pandoraCosmicKHit                                                    (&fDirector,"trkthetayz_pandoraCosmicKHit"),
      trkmom_pandoraCosmicKHit                                                        (&fDirector,"trkmom_pandoraCosmicKHit"),
      trkmomrange_pandoraCosmicKHit                                                   (&fDirector,"trkmomrange_pandoraCosmicKHit"),
      trkmommschi2_pandoraCosmicKHit                                                  (&fDirector,"trkmommschi2_pandoraCosmicKHit"),
      trkmommsllhd_pandoraCosmicKHit                                                  (&fDirector,"trkmommsllhd_pandoraCosmicKHit"),
      trklen_pandoraCosmicKHit                                                        (&fDirector,"trklen_pandoraCosmicKHit"),
      trksvtxid_pandoraCosmicKHit                                                     (&fDirector,"trksvtxid_pandoraCosmicKHit"),
      trkevtxid_pandoraCosmicKHit                                                     (&fDirector,"trkevtxid_pandoraCosmicKHit"),
      trkpidpdg_pandoraCosmicKHit                                                     (&fDirector,"trkpidpdg_pandoraCosmicKHit"),
      trkpidchi_pandoraCosmicKHit                                                     (&fDirector,"trkpidchi_pandoraCosmicKHit"),
      trkpidchipr_pandoraCosmicKHit                                                   (&fDirector,"trkpidchipr_pandoraCosmicKHit"),
      trkpidchika_pandoraCosmicKHit                                                   (&fDirector,"trkpidchika_pandoraCosmicKHit"),
      trkpidchipi_pandoraCosmicKHit                                                   (&fDirector,"trkpidchipi_pandoraCosmicKHit"),
      trkpidchimu_pandoraCosmicKHit                                                   (&fDirector,"trkpidchimu_pandoraCosmicKHit"),
      trkpidpida_pandoraCosmicKHit                                                    (&fDirector,"trkpidpida_pandoraCosmicKHit"),
      trkpidbestplane_pandoraCosmicKHit                                               (&fDirector,"trkpidbestplane_pandoraCosmicKHit"),
      trkhasPFParticle_pandoraCosmicKHit                                              (&fDirector,"trkhasPFParticle_pandoraCosmicKHit"),
      trkPFParticleID_pandoraCosmicKHit                                               (&fDirector,"trkPFParticleID_pandoraCosmicKHit"),
      ntracks_pandoraNu                                                               (&fDirector,"ntracks_pandoraNu"),
      trkId_pandoraNu                                                                 (&fDirector,"trkId_pandoraNu"),
      trkncosmictags_tagger_pandoraNu                                                 (&fDirector,"trkncosmictags_tagger_pandoraNu"),
      trkcosmicscore_tagger_pandoraNu                                                 (&fDirector,"trkcosmicscore_tagger_pandoraNu"),
      trkcosmictype_tagger_pandoraNu                                                  (&fDirector,"trkcosmictype_tagger_pandoraNu"),
      trkncosmictags_containmenttagger_pandoraNu                                      (&fDirector,"trkncosmictags_containmenttagger_pandoraNu"),
      trkcosmicscore_containmenttagger_pandoraNu                                      (&fDirector,"trkcosmicscore_containmenttagger_pandoraNu"),
      trkcosmictype_containmenttagger_pandoraNu                                       (&fDirector,"trkcosmictype_containmenttagger_pandoraNu"),
      trkncosmictags_flashmatch_pandoraNu                                             (&fDirector,"trkncosmictags_flashmatch_pandoraNu"),
      trkcosmicscore_flashmatch_pandoraNu                                             (&fDirector,"trkcosmicscore_flashmatch_pandoraNu"),
      trkcosmictype_flashmatch_pandoraNu                                              (&fDirector,"trkcosmictype_flashmatch_pandoraNu"),
      trkke_pandoraNu                                                                 (&fDirector,"trkke_pandoraNu"),
      trkrange_pandoraNu                                                              (&fDirector,"trkrange_pandoraNu"),
      trkidtruth_pandoraNu                                                            (&fDirector,"trkidtruth_pandoraNu"),
      trkorigin_pandoraNu                                                             (&fDirector,"trkorigin_pandoraNu"),
      trkpdgtruth_pandoraNu                                                           (&fDirector,"trkpdgtruth_pandoraNu"),
      trkefftruth_pandoraNu                                                           (&fDirector,"trkefftruth_pandoraNu"),
      trkpurtruth_pandoraNu                                                           (&fDirector,"trkpurtruth_pandoraNu"),
      trkpitchc_pandoraNu                                                             (&fDirector,"trkpitchc_pandoraNu"),
      ntrkhits_pandoraNu                                                              (&fDirector,"ntrkhits_pandoraNu"),
      trkdedx_pandoraNu                                                               (&fDirector,"trkdedx_pandoraNu"),
      trkdqdx_pandoraNu                                                               (&fDirector,"trkdqdx_pandoraNu"),
      trkresrg_pandoraNu                                                              (&fDirector,"trkresrg_pandoraNu"),
      trkxyz_pandoraNu                                                                (&fDirector,"trkxyz_pandoraNu"),
      trkstartx_pandoraNu                                                             (&fDirector,"trkstartx_pandoraNu"),
      trkstarty_pandoraNu                                                             (&fDirector,"trkstarty_pandoraNu"),
      trkstartz_pandoraNu                                                             (&fDirector,"trkstartz_pandoraNu"),
      trkstartd_pandoraNu                                                             (&fDirector,"trkstartd_pandoraNu"),
      trkendx_pandoraNu                                                               (&fDirector,"trkendx_pandoraNu"),
      trkendy_pandoraNu                                                               (&fDirector,"trkendy_pandoraNu"),
      trkendz_pandoraNu                                                               (&fDirector,"trkendz_pandoraNu"),
      trkendd_pandoraNu                                                               (&fDirector,"trkendd_pandoraNu"),
      trkflashT0_pandoraNu                                                            (&fDirector,"trkflashT0_pandoraNu"),
      trktrueT0_pandoraNu                                                             (&fDirector,"trktrueT0_pandoraNu"),
      trkg4id_pandoraNu                                                               (&fDirector,"trkg4id_pandoraNu"),
      trkorig_pandoraNu                                                               (&fDirector,"trkorig_pandoraNu"),
      trkpurity_pandoraNu                                                             (&fDirector,"trkpurity_pandoraNu"),
      trkcompleteness_pandoraNu                                                       (&fDirector,"trkcompleteness_pandoraNu"),
      trktheta_pandoraNu                                                              (&fDirector,"trktheta_pandoraNu"),
      trkphi_pandoraNu                                                                (&fDirector,"trkphi_pandoraNu"),
      trkstartdcosx_pandoraNu                                                         (&fDirector,"trkstartdcosx_pandoraNu"),
      trkstartdcosy_pandoraNu                                                         (&fDirector,"trkstartdcosy_pandoraNu"),
      trkstartdcosz_pandoraNu                                                         (&fDirector,"trkstartdcosz_pandoraNu"),
      trkenddcosx_pandoraNu                                                           (&fDirector,"trkenddcosx_pandoraNu"),
      trkenddcosy_pandoraNu                                                           (&fDirector,"trkenddcosy_pandoraNu"),
      trkenddcosz_pandoraNu                                                           (&fDirector,"trkenddcosz_pandoraNu"),
      trkthetaxz_pandoraNu                                                            (&fDirector,"trkthetaxz_pandoraNu"),
      trkthetayz_pandoraNu                                                            (&fDirector,"trkthetayz_pandoraNu"),
      trkmom_pandoraNu                                                                (&fDirector,"trkmom_pandoraNu"),
      trkmomrange_pandoraNu                                                           (&fDirector,"trkmomrange_pandoraNu"),
      trkmommschi2_pandoraNu                                                          (&fDirector,"trkmommschi2_pandoraNu"),
      trkmommsllhd_pandoraNu                                                          (&fDirector,"trkmommsllhd_pandoraNu"),
      trklen_pandoraNu                                                                (&fDirector,"trklen_pandoraNu"),
      trksvtxid_pandoraNu                                                             (&fDirector,"trksvtxid_pandoraNu"),
      trkevtxid_pandoraNu                                                             (&fDirector,"trkevtxid_pandoraNu"),
      trkpidpdg_pandoraNu                                                             (&fDirector,"trkpidpdg_pandoraNu"),
      trkpidchi_pandoraNu                                                             (&fDirector,"trkpidchi_pandoraNu"),
      trkpidchipr_pandoraNu                                                           (&fDirector,"trkpidchipr_pandoraNu"),
      trkpidchika_pandoraNu                                                           (&fDirector,"trkpidchika_pandoraNu"),
      trkpidchipi_pandoraNu                                                           (&fDirector,"trkpidchipi_pandoraNu"),
      trkpidchimu_pandoraNu                                                           (&fDirector,"trkpidchimu_pandoraNu"),
      trkpidpida_pandoraNu                                                            (&fDirector,"trkpidpida_pandoraNu"),
      trkpidbestplane_pandoraNu                                                       (&fDirector,"trkpidbestplane_pandoraNu"),
      trkhasPFParticle_pandoraNu                                                      (&fDirector,"trkhasPFParticle_pandoraNu"),
      trkPFParticleID_pandoraNu                                                       (&fDirector,"trkPFParticleID_pandoraNu"),
      ntracks_pandoraNuKHit                                                           (&fDirector,"ntracks_pandoraNuKHit"),
      trkId_pandoraNuKHit                                                             (&fDirector,"trkId_pandoraNuKHit"),
      trkncosmictags_tagger_pandoraNuKHit                                             (&fDirector,"trkncosmictags_tagger_pandoraNuKHit"),
      trkcosmicscore_tagger_pandoraNuKHit                                             (&fDirector,"trkcosmicscore_tagger_pandoraNuKHit"),
      trkcosmictype_tagger_pandoraNuKHit                                              (&fDirector,"trkcosmictype_tagger_pandoraNuKHit"),
      trkncosmictags_containmenttagger_pandoraNuKHit                                  (&fDirector,"trkncosmictags_containmenttagger_pandoraNuKHit"),
      trkcosmicscore_containmenttagger_pandoraNuKHit                                  (&fDirector,"trkcosmicscore_containmenttagger_pandoraNuKHit"),
      trkcosmictype_containmenttagger_pandoraNuKHit                                   (&fDirector,"trkcosmictype_containmenttagger_pandoraNuKHit"),
      trkncosmictags_flashmatch_pandoraNuKHit                                         (&fDirector,"trkncosmictags_flashmatch_pandoraNuKHit"),
      trkcosmicscore_flashmatch_pandoraNuKHit                                         (&fDirector,"trkcosmicscore_flashmatch_pandoraNuKHit"),
      trkcosmictype_flashmatch_pandoraNuKHit                                          (&fDirector,"trkcosmictype_flashmatch_pandoraNuKHit"),
      trkke_pandoraNuKHit                                                             (&fDirector,"trkke_pandoraNuKHit"),
      trkrange_pandoraNuKHit                                                          (&fDirector,"trkrange_pandoraNuKHit"),
      trkidtruth_pandoraNuKHit                                                        (&fDirector,"trkidtruth_pandoraNuKHit"),
      trkorigin_pandoraNuKHit                                                         (&fDirector,"trkorigin_pandoraNuKHit"),
      trkpdgtruth_pandoraNuKHit                                                       (&fDirector,"trkpdgtruth_pandoraNuKHit"),
      trkefftruth_pandoraNuKHit                                                       (&fDirector,"trkefftruth_pandoraNuKHit"),
      trkpurtruth_pandoraNuKHit                                                       (&fDirector,"trkpurtruth_pandoraNuKHit"),
      trkpitchc_pandoraNuKHit                                                         (&fDirector,"trkpitchc_pandoraNuKHit"),
      ntrkhits_pandoraNuKHit                                                          (&fDirector,"ntrkhits_pandoraNuKHit"),
      trkdedx_pandoraNuKHit                                                           (&fDirector,"trkdedx_pandoraNuKHit"),
      trkdqdx_pandoraNuKHit                                                           (&fDirector,"trkdqdx_pandoraNuKHit"),
      trkresrg_pandoraNuKHit                                                          (&fDirector,"trkresrg_pandoraNuKHit"),
      trkxyz_pandoraNuKHit                                                            (&fDirector,"trkxyz_pandoraNuKHit"),
      trkstartx_pandoraNuKHit                                                         (&fDirector,"trkstartx_pandoraNuKHit"),
      trkstarty_pandoraNuKHit                                                         (&fDirector,"trkstarty_pandoraNuKHit"),
      trkstartz_pandoraNuKHit                                                         (&fDirector,"trkstartz_pandoraNuKHit"),
      trkstartd_pandoraNuKHit                                                         (&fDirector,"trkstartd_pandoraNuKHit"),
      trkendx_pandoraNuKHit                                                           (&fDirector,"trkendx_pandoraNuKHit"),
      trkendy_pandoraNuKHit                                                           (&fDirector,"trkendy_pandoraNuKHit"),
      trkendz_pandoraNuKHit                                                           (&fDirector,"trkendz_pandoraNuKHit"),
      trkendd_pandoraNuKHit                                                           (&fDirector,"trkendd_pandoraNuKHit"),
      trkflashT0_pandoraNuKHit                                                        (&fDirector,"trkflashT0_pandoraNuKHit"),
      trktrueT0_pandoraNuKHit                                                         (&fDirector,"trktrueT0_pandoraNuKHit"),
      trkg4id_pandoraNuKHit                                                           (&fDirector,"trkg4id_pandoraNuKHit"),
      trkorig_pandoraNuKHit                                                           (&fDirector,"trkorig_pandoraNuKHit"),
      trkpurity_pandoraNuKHit                                                         (&fDirector,"trkpurity_pandoraNuKHit"),
      trkcompleteness_pandoraNuKHit                                                   (&fDirector,"trkcompleteness_pandoraNuKHit"),
      trktheta_pandoraNuKHit                                                          (&fDirector,"trktheta_pandoraNuKHit"),
      trkphi_pandoraNuKHit                                                            (&fDirector,"trkphi_pandoraNuKHit"),
      trkstartdcosx_pandoraNuKHit                                                     (&fDirector,"trkstartdcosx_pandoraNuKHit"),
      trkstartdcosy_pandoraNuKHit                                                     (&fDirector,"trkstartdcosy_pandoraNuKHit"),
      trkstartdcosz_pandoraNuKHit                                                     (&fDirector,"trkstartdcosz_pandoraNuKHit"),
      trkenddcosx_pandoraNuKHit                                                       (&fDirector,"trkenddcosx_pandoraNuKHit"),
      trkenddcosy_pandoraNuKHit                                                       (&fDirector,"trkenddcosy_pandoraNuKHit"),
      trkenddcosz_pandoraNuKHit                                                       (&fDirector,"trkenddcosz_pandoraNuKHit"),
      trkthetaxz_pandoraNuKHit                                                        (&fDirector,"trkthetaxz_pandoraNuKHit"),
      trkthetayz_pandoraNuKHit                                                        (&fDirector,"trkthetayz_pandoraNuKHit"),
      trkmom_pandoraNuKHit                                                            (&fDirector,"trkmom_pandoraNuKHit"),
      trkmomrange_pandoraNuKHit                                                       (&fDirector,"trkmomrange_pandoraNuKHit"),
      trkmommschi2_pandoraNuKHit                                                      (&fDirector,"trkmommschi2_pandoraNuKHit"),
      trkmommsllhd_pandoraNuKHit                                                      (&fDirector,"trkmommsllhd_pandoraNuKHit"),
      trklen_pandoraNuKHit                                                            (&fDirector,"trklen_pandoraNuKHit"),
      trksvtxid_pandoraNuKHit                                                         (&fDirector,"trksvtxid_pandoraNuKHit"),
      trkevtxid_pandoraNuKHit                                                         (&fDirector,"trkevtxid_pandoraNuKHit"),
      trkpidpdg_pandoraNuKHit                                                         (&fDirector,"trkpidpdg_pandoraNuKHit"),
      trkpidchi_pandoraNuKHit                                                         (&fDirector,"trkpidchi_pandoraNuKHit"),
      trkpidchipr_pandoraNuKHit                                                       (&fDirector,"trkpidchipr_pandoraNuKHit"),
      trkpidchika_pandoraNuKHit                                                       (&fDirector,"trkpidchika_pandoraNuKHit"),
      trkpidchipi_pandoraNuKHit                                                       (&fDirector,"trkpidchipi_pandoraNuKHit"),
      trkpidchimu_pandoraNuKHit                                                       (&fDirector,"trkpidchimu_pandoraNuKHit"),
      trkpidpida_pandoraNuKHit                                                        (&fDirector,"trkpidpida_pandoraNuKHit"),
      trkpidbestplane_pandoraNuKHit                                                   (&fDirector,"trkpidbestplane_pandoraNuKHit"),
      trkhasPFParticle_pandoraNuKHit                                                  (&fDirector,"trkhasPFParticle_pandoraNuKHit"),
      trkPFParticleID_pandoraNuKHit                                                   (&fDirector,"trkPFParticleID_pandoraNuKHit"),
      ntracks_pandoraNuPMA                                                            (&fDirector,"ntracks_pandoraNuPMA"),
      trkId_pandoraNuPMA                                                              (&fDirector,"trkId_pandoraNuPMA"),
      trkncosmictags_tagger_pandoraNuPMA                                              (&fDirector,"trkncosmictags_tagger_pandoraNuPMA"),
      trkcosmicscore_tagger_pandoraNuPMA                                              (&fDirector,"trkcosmicscore_tagger_pandoraNuPMA"),
      trkcosmictype_tagger_pandoraNuPMA                                               (&fDirector,"trkcosmictype_tagger_pandoraNuPMA"),
      trkncosmictags_containmenttagger_pandoraNuPMA                                   (&fDirector,"trkncosmictags_containmenttagger_pandoraNuPMA"),
      trkcosmicscore_containmenttagger_pandoraNuPMA                                   (&fDirector,"trkcosmicscore_containmenttagger_pandoraNuPMA"),
      trkcosmictype_containmenttagger_pandoraNuPMA                                    (&fDirector,"trkcosmictype_containmenttagger_pandoraNuPMA"),
      trkncosmictags_flashmatch_pandoraNuPMA                                          (&fDirector,"trkncosmictags_flashmatch_pandoraNuPMA"),
      trkcosmicscore_flashmatch_pandoraNuPMA                                          (&fDirector,"trkcosmicscore_flashmatch_pandoraNuPMA"),
      trkcosmictype_flashmatch_pandoraNuPMA                                           (&fDirector,"trkcosmictype_flashmatch_pandoraNuPMA"),
      trkke_pandoraNuPMA                                                              (&fDirector,"trkke_pandoraNuPMA"),
      trkrange_pandoraNuPMA                                                           (&fDirector,"trkrange_pandoraNuPMA"),
      trkidtruth_pandoraNuPMA                                                         (&fDirector,"trkidtruth_pandoraNuPMA"),
      trkorigin_pandoraNuPMA                                                          (&fDirector,"trkorigin_pandoraNuPMA"),
      trkpdgtruth_pandoraNuPMA                                                        (&fDirector,"trkpdgtruth_pandoraNuPMA"),
      trkefftruth_pandoraNuPMA                                                        (&fDirector,"trkefftruth_pandoraNuPMA"),
      trkpurtruth_pandoraNuPMA                                                        (&fDirector,"trkpurtruth_pandoraNuPMA"),
      trkpitchc_pandoraNuPMA                                                          (&fDirector,"trkpitchc_pandoraNuPMA"),
      ntrkhits_pandoraNuPMA                                                           (&fDirector,"ntrkhits_pandoraNuPMA"),
      trkdedx_pandoraNuPMA                                                            (&fDirector,"trkdedx_pandoraNuPMA"),
      trkdqdx_pandoraNuPMA                                                            (&fDirector,"trkdqdx_pandoraNuPMA"),
      trkresrg_pandoraNuPMA                                                           (&fDirector,"trkresrg_pandoraNuPMA"),
      trkxyz_pandoraNuPMA                                                             (&fDirector,"trkxyz_pandoraNuPMA"),
      trkstartx_pandoraNuPMA                                                          (&fDirector,"trkstartx_pandoraNuPMA"),
      trkstarty_pandoraNuPMA                                                          (&fDirector,"trkstarty_pandoraNuPMA"),
      trkstartz_pandoraNuPMA                                                          (&fDirector,"trkstartz_pandoraNuPMA"),
      trkstartd_pandoraNuPMA                                                          (&fDirector,"trkstartd_pandoraNuPMA"),
      trkendx_pandoraNuPMA                                                            (&fDirector,"trkendx_pandoraNuPMA"),
      trkendy_pandoraNuPMA                                                            (&fDirector,"trkendy_pandoraNuPMA"),
      trkendz_pandoraNuPMA                                                            (&fDirector,"trkendz_pandoraNuPMA"),
      trkendd_pandoraNuPMA                                                            (&fDirector,"trkendd_pandoraNuPMA"),
      trkflashT0_pandoraNuPMA                                                         (&fDirector,"trkflashT0_pandoraNuPMA"),
      trktrueT0_pandoraNuPMA                                                          (&fDirector,"trktrueT0_pandoraNuPMA"),
      trkg4id_pandoraNuPMA                                                            (&fDirector,"trkg4id_pandoraNuPMA"),
      trkorig_pandoraNuPMA                                                            (&fDirector,"trkorig_pandoraNuPMA"),
      trkpurity_pandoraNuPMA                                                          (&fDirector,"trkpurity_pandoraNuPMA"),
      trkcompleteness_pandoraNuPMA                                                    (&fDirector,"trkcompleteness_pandoraNuPMA"),
      trktheta_pandoraNuPMA                                                           (&fDirector,"trktheta_pandoraNuPMA"),
      trkphi_pandoraNuPMA                                                             (&fDirector,"trkphi_pandoraNuPMA"),
      trkstartdcosx_pandoraNuPMA                                                      (&fDirector,"trkstartdcosx_pandoraNuPMA"),
      trkstartdcosy_pandoraNuPMA                                                      (&fDirector,"trkstartdcosy_pandoraNuPMA"),
      trkstartdcosz_pandoraNuPMA                                                      (&fDirector,"trkstartdcosz_pandoraNuPMA"),
      trkenddcosx_pandoraNuPMA                                                        (&fDirector,"trkenddcosx_pandoraNuPMA"),
      trkenddcosy_pandoraNuPMA                                                        (&fDirector,"trkenddcosy_pandoraNuPMA"),
      trkenddcosz_pandoraNuPMA                                                        (&fDirector,"trkenddcosz_pandoraNuPMA"),
      trkthetaxz_pandoraNuPMA                                                         (&fDirector,"trkthetaxz_pandoraNuPMA"),
      trkthetayz_pandoraNuPMA                                                         (&fDirector,"trkthetayz_pandoraNuPMA"),
      trkmom_pandoraNuPMA                                                             (&fDirector,"trkmom_pandoraNuPMA"),
      trkmomrange_pandoraNuPMA                                                        (&fDirector,"trkmomrange_pandoraNuPMA"),
      trkmommschi2_pandoraNuPMA                                                       (&fDirector,"trkmommschi2_pandoraNuPMA"),
      trkmommsllhd_pandoraNuPMA                                                       (&fDirector,"trkmommsllhd_pandoraNuPMA"),
      trklen_pandoraNuPMA                                                             (&fDirector,"trklen_pandoraNuPMA"),
      trksvtxid_pandoraNuPMA                                                          (&fDirector,"trksvtxid_pandoraNuPMA"),
      trkevtxid_pandoraNuPMA                                                          (&fDirector,"trkevtxid_pandoraNuPMA"),
      trkpidpdg_pandoraNuPMA                                                          (&fDirector,"trkpidpdg_pandoraNuPMA"),
      trkpidchi_pandoraNuPMA                                                          (&fDirector,"trkpidchi_pandoraNuPMA"),
      trkpidchipr_pandoraNuPMA                                                        (&fDirector,"trkpidchipr_pandoraNuPMA"),
      trkpidchika_pandoraNuPMA                                                        (&fDirector,"trkpidchika_pandoraNuPMA"),
      trkpidchipi_pandoraNuPMA                                                        (&fDirector,"trkpidchipi_pandoraNuPMA"),
      trkpidchimu_pandoraNuPMA                                                        (&fDirector,"trkpidchimu_pandoraNuPMA"),
      trkpidpida_pandoraNuPMA                                                         (&fDirector,"trkpidpida_pandoraNuPMA"),
      trkpidbestplane_pandoraNuPMA                                                    (&fDirector,"trkpidbestplane_pandoraNuPMA"),
      trkhasPFParticle_pandoraNuPMA                                                   (&fDirector,"trkhasPFParticle_pandoraNuPMA"),
      trkPFParticleID_pandoraNuPMA                                                    (&fDirector,"trkPFParticleID_pandoraNuPMA"),
      ntracks_pmtrack                                                                 (&fDirector,"ntracks_pmtrack"),
      trkId_pmtrack                                                                   (&fDirector,"trkId_pmtrack"),
      trkncosmictags_tagger_pmtrack                                                   (&fDirector,"trkncosmictags_tagger_pmtrack"),
      trkcosmicscore_tagger_pmtrack                                                   (&fDirector,"trkcosmicscore_tagger_pmtrack"),
      trkcosmictype_tagger_pmtrack                                                    (&fDirector,"trkcosmictype_tagger_pmtrack"),
      trkncosmictags_containmenttagger_pmtrack                                        (&fDirector,"trkncosmictags_containmenttagger_pmtrack"),
      trkcosmicscore_containmenttagger_pmtrack                                        (&fDirector,"trkcosmicscore_containmenttagger_pmtrack"),
      trkcosmictype_containmenttagger_pmtrack                                         (&fDirector,"trkcosmictype_containmenttagger_pmtrack"),
      trkncosmictags_flashmatch_pmtrack                                               (&fDirector,"trkncosmictags_flashmatch_pmtrack"),
      trkcosmicscore_flashmatch_pmtrack                                               (&fDirector,"trkcosmicscore_flashmatch_pmtrack"),
      trkcosmictype_flashmatch_pmtrack                                                (&fDirector,"trkcosmictype_flashmatch_pmtrack"),
      trkke_pmtrack                                                                   (&fDirector,"trkke_pmtrack"),
      trkrange_pmtrack                                                                (&fDirector,"trkrange_pmtrack"),
      trkidtruth_pmtrack                                                              (&fDirector,"trkidtruth_pmtrack"),
      trkorigin_pmtrack                                                               (&fDirector,"trkorigin_pmtrack"),
      trkpdgtruth_pmtrack                                                             (&fDirector,"trkpdgtruth_pmtrack"),
      trkefftruth_pmtrack                                                             (&fDirector,"trkefftruth_pmtrack"),
      trkpurtruth_pmtrack                                                             (&fDirector,"trkpurtruth_pmtrack"),
      trkpitchc_pmtrack                                                               (&fDirector,"trkpitchc_pmtrack"),
      ntrkhits_pmtrack                                                                (&fDirector,"ntrkhits_pmtrack"),
      trkdedx_pmtrack                                                                 (&fDirector,"trkdedx_pmtrack"),
      trkdqdx_pmtrack                                                                 (&fDirector,"trkdqdx_pmtrack"),
      trkresrg_pmtrack                                                                (&fDirector,"trkresrg_pmtrack"),
      trkxyz_pmtrack                                                                  (&fDirector,"trkxyz_pmtrack"),
      trkstartx_pmtrack                                                               (&fDirector,"trkstartx_pmtrack"),
      trkstarty_pmtrack                                                               (&fDirector,"trkstarty_pmtrack"),
      trkstartz_pmtrack                                                               (&fDirector,"trkstartz_pmtrack"),
      trkstartd_pmtrack                                                               (&fDirector,"trkstartd_pmtrack"),
      trkendx_pmtrack                                                                 (&fDirector,"trkendx_pmtrack"),
      trkendy_pmtrack                                                                 (&fDirector,"trkendy_pmtrack"),
      trkendz_pmtrack                                                                 (&fDirector,"trkendz_pmtrack"),
      trkendd_pmtrack                                                                 (&fDirector,"trkendd_pmtrack"),
      trkflashT0_pmtrack                                                              (&fDirector,"trkflashT0_pmtrack"),
      trktrueT0_pmtrack                                                               (&fDirector,"trktrueT0_pmtrack"),
      trkg4id_pmtrack                                                                 (&fDirector,"trkg4id_pmtrack"),
      trkorig_pmtrack                                                                 (&fDirector,"trkorig_pmtrack"),
      trkpurity_pmtrack                                                               (&fDirector,"trkpurity_pmtrack"),
      trkcompleteness_pmtrack                                                         (&fDirector,"trkcompleteness_pmtrack"),
      trktheta_pmtrack                                                                (&fDirector,"trktheta_pmtrack"),
      trkphi_pmtrack                                                                  (&fDirector,"trkphi_pmtrack"),
      trkstartdcosx_pmtrack                                                           (&fDirector,"trkstartdcosx_pmtrack"),
      trkstartdcosy_pmtrack                                                           (&fDirector,"trkstartdcosy_pmtrack"),
      trkstartdcosz_pmtrack                                                           (&fDirector,"trkstartdcosz_pmtrack"),
      trkenddcosx_pmtrack                                                             (&fDirector,"trkenddcosx_pmtrack"),
      trkenddcosy_pmtrack                                                             (&fDirector,"trkenddcosy_pmtrack"),
      trkenddcosz_pmtrack                                                             (&fDirector,"trkenddcosz_pmtrack"),
      trkthetaxz_pmtrack                                                              (&fDirector,"trkthetaxz_pmtrack"),
      trkthetayz_pmtrack                                                              (&fDirector,"trkthetayz_pmtrack"),
      trkmom_pmtrack                                                                  (&fDirector,"trkmom_pmtrack"),
      trkmomrange_pmtrack                                                             (&fDirector,"trkmomrange_pmtrack"),
      trkmommschi2_pmtrack                                                            (&fDirector,"trkmommschi2_pmtrack"),
      trkmommsllhd_pmtrack                                                            (&fDirector,"trkmommsllhd_pmtrack"),
      trklen_pmtrack                                                                  (&fDirector,"trklen_pmtrack"),
      trksvtxid_pmtrack                                                               (&fDirector,"trksvtxid_pmtrack"),
      trkevtxid_pmtrack                                                               (&fDirector,"trkevtxid_pmtrack"),
      trkpidpdg_pmtrack                                                               (&fDirector,"trkpidpdg_pmtrack"),
      trkpidchi_pmtrack                                                               (&fDirector,"trkpidchi_pmtrack"),
      trkpidchipr_pmtrack                                                             (&fDirector,"trkpidchipr_pmtrack"),
      trkpidchika_pmtrack                                                             (&fDirector,"trkpidchika_pmtrack"),
      trkpidchipi_pmtrack                                                             (&fDirector,"trkpidchipi_pmtrack"),
      trkpidchimu_pmtrack                                                             (&fDirector,"trkpidchimu_pmtrack"),
      trkpidpida_pmtrack                                                              (&fDirector,"trkpidpida_pmtrack"),
      trkpidbestplane_pmtrack                                                         (&fDirector,"trkpidbestplane_pmtrack"),
      trkhasPFParticle_pmtrack                                                        (&fDirector,"trkhasPFParticle_pmtrack"),
      trkPFParticleID_pmtrack                                                         (&fDirector,"trkPFParticleID_pmtrack"),
      nvtx_cccluster                                                                  (&fDirector,"nvtx_cccluster"),
      vtxId_cccluster                                                                 (&fDirector,"vtxId_cccluster"),
      vtxx_cccluster                                                                  (&fDirector,"vtxx_cccluster"),
      vtxy_cccluster                                                                  (&fDirector,"vtxy_cccluster"),
      vtxz_cccluster                                                                  (&fDirector,"vtxz_cccluster"),
      vtxhasPFParticle_cccluster                                                      (&fDirector,"vtxhasPFParticle_cccluster"),
      vtxPFParticleID_cccluster                                                       (&fDirector,"vtxPFParticleID_cccluster"),
      nvtx_pandoraNu                                                                  (&fDirector,"nvtx_pandoraNu"),
      vtxId_pandoraNu                                                                 (&fDirector,"vtxId_pandoraNu"),
      vtxx_pandoraNu                                                                  (&fDirector,"vtxx_pandoraNu"),
      vtxy_pandoraNu                                                                  (&fDirector,"vtxy_pandoraNu"),
      vtxz_pandoraNu                                                                  (&fDirector,"vtxz_pandoraNu"),
      vtxhasPFParticle_pandoraNu                                                      (&fDirector,"vtxhasPFParticle_pandoraNu"),
      vtxPFParticleID_pandoraNu                                                       (&fDirector,"vtxPFParticleID_pandoraNu"),
      nvtx_pandoraCosmic                                                              (&fDirector,"nvtx_pandoraCosmic"),
      vtxId_pandoraCosmic                                                             (&fDirector,"vtxId_pandoraCosmic"),
      vtxx_pandoraCosmic                                                              (&fDirector,"vtxx_pandoraCosmic"),
      vtxy_pandoraCosmic                                                              (&fDirector,"vtxy_pandoraCosmic"),
      vtxz_pandoraCosmic                                                              (&fDirector,"vtxz_pandoraCosmic"),
      vtxhasPFParticle_pandoraCosmic                                                  (&fDirector,"vtxhasPFParticle_pandoraCosmic"),
      vtxPFParticleID_pandoraCosmic                                                   (&fDirector,"vtxPFParticleID_pandoraCosmic"),
      nvtx_pmtrack                                                                    (&fDirector,"nvtx_pmtrack"),
      vtxId_pmtrack                                                                   (&fDirector,"vtxId_pmtrack"),
      vtxx_pmtrack                                                                    (&fDirector,"vtxx_pmtrack"),
      vtxy_pmtrack                                                                    (&fDirector,"vtxy_pmtrack"),
      vtxz_pmtrack                                                                    (&fDirector,"vtxz_pmtrack"),
      vtxhasPFParticle_pmtrack                                                        (&fDirector,"vtxhasPFParticle_pmtrack"),
      vtxPFParticleID_pmtrack                                                         (&fDirector,"vtxPFParticleID_pmtrack"),
      nvtx_linecluster                                                                (&fDirector,"nvtx_linecluster"),
      vtxId_linecluster                                                               (&fDirector,"vtxId_linecluster"),
      vtxx_linecluster                                                                (&fDirector,"vtxx_linecluster"),
      vtxy_linecluster                                                                (&fDirector,"vtxy_linecluster"),
      vtxz_linecluster                                                                (&fDirector,"vtxz_linecluster"),
      vtxhasPFParticle_linecluster                                                    (&fDirector,"vtxhasPFParticle_linecluster"),
      vtxPFParticleID_linecluster                                                     (&fDirector,"vtxPFParticleID_linecluster")
      { }
   ~generatedSel();
   Int_t   Version() const {return 1;}
   void    Begin(::TTree *tree);
   void    SlaveBegin(::TTree *tree);
   void    Init(::TTree *tree);
   Bool_t  Notify();
   Bool_t  Process(Long64_t entry);
   void    SlaveTerminate();
   void    Terminate();

   ClassDef(generatedSel,0);


//inject the user's code
#include "quickeventdisplayproxy.C"
};

#endif


#ifdef __MAKECINT__
#pragma link C++ class generatedSel;
#endif


inline generatedSel::~generatedSel() {
   // destructor. Clean up helpers.

}

inline void generatedSel::Init(TTree *tree)
{
//   Set branch addresses
   if (tree == 0) return;
   fChain = tree;
   fDirector.SetTree(fChain);
   if (htemp == 0) {
      htemp = fDirector.CreateHistogram(GetOption());
      htemp->SetTitle("quickeventdisplayproxy.C");
      fObject = htemp;
   }
}

Bool_t generatedSel::Notify()
{
   // Called when loading a new file.
   // Get branch pointers.
   fDirector.SetTree(fChain);
   quickeventdisplayproxy_Notify();
   
   return kTRUE;
}
   

inline void generatedSel::Begin(TTree *tree)
{
   // The Begin() function is called at the start of the query.
   // When running with PROOF Begin() is only called on the client.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();
   quickeventdisplayproxy_Begin(tree);

}

inline void generatedSel::SlaveBegin(TTree *tree)
{
   // The SlaveBegin() function is called after the Begin() function.
   // When running with PROOF SlaveBegin() is called on each slave server.
   // The tree argument is deprecated (on PROOF 0 is passed).

   Init(tree);

   quickeventdisplayproxy_SlaveBegin(tree);

}

inline Bool_t generatedSel::Process(Long64_t entry)
{
   // The Process() function is called for each entry in the tree (or possibly
   // keyed object in the case of PROOF) to be processed. The entry argument
   // specifies which entry in the currently loaded tree is to be processed.
   // It can be passed to either TTree::GetEntry() or TBranch::GetEntry()
   // to read either all or the required parts of the data. When processing
   // keyed objects with PROOF, the object is already loaded and is available
   // via the fObject pointer.
   //
   // This function should contain the "body" of the analysis. It can contain
   // simple or elaborate selection criteria, run algorithms on the data
   // of the event and typically fill histograms.

   // WARNING when a selector is used with a TChain, you must use
   //  the pointer to the current TTree to call GetEntry(entry).
   //  The entry is always the local entry number in the current tree.
   //  Assuming that fChain is the pointer to the TChain being processed,
   //  use fChain->GetTree()->GetEntry(entry).


   fDirector.SetReadEntry(entry);
   htemp->Fill(quickeventdisplayproxy());
   quickeventdisplayproxy_Process(entry);
   return kTRUE;

}

inline void generatedSel::SlaveTerminate()
{
   // The SlaveTerminate() function is called after all entries or objects
   // have been processed. When running with PROOF SlaveTerminate() is called
   // on each slave server.
   quickeventdisplayproxy_SlaveTerminate();
}

inline void generatedSel::Terminate()
{
   // Function called at the end of the event loop.
   htemp = (TH1*)fObject;
   Int_t drawflag = (htemp && htemp->GetEntries()>0);
   
   if (gPad && !drawflag && !fOption.Contains("goff") && !fOption.Contains("same")) {
      gPad->Clear();
   } else {
      if (fOption.Contains("goff")) drawflag = false;
      if (drawflag) htemp->Draw(fOption);
   }
   quickeventdisplayproxy_Terminate();
}
