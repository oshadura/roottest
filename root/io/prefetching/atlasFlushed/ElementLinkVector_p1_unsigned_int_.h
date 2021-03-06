//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef ElementLinkVector_p1_unsigned_int__h
#define ElementLinkVector_p1_unsigned_int__h
template <typename T0> class ElementLinkVector_p1;
template <> class ElementLinkVector_p1<unsigned int>;

#include "Riostream.h"
#include <vector>
#include "ElementLinkVector_p1_unsigned_int_.h"
#include "DataLink_p1.h"

template <typename T0> class ElementLinkVector_p1;
template <> class ElementLinkVector_p1<unsigned int> {

public:
// Nested classes forward declaration.
class ElementRef;

public:
// Nested classes declaration.
class ElementRef {

public:
// Nested classes declaration.

public:
// Data Members.
   unsigned int m_elementIndex;    //
   unsigned int m_nameIndex;       //

   ElementRef();
   ElementRef(const ElementRef & );
   virtual ~ElementRef();

};

public:
// Data Members.
   vector<ElementLinkVector_p1<unsigned int>::ElementRef> m_elementRefs;    //
   vector<DataLink_p1>                                    m_links;          //

   ElementLinkVector_p1();
   ElementLinkVector_p1(const ElementLinkVector_p1 & );
   virtual ~ElementLinkVector_p1();

};
#endif
