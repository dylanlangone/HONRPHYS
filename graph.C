{
  Int_t n = 1000;
  Double_t x[n], y[n];
  for (Int_t i=0;i<n;i++) {
    x[i] = i*0.1 + 50;
    y[i] = 1/(pow((x[i]-91.2),2)+2.5/2);
  }

  // create graph
  TGraph *gr  = new TGraph(n,x,y);
  TCanvas *c1 = new TCanvas("c1","Graph Draw Options",
			    200,10,600,400);

  // draw the graph with axis, continuous line, and put
  // a * at each point
  gr->Draw("ACL");
  gr->SetTitle("Physics Problem 1"); 
 gr->GetXaxis()->SetTitle("GeV");
  gr->GetYaxis()->SetTitle("Y-axis");
}
