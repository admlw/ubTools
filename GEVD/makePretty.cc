#include "TFile.h"
#include "TColor.h"
#include "TStyle.h"
#include "TH1D.h"
#include "TPaveText.h"
#include "TF1.h"
#include "TCanvas.h"

void makePretty() {

        TFile* _file0 = new TFile("tempFile.root", "read");

        // Set ColorPalette
        Int_t myPal[100];
        Double_t Red[]    = {16.0/255.0, 246.0/255.0};
        Double_t Green[]  = {58.0/255.0, 6.0/255.0};
        Double_t Blue[]   = {164.0/255.0, 0.0};
        Double_t Length[] = {0.0, 1.0};
        Int_t FI          = TColor::CreateGradientColorTable(2, Length, Red, Green, Blue, 100);

        for (int i = 0; i<100; i++) myPal[i] = FI+i;

        int nViews = 1;
        int threshold=0;

        gStyle->SetOptStat(0);
        gStyle->SetPalette(kRainBow);
        gStyle->SetFrameFillColor(kBlue+2);

        TH1D* u = (TH1D*)_file0->Get("uplane");
        TH1D* v = (TH1D*)_file0->Get("vplane");
        TH1D* y = (TH1D*)_file0->Get("yplane");

        // uplane
        u->SetMinimum(threshold);
        u->SetMaximum(10.0);
        u->SetContour(100);
        u->SetNdivisions(-10);
        u->SetTitle("U Plane");
        u->GetXaxis()->SetTitle("Channel");
        u->GetYaxis()->SetTitle("Time (ticks)");

        // vplane
        v->SetMinimum(threshold);
        v->SetMaximum(10);
        v->SetContour(100);
        v->SetNdivisions(-10);
        v->SetTitle("V Plane");
        v->GetXaxis()->SetTitle("Channel");
        v->GetYaxis()->SetTitle("Time (ticks)");

        // y plane
        y->SetMinimum(threshold);
        y->SetMaximum(100);
        y->SetContour(100);
        y->SetNdivisions(10);
        y->SetTitle("");
        y->GetXaxis()->SetTitle("Channel number");
        y->GetXaxis()->SetTitleSize(0.05);
        y->GetXaxis()->SetLabelSize(0.04);
        y->GetYaxis()->SetTitle("Time (ticks)");
        y->GetYaxis()->SetTitleSize(0.05);
        y->GetYaxis()->SetLabelSize(0.04);
        y->GetYaxis()->SetRangeUser(3800,5000);

        TPaveText *pt = new TPaveText(0.52, 0.66, 0.88, 0.85, "NDC");
        pt->AddText("MicroBooNE Simulation");
        pt->SetTextAlign(31);
        pt->SetFillStyle(0);
        pt->SetBorderSize(0);
        pt->SetTextColor(kWhite);

        TF1 *lin = new TF1("lin", "4800" ,5000, 5600);
        lin->SetLineColor(kWhite);
        lin->SetLineWidth(2);

        TPaveText *len = new TPaveText(0.11, 0.77, 0.31, 0.86, "NDC");
        len->AddText("180 cm");
        len->SetFillStyle(0);
        len->SetBorderSize(0);
        len->SetTextColor(kWhite);

        if (nViews == 3){
                TCanvas *c1 = new TCanvas("c1", "c1", 700, 800);
                c1->Divide(1,3);

                c1->cd(1);
                u->Draw("colz");

                c1->cd(2);
                v->Draw("colz");

                c1->cd(3);
                y->Draw("colz");

                c1->SaveAs("eventdisplay.png");
        }

        if (nViews == 1){
                TCanvas *c1 = new TCanvas("c1", "c1", 1400, 800);
                c1->cd();
                y->Draw("col");
                pt->Draw("same");
                lin->Draw("same");
                len->Draw("same");
                c1->SaveAs("eventdisplay.eps");

        }

}

int main(){

        makePretty();
        return 0;

}
