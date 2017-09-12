#include "RefCoreStreamer.h"

// Settings from CMSSW
{
  gSystem->Load("libRefCoreStreamer.so");
  gSystem->ResetSignal(kSigChild);
  gSystem->ResetSignal(kSigBus);
  gSystem->ResetSignal(kSigSegmentationViolation);
  gSystem->ResetSignal(kSigIllegalInstruction);
  gSystem->ResetSignal(kSigSystem);
  gSystem->ResetSignal(kSigPipe);
  gSystem->ResetSignal(kSigAlarm);
  gSystem->ResetSignal(kSigUrgent);
  gSystem->ResetSignal(kSigFloatingException);
  gSystem->ResetSignal(kSigWindowChanged);
  gInterpreter->SetClassAutoloading(1);
  TTree::SetMaxTreeSize(kMaxLong64);
  setRefCoreStreamer(true);
  ROOT::EnableImplicitMT();
  TFile *f = new TFile("../files/cmsflush.root");
#if __clang__ || __GNUC__
   gSystem->AddIncludePath("-Wno-deprecated-declarations");
#endif
   gFile->MakeProject("cmsflush","*","RECREATE+");
}