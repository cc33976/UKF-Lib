#ifndef PREDICT_H
#define PREDICT_H

#include "compute_process_sigmas.h"

#ifdef __cplusplus
extern "C" {
#endif

  typedef struct UKF UKF;

  typedef struct MerweSigmaPoints MerweSigmaPoints;

  void compute_process_sigmas(UKF *ukf, MerweSigmaPoints *sp);

  void (*UT)(double[7][3], double[7], double[7], double[3][3],
	     double[3], double[3][3]);

  void predict(UKF *ukf,
	       MerweSigmaPoints *sp); 


#ifdef __cplusplus
}
#endif
#endif
