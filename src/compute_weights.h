#ifndef COMPUTE_WEIGHTS_H
#define COMPUTE_WEIGHTS_H

#include "merwe.h"

#ifdef __cplusplus
extern "C" {
#endif

  typedef struct MerweSigmaPoints MerweSigmaPoints;
  
  void compute_weights(MerweSigmaPoints *sp);

#ifdef __cplusplus
}
#endif

#endif
