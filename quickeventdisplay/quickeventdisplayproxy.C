//
// Initialise variables
//



// xy
std::vector<TH2D*> histvectxy;
TH2F* xy_vertices;
TH2F* xy_trks;
TH2F* xy_trke;

// zx
std::vector<TH2D*> histvectzx;
TH2F* zx_vertices;
TH2F* zx_trks;
TH2F* zx_trke;

// zy
std::vector<TH2D*> histvectzy;
TH2F* zy_vertices;
TH2F* zy_trks;
TH2F* zy_trke;

// Misc.
int eventno = 3502;
int runno = 5858;
int subrunno = 70;
std::vector<double> lengthvec;

//
// Define non-vector of histograms
//

void quickeventdisplayproxy_Begin(TTree*)
{

  // xy
  xy_vertices = new TH2F("xy_vertices", "", 510, -105, 395, 340, -170, 170);
  xy_trks = new TH2F("xy_trks", "", 510, -105, 395, 340, -170, 170);
  xy_trke = new TH2F("xy_trke", "", 510, -105, 395, 340, -170, 170);

  // zx
  zx_vertices = new TH2F("zx_vertices", "", 1250, -105, 1145, 510, -105, 395);
  zx_trks = new TH2F("zx_trks", "", 1250, -105, 1145, 510, -105, 395);
  zx_trke = new TH2F("zx_trke", "", 1250, -105, 1145, 510, -105, 395);

  // zy
  zy_vertices = new TH2F("zy_vertices", "", 1250, -105, 1145, 340, -170, 170);
  zy_trks = new TH2F("zy_trks", "", 1250, -105, 1145, 340, -170, 170);
  zy_trke = new TH2F("zy_trke", "", 1250, -105, 1145, 340, -170, 170);
}

//
// Event Loop
//

double quickeventdisplayproxy()
{
  // Select out event
  if ( event == eventno && run == runno && subrun == subrunno )
  {
    // Loop over vertices
    for ( int i = 0; i < nvtx_pandoraCosmic; i++ )
    {
      double vtxx = vtxx_pandoraNu[i];
      double vtxy = vtxy_pandoraNu[i];
      double vtxz = vtxz_pandoraNu[i];
           
      // Loop over the tracks
      for ( int j = 0; j < ntracks_trackkalmanhit; j++)
      {

        // troubleshooting
        //std::cout << "event: " << event << ", i loop: " << i << ", j loop: " << j << std::endl;

        // only fill the hits/track start and end points on the first loop of vertices
        if ( i != 0 ) continue;

        // xy
        TH2D *xy = new TH2D(Form("xyhist_%i", j), "", 560, -105, 445, 340, -170, 170);
        histvectxy.push_back(xy);
     
        // zx
        TH2D *zx = new TH2D(Form("zxhist_%i", j), "", 1250, -105, 1145, 510, -105, 395);
        histvectzx.push_back(zx);

        // zy
        TH2D *zy = new TH2D(Form("zyhist_%i", j), "", 1250, -105, 1145, 340, -170, 170);
        histvectzy.push_back(zy);

        // Loop over the track hits
        for ( int k = 0; k < ntrkhits_trackkalmanhit[j][2]; k++)
        {
          // xy
          xy->Fill(trkxyz_trackkalmanhit[j][2][k][0], trkxyz_trackkalmanhit[j][2][k][1]);
          xy->SetMarkerColor(100-4*j);
          xy->SetMarkerStyle(6);
          
          // zx
          zx->Fill(trkxyz_trackkalmanhit[j][2][k][2], trkxyz_trackkalmanhit[j][2][k][0]);
          zx->SetMarkerColor(100-4*j);
          zx->SetMarkerStyle(6);
          
          // zy
          zy->Fill(trkxyz_trackkalmanhit[j][2][k][2], trkxyz_trackkalmanhit[j][2][k][1]);
          zy->SetMarkerColor(100-4*j);
          zy->SetMarkerStyle(6);

        }
      
        double trksx = trkstartx_trackkalmanhit[j];
        double trksy = trkstarty_trackkalmanhit[j];
        double trksz = trkstartz_trackkalmanhit[j];
        double trkex = trkendx_trackkalmanhit[j];
        double trkey = trkendy_trackkalmanhit[j];
        double trkez = trkendz_trackkalmanhit[j];
        
        // xy
        xy_trks->Fill(trksx, trksy);
        xy_trke->Fill(trkex, trkey);

        // zx
        zx_trks->Fill(trksz, trksx);
        zx_trke->Fill(trkez, trkex);

        //zy
        zy_trks->Fill(trksz, trksy);
        zy_trke->Fill(trkez, trkey);

        // Find length from vertex to track start/end;
        double lengths = sqrt(abs(((vtxx-trksx)*(vtxx-trksx)) +
              ((vtxy-trksy)*(vtxy-trksy)) + ((vtxz-trksz)*(vtxz-trksz))));

        double lengthe = sqrt(abs(((vtxx-trkex)*(vtxx-trkex)) +
              ((vtxy-trkey)*(vtxy-trkey)) + ((vtxz-trkez)*(vtxz-trkez))));

        if (lengths < 5) lengthvec.push_back(trklen_trackkalmanhit[i]);
        if (lengthe < 5) lengthvec.push_back(trklen_trackkalmanhit[i]);

      } // Loop over the tracks

      // length cut
      for (int j = 0; j < (signed int) lengthvec.size(); j++)
      {

        if (lengthvec[j] > 0) break;
        if (lengthvec[j] == lengthvec.back()) lengthvec.clear();
      
      }


        // Fill vertex histograms     
        xy_vertices->Fill(vtxx, vtxy);
        zx_vertices->Fill(vtxz, vtxx);
        zy_vertices->Fill(vtxz, vtxy);
    
    } // Loop over vertices
  } // Select out event
}

