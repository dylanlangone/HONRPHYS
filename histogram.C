{
  //initialize the random class
  gRandom->SetSeed();
 
  gROOT->Reset();
  gROOT->SetStyle("Plain");
    
  gStyle->SetOptStat(111111);
  gStyle->SetOptFit(111111);
  //set up the graph
  TCanvas *c1 = new TCanvas("c1","Example with Formula",200,10,700,500);
  c1->SetFillColor(0);
  c1->SetBorderMode(0);
  c1->SetBorderSize(1);
  //set up the histogram, 100 bins from 0 to 1
  TH1F *histo1 = new TH1F("Random(0,1)","Data",100,0.,1.);
  //fill in the histogram
  for (int i=0;i<10000;i++) {
    float aa=gRandom->Uniform(0,1);
    histo1->Fill(aa);
  }
    
  histo1->SetLineColor(2);
  histo1->Draw("");
 
  c1->Update();
  c1->SaveAs("c1.gif");
}
