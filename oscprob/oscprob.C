#include <iostream>
#include <complex>
#include <math.h>

#include "TF1.h"

typedef std::complex<double> dcomp;

  double E = 0.8;
  double pi = atan(1)*4;
  
  // define the oscillation parameters
  double t12 = 33.72*pi/180;
  double t23 = 49.3*pi/180;
  double t13 = 8.47*pi/180;
  double dcp = pi / 2;
  double delm21 = 7.49*std::pow(10,-5);
  double delm31 = 2.484*std::pow(10,-3);

  // define PMNS elements

  dcomp Ue1(cos(t12)*cos(t13), 0);
  
  dcomp Ue2(sin(t12)*cos(t13), 0);
  
  dcomp Ue3(sin(t13)*cos(dcp), -sin(t13)*sin(dcp));
  
  dcomp Uu1(-sin(t12)*cos(t23) - cos(t12)*sin(t23)*sin(t13)*cos(dcp), 
      -cos(t12)*sin(t23)*sin(t13)*sin(dcp));
  
  dcomp Uu2(cos(t12)*cos(t23) - sin(t12)*sin(t23)*sin(t13)*cos(dcp),
      -sin(t12)*sin(t23)*sin(t13)*sin(dcp));
  
  dcomp Uu3(sin(t23)*cos(t13));
   
  dcomp Ut1(sin(t12)*sin(t23) - cos(t12)*cos(t23)*sin(t13)*cos(dcp),
      -cos(t12)*cos(t23)*sin(t13)*sin(dcp));
   
  dcomp Ut2(-cos(t12)*sin(t23) - sin(t12)*cos(t23)*sin(t13)*cos(dcp),
      -sin(t12)*cos(t23)*sin(t13)*sin(dcp));
  
  dcomp Ut3(cos(t23)*cos(t13));

double prob_mue(double LovE) {

  dcomp m21(cos(1.27*delm21*LovE), -sin(1.27*delm21*LovE));
  dcomp m31(cos(1.27*delm31*LovE), -sin(1.27*delm31*LovE));

  return norm(std::conj(Uu1)*Ue1 
        + std::conj(Uu2)*Ue2*m21
        + std::conj(Uu3)*Ue3*m31);
}

double prob_mutau(double LovE) {

  dcomp m21(cos(1.27*delm21*LovE), -sin(1.27*delm21*LovE));
  dcomp m31(cos(1.27*delm31*LovE), -sin(1.27*delm31*LovE));

  return norm(std::conj(Uu1)*Ut1 
        + std::conj(Uu2)*Ut2*m21
        + std::conj(Uu3)*Ut3*m31);
}

double prob_mumu(double LovE) {

  dcomp m21(cos(1.27*delm21*LovE), -sin(1.27*delm21*LovE));
  dcomp m31(cos(1.27*delm31*LovE), -sin(1.27*delm31*LovE));

  return norm(std::conj(Uu1)*Uu1 
        + std::conj(Uu2)*Uu2*m21
        + std::conj(Uu3)*Uu3*m31);
}


double prob_sterile_mudisappearance(double LovE) {

  return 1-( 4*pow(0.3*0.15,2)*pow( sin( 1.27*LovE ), 2 ) + 4*pow(0.3*0.44,2)*pow( sin( 1.27*LovE ), 2 ) + 4*pow(0.3*0.1,2)*pow( sin( 1.27*LovE ), 2 )  )  ;

}

void oscprob() {

  TCanvas *c1 = new TCanvas("c1", "c1");

  TF1 *oscprob_mue = new TF1("oscprob_mue", "prob_mue(x)", 1, 10000);
  TF1 *oscprob_mutau = new TF1("oscprob_mutau", "prob_mutau(x)", 1, 10000);
  TF1 *oscprob_mumu = new TF1("oscprob_mumu", "prob_mumu(x)", 1, 10000);
  TF1 *oscprob_sterile_mudisappearance = new TF1("oscprob_sterile_mudisappearance", "prob_sterile_mudisappearance(x)", 0, 10);

  TLegend *leg = new TLegend(0.15, 0.15, 0.4, 0.4);
  leg->AddEntry(oscprob_mue, "#nu_{#mu}->#nu_{e}");
  leg->AddEntry(oscprob_mutau, "#nu_{#mu}->#nu_{#tau}");
  leg->AddEntry(oscprob_mumu, "#nu_{#mu}->#nu_{#mu}");

  TLegend *leg2 = new TLegend(0.15, 0.15, 0.4, 0.4);
  leg2->AddEntry(oscprob_mumu, "3-#nu oscillation");
  leg2->AddEntry(oscprob_sterile_mudisappearance, "sterile #\Delta m_{41}^{2} = 1 eV^{2}");

  c1->SetLogx();

  oscprob_mue->GetYaxis()->SetTitle("Probability");
  oscprob_mue->GetXaxis()->SetTitle("L/E [km / GeV]");
  
  oscprob_mue->SetMaximum(1);

  oscprob_mue->SetLineColor(kRed-4);
  oscprob_mutau->SetLineColor(kBlue-3);
  oscprob_mumu->SetLineColor(kGreen-3);

  //oscprob_sterile_mudisappearance->GetYaxis()->SetTitle("#nu_{#mu} Survival Probability");
  //oscprob_sterile_mudisappearance->GetXaxis()->SetTitle("L/E [km/GeV]");
  //oscprob_sterile_mudisappearance->Draw();
  //oscprob_mumu->Draw("same");
  //leg2->Draw("same");

  oscprob_mue->Draw();
  oscprob_mutau->Draw("same");
  oscprob_mumu->Draw("same");
  leg->Draw("same");

  c1->SaveAs("oscillationprobability.eps");
  //c1->SaveAs("oscillationprobability_sterile.eps");
}