//
// Histogram Drawing
//

void quickeventdisplayproxy_Terminate()
{
  gStyle->SetOptStat(0);

  xy_vertices->SetMarkerStyle(8);
  xy_vertices->SetMarkerColor(kBlack);
  xy_trks->SetMarkerStyle(22);
  xy_trks->SetMarkerColor(17);
  xy_trke->SetMarkerStyle(23);
  xy_trke->SetMarkerColor(17);
  zx_vertices->SetMarkerStyle(8);
  zx_vertices->SetMarkerColor(kBlack);
  zx_trks->SetMarkerStyle(22);
  zx_trks->SetMarkerColor(17);
  zx_trke->SetMarkerStyle(23);
  zx_trke->SetMarkerColor(17);
  zy_vertices->SetMarkerStyle(8);
  zy_vertices->SetMarkerColor(kBlack);
  zy_trks->SetMarkerStyle(22);
  zy_trks->SetMarkerColor(17);
  zy_trke->SetMarkerStyle(23);
  zy_trke->SetMarkerColor(17);

  TCanvas *c1 = new TCanvas("c1", "c1", 800, 1000);
  c1->Divide(1,3);
 
  c1->cd(1);
  xy_vertices->Draw();
  xy_vertices->GetXaxis()->SetTitle("x");
  xy_vertices->GetYaxis()->SetTitle("y");
  xy_trks->Draw("same");
  xy_trke->Draw("same");
  for ( int i = 0; i < (signed int) histvectxy.size(); i++)
  {
    histvectxy[i]->Draw("same");
  }

  c1->cd(2);
  zx_vertices->Draw();
  zx_vertices->GetXaxis()->SetTitle("z");
  zx_vertices->GetYaxis()->SetTitle("x");
  zx_trks->Draw("same");
  zx_trke->Draw("same");
  for ( int i = 0; i < (signed int) histvectzx.size(); i++)
  {
    histvectzx[i]->Draw("same");
  }

  c1->cd(3);
  zy_vertices->Draw();
  zy_vertices->GetXaxis()->SetTitle("z");
  zy_vertices->GetYaxis()->SetTitle("y");
  zy_trks->Draw("same");
  zy_trke->Draw("same");
  for ( int i = 0; i < (signed int) histvectzy.size(); i++)
  {
    histvectzy[i]->Draw("same");
  }
}
