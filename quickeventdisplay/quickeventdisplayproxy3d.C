//
// Initialise variables needed accross the three functions
//

int eventno = 2000;
static const int maxtrackno = 50;
TH3D* xyz[maxtrackno];
TH3F* xyz_vertices;
TCanvas* c1;

//
// Define vertices histograms
//

void quickeventdisplayproxy3d_Begin(TTree*)
{
  xyz_vertices = new TH3F("xyz_vertices", "3D view", 1250, -105, 1145, 560, -105, 455, 340, -170, 170);
std::cout << "\n\n" << "This is super slow and has coarser binning than the 2D event display due to memory constraints." << std::endl;
std::cout << "Try and rotate this remotely and you're going to have a bad time." << std::endl;
}

//
// Event-Loop type function
//

double quickeventdisplayproxy3d()
{
  if (event == eventno)
  {
    for (int i = 0; i < maxtrackno; i++)
    {

      // If the number of tracks is less than maxtrackno then fill the
      // empty elements with null pointers 
      if (!ntracks_trackkalmanhit)
      {
        xyz[i] = new TH3D();
        continue;
      }

      // Define unique histogram for each track to allow colouring
      char *xyzhist = new char[10];
      sprintf(xyzhist, "xyz_%i", i);
      xyz[i] = new TH3D(xyzhist, "3D Event Display", 500, -105, 1145, 224, -105, 455, 136, -170, 170);
      // For a single track, get the hists associated with that track and fill
      // the histogram and set the colour based on the loop number
      //
      // Tracks are shifted in the negative x direction by 45cm due to possible error
      // in calorimetry module
      for (int j = 0; j < (int) ntrkhits_trackkalmanhit[i][2]; j++)
      {
        xyz[i]->Fill(trkxyz_trackkalmanhit[i][2][j][2], trkxyz_trackkalmanhit[i][2][j][0],
            trkxyz_trackkalmanhit[i][2][j][1]);
        xyz[i]->SetMarkerColor(100-4*i);
        xyz[i]->SetMarkerStyle(6);
      }
    }

    // Fill the vertex histograms (nothing fancy needed here...)
    for (int k = 0; k < nvtx_pandoraCosmic; k++)
    {
      xyz_vertices->Fill(vtxz_pandoraCosmic[k], vtxx_pandoraCosmic[k]+45, vtxy_pandoraCosmic[k]);
    }
  }
}

//
// Histogram Drawing and styling
//

void quickeventdisplayproxy3d_Terminate()
{
  // Histogram styling
  gStyle->SetOptStat(0);
  xyz_vertices->SetMarkerStyle(8);
  xyz_vertices->SetMarkerColor(17);
  xyz_vertices->GetXaxis()->SetTitle("z (cm)");
  xyz_vertices->GetYaxis()->SetTitle("x (cm)");
  xyz_vertices->GetZaxis()->SetTitle("y (cm)");

  c1 = new TCanvas("c1", "c1", 1250, 800);
  c1->cd();
  xyz_vertices->Draw();
  
  // If the array element is a NULL pointer then ignore it
  for (int i = 0; i < maxtrackno; i++)
  {
    if (xyz[i] == NULL) continue;
    xyz[i]->Draw("same");
  }

  c1->Update();

  c1->SaveAs("quickeventdisplay3d_trackkalmanhit.eps");
}

