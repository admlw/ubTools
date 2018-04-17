void elecResp(){

    TH1D* electroncsResponse = new TH1D("electronicsResponse", "", 1000, 0, 1000);

    double Ao = 1.0;
    double To = 2.0;

    double time[1000];

    double binwidth = ((22.5579+35.3756)/1000)*1000;

    for (int i =0; i < 1000; i++){
    
        time[i] = (1.*i)*binwidth*1e-3;

    }

    for (int i = 0; i < 1000; i++){
    double element =
        4.31054*exp(-2.94809*time[i]/To)*Ao - 2.6202*exp(-2.82833*time[i]/To)*cos(1.19361*time[i]/To)*Ao
        -2.6202*exp(-2.82833*time[i]/To)*cos(1.19361*time[i]/To)*cos(2.38722*time[i]/To)*Ao
        +0.464924*exp(-2.40318*time[i]/To)*cos(2.5928*time[i]/To)*Ao
        +0.464924*exp(-2.40318*time[i]/To)*cos(2.5928*time[i]/To)*cos(5.18561*time[i]/To)*Ao
        +0.762456*exp(-2.82833*time[i]/To)*sin(1.19361*time[i]/To)*Ao
        -0.762456*exp(-2.82833*time[i]/To)*cos(2.38722*time[i]/To)*sin(1.19361*time[i]/To)*Ao
        +0.762456*exp(-2.82833*time[i]/To)*cos(1.19361*time[i]/To)*sin(2.38722*time[i]/To)*Ao
        -2.6202*exp(-2.82833*time[i]/To)*sin(1.19361*time[i]/To)*sin(2.38722*time[i]/To)*Ao
        -0.327684*exp(-2.40318*time[i]/To)*sin(2.5928*time[i]/To)*Ao +
        +0.327684*exp(-2.40318*time[i]/To)*cos(5.18561*time[i]/To)*sin(2.5928*time[i]/To)*Ao
        -0.327684*exp(-2.40318*time[i]/To)*cos(2.5928*time[i]/To)*sin(5.18561*time[i]/To)*Ao
        +0.464924*exp(-2.40318*time[i]/To)*sin(2.5928*time[i]/To)*sin(5.18561*time[i]/To)*Ao;
    
    electroncsResponse->SetBinContent(i+1, element);
    }

    electroncsResponse->Draw();
}
