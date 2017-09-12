#ifndef RefCoreStreamer_h
#define RefCoreStreamer_h
/**
Adapted version of RefCoreStreamer from CMSSW.
*/

#include "TClassStreamer.h"
#include "TClassRef.h"
#include "TBuffer.h"

class TBuffer;

  class RefCoreStreamer : public TClassStreamer {
  public:
    explicit RefCoreStreamer() : cl_("edm::RefCore"){}

    void operator() (TBuffer &R__b, void *objp);

    TClassStreamer* Generate() const;
    
  private:
    TClassRef cl_;
  };

  class RefCoreWithIndexStreamer : public TClassStreamer {
  public:
    explicit RefCoreWithIndexStreamer() : cl_("edm::RefCoreWithIndex"){}
    
    void operator() (TBuffer &R__b, void *objp);

    TClassStreamer* Generate() const;
  private:
    TClassRef cl_;
  };

  void setRefCoreStreamer(bool resetAll = false);

  #endif