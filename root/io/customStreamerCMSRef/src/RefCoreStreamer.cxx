#include "RefCoreStreamer.h"

#ifndef __CINT__
RootClassVersion(RefCoreStreamer,2);
#endif

#ifdef __CINT__
#pragma link C++ class RefCoreStreamer+;
#endif

void RefCoreStreamer::operator()(TBuffer &R__b, void *objp) {
    if (R__b.IsReading()) {
      cl_->ReadBuffer(R__b, objp);
    } else {
      //...
    }
#if 1
      R__b << cl_->GetClassVersion();
#else
      R__b.WriteVersion(cl_, kFALSE);
#endif
    }

void RefCoreWithIndexStreamer::operator()(TBuffer &R__b, void *objp) {
    if (R__b.IsReading()) {
      cl_->ReadBuffer(R__b, objp);
    } else {
      //...
    }
#if 1
      R__b << cl_->GetClassVersion();
#else
      R__b.WriteVersion(cl_, kFALSE);
#endif
    }

  TClassStreamer*
  RefCoreStreamer::Generate() const {
    return new RefCoreStreamer(*this);
  }

  TClassStreamer*
  RefCoreWithIndexStreamer::Generate() const {
    return new RefCoreWithIndexStreamer(*this);
  }


  void setRefCoreStreamer(bool resetAll) {
    {
      TClass *cl = TClass::GetClass("edm::RefCore");
      if (cl->GetStreamer() == 0) {
        cl->AdoptStreamer(new RefCoreStreamer());
      }
    }
    // DOesn't work with RefCoreWithIndex..
    /*
    {
      TClass *cl = TClass::GetClass("edm::RefCoreWithIndex");
      if (cl->GetStreamer() == 0) {
        cl->AdoptStreamer(new RefCoreStreamer());
      }
    }
    */
  }