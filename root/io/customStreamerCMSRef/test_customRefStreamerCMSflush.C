#include "RefCoreStreamer.h"

{
  TFile *f = TFile::Open("http://root.cern.ch/files/cmsflush.root");
  TTree *tree = (TTree*)f->Get("Events");
  tree->MakeClass("edm::RefCore");
  setRefCoreStreamer(false);
#if __clang__ || __GNUC__
   gSystem->AddIncludePath("-Wno-deprecated-declarations");
#endif
   // "recreate++" doesnt really work: Fatal in <TClass::SetUnloaded>: The TClass for map<int,HepMC::GenParticle*> is being unloaded when in state 0
   // Could it be the old problem with ROOT-6021, fixed in 3a642e1405bd2484d81c26910f97080535031443 ?
   gFile->MakeProject("cmsflush","*","recreate++");
}

