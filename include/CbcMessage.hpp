// Copyright (C) 2002, International Business Machines
// Corporation and others.  All Rights Reserved.
#ifndef CbcMessage_H
#define CbcMessage_H

#if defined(_MSC_VER)
// Turn off compiler warning about long names
#  pragma warning(disable:4786)
#endif

/** This deals with Cbc messages (as against Clp messages etc).
    CoinMessageHandler.hpp is the general part of message handling.
    All it has are enum's for the various messages.
    CbcMessage.cpp has text in various languages.

    It is trivial to use the .hpp and .cpp file as a basis for
    messages for other components.
 */

#include "CoinMessageHandler.hpp"
enum CBC_Message
{
  CBC_END_GOOD,
  CBC_MAXNODES,
  CBC_MAXTIME,
  CBC_MAXSOLS,
  CBC_SOLUTION,
  CBC_END,
  CBC_INFEAS,
  CBC_STRONG,
  CBC_SOLINDIVIDUAL,
  CBC_INTEGERINCREMENT,
  CBC_STATUS,
  CBC_GAP,
  CBC_ROUNDING,
  CBC_ROOT,
  CBC_GENERATOR,
  CBC_BRANCH,
  CBC_STRONGSOL,
  CBC_NOINT,
  CBC_VUB_PASS,
  CBC_VUB_END,
  CBC_NOTFEAS1,
  CBC_NOTFEAS2,
  CBC_NOTFEAS3,
  CBC_CUTOFF_WARNING1,
  CBC_ITERATE_STRONG,
  CBC_DUMMY_END
};

class CbcMessage : public CoinMessages {

public:

  /**@name Constructors etc */
  //@{
  /** Constructor */
  CbcMessage(Language language=us_en);
  //@}

};

#endif
