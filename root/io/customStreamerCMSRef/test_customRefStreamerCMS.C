#include "RefCoreStreamer.h"

{
  TFile *f = File::Open("http://root.cern.ch/files/CMS/cms_aodsim_mc1713TeVDYJetsToLL.root");
  TTree *tree = (TTree*)f->Get("Events");
  tree->MakeClass("edm::RefCore");
  //tree->MakeClass("RefCoreWithIndex");
#if __clang__ || __GNUC__
  gSystem->AddIncludePath("-Wno-deprecated-declarations");
#endif
  setRefCoreStreamer(false);
  gFile->MakeProject("cms_aodsim_mc1713TeVDYJetsToLL","*","recreate++");
}