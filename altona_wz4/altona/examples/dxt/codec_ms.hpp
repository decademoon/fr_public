/****************************************************************************/
/***                                                                      ***/
/***   (C) 2005 Dierk Ohlerich, all rights reserved                       ***/
/***                                                                      ***/
/****************************************************************************/

#pragma once
#include "base/types.hpp"

/****************************************************************************/

/****************************************************************************/
/***                                                                      ***/
/***   (C) 2005 Dierk Ohlerich, all rights reserved                       ***/
/***                                                                      ***/
/****************************************************************************/

#pragma once
#include "base/types2.hpp"
#include "doc.hpp"

/****************************************************************************/

class CodecMS : public DocCodec
{             
public:
  CodecMS();
  ~CodecMS();

  const sChar *GetName();
  void Pack(sImage *bmp,sImageData *dxt,sInt level=1);
  void Unpack(sImage *bmp,sImageData *dxt,sInt level=1);
};

/****************************************************************************/



/****************************************************************************/
