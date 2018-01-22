local_clean = *.root Event$(ExeSuf) libEvent.$(DllSuf) *.o EventDict.cxx EventDict.h *~ *.log *.log_zstd *.$(ObjSuf) $(ALL_LIBRARIES)

CLEAN_TARGETS += $(local_clean)
TEST_TARGETS += compressionTest

ifeq ($(strip $(ROOTTEST_HOME)),)
   export ROOTTEST_HOME := $(shell git rev-parse --show-toplevel)/
   ifeq ($(strip $(ROOTTEST_HOME)),)
      export ROOTTEST_HOME := $(shell expr $(CURDIR) : '\(.*/roottest/\)')
   endif
   ifeq ($(strip $(ROOTTEST_HOME)),)
      $(error The head of roottest was not found.  Set ROOTTEST_HOME)
   endif
endif

include $(ROOTTEST_HOME)/scripts/Rules.mk
include $(ROOTTEST_HOME)/scripts/Event.mk

#.SUFFIXES: .cxx .o .so

CXXOPT:=-Z7
LDOPT:=-debug $ROOTSYS/lib/libXMLIO.so

compressionTest: ./Event$(ExeSuf) ./libEvent.$(DllSuf)
	$(CMDECHO)./Event 2000   0 1  1  >  Event.write.log
	$(CMDECHO)./Event 2000   0 1 20  >  Event.read.log
	$(CMDECHO)./Event 2000 101 1  1  >> Event.write.log
	$(CMDECHO)./Event 2000 101 1 20  >> Event.read.log
	$(CMDECHO)./Event 2000 106 1  1  >> Event.write.log
	$(CMDECHO)./Event 2000 106 1 20  >> Event.read.log
	$(CMDECHO)./Event 2000 109 1  1  >> Event.write.log
	$(CMDECHO)./Event 2000 109 1 20  >> Event.read.log
	$(CMDECHO)./Event 2000 201 1  1  >> Event.write.log
	$(CMDECHO)./Event 2000 201 1 20  >> Event.read.log
	$(CMDECHO)./Event 2000 301 1  1  >> Event.write.log
	$(CMDECHO)./Event 2000 301 1 20  >> Event.read.log
	$(CMDECHO)./Event 2000 405 1  1  >> Event.write.log
	$(CMDECHO)./Event 2000 405 1 20  >> Event.read.log
	$(CMDECHO)./Event 2000 501 1  1  >> Event.write.log_zstd
	$(CMDECHO)./Event 2000 501 1 20  >> Event.read.log_zstd
	$(CMDECHO)./Event 2000 502 1  1  >> Event.write.log_zstd
	$(CMDECHO)./Event 2000 502 1 20  >> Event.read.log_zstd
	$(CMDECHO)./Event 2000 503 1  1  >> Event.write.log_zstd
	$(CMDECHO)./Event 2000 503 1 20  >> Event.read.log_zstd
	$(CMDECHO)./Event 2000 504 1  1  >> Event.write.log_zsd
	$(CMDECHO)./Event 2000 504 1 20  >> Event.read.log_zstd
	$(CMDECHO)./Event 2000 505 1  1  >> Event.write.log_zstd
	$(CMDECHO)./Event 2000 505 1 20  >> Event.read.log_zstd
	$(CMDECHO)./Event 2000 506 1  1  >> Event.write.log_zstd
	$(CMDECHO)./Event 2000 506 1 20  >> Event.read.log_zstd
	$(CMDECHO)./Event 2000 507 1  1  >> Event.write.log_zstd
	$(CMDECHO)./Event 2000 507 1 20  >> Event.read.log_zstd
	$(CMDECHO)./Event 2000 508 1  1  >> Event.write.log_zstd
	$(CMDECHO)./Event 2000 508 1 20  >> Event.read.log_zstd
	$(CMDECHO)./Event 2000 509 1  1  >> Event.write.log_zstd
	$(CMDECHO)./Event 2000 509 1 20  >> Event.read.log_zstd
	$(CMDECHO)./Event 2000 510 1  1  >> Event.write.log_zstd
	$(CMDECHO)./Event 2000 510 1 20  >> Event.read.log_zstd
	$(CMDECHO)./Event 2000 511 1  1  >> Event.write.log_zstd
	$(CMDECHO)./Event 2000 511 1 20  >> Event.read.log_zstd
	$(CMDECHO)./Event 2000 512 1  1  >> Event.write.log_zstd
	$(CMDECHO)./Event 2000 512 1 20  >> Event.read.log_zstd
	$(CMDECHO)./Event 2000 513 1  1  >> Event.write.log_zstd
	$(CMDECHO)./Event 2000 513 1 20  >> Event.read.log_zstd
	$(CMDECHO)./Event 2000 514 1  1  >> Event.write.log_zstd
	$(CMDECHO)./Event 2000 514 1 20  >> Event.read.log_zstd
	$(CMDECHO)./Event 2000 515 1  1  >> Event.write.log_zstd
	$(CMDECHO)./Event 2000 515 1 20  >> Event.read.log_zstd
	$(CMDECHO)./Event 2000 516 1  1  >> Event.write.log_zstd
	$(CMDECHO)./Event 2000 516 1 20  >> Event.read.log_zstd
	$(CMDECHO)./Event 2000 517 1  1  >> Event.write.log_zstd
	$(CMDECHO)./Event 2000 517 1 20  >> Event.read.log_zstd
	$(CMDECHO)./Event 2000 518 1  1  >> Event.write.log_zstd
	$(CMDECHO)./Event 2000 518 1 20  >> Event.read.log_zstd
	$(CMDECHO)./Event 2000 519 1  1  >> Event.write.log_zstd
	$(CMDECHO)./Event 2000 519 1 20  >> Event.read.log_zstd
	$(CMDECHO)./Event 2000 520 1  1  >> Event.write.log_zstd
	$(CMDECHO)./Event 2000 520 1 20  >> Event.read.log_zstd
	$(CMDECHO)./Event 2000 521 1  1  >> Event.write.log_zstd
	$(CMDECHO)./Event 2000 521 1 20  >> Event.read.log_zstd
	$(CMDECHO)./Event 2000 522 1  1  >> Event.write.log_zstd
	$(CMDECHO)./Event 2000 522 1 20  >> Event.read.log_zstd
	$(CMDECHO)./Event 2000   6 1  1  >> Event.write.log
	$(CMDECHO)./Event 2000   6 1 20  >> Event.read.log
