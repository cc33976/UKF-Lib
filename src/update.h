#ifndef UPDATE_H
#define UPDATE_H

#include "dot33.h"

#ifdef __cplusplus
extern "C" {
#endif

  typedef struct UKF UKF;

  typedef struct MerweSigmaPoints MerweSigmaPoints;

  void cross_variance(UKF *ukf,
		      MerweSigmaPoints *sp,
		      double z[3],
		      double Pxz[3][3]);

  void residual(double sigmas[3],
		double x[3],
		double y[3]);

  void trans33(double A[3][3], double At[3][3]);

  void dot3(double m[3][3], double v[3], double out[3]);

  void dot33(double A[3][3], double B[3][3], double Out[3][3]);
  
  void update(UKF *ukf,
	      MerweSigmaPoints *sp,
	      double R[3][3],
	      double H[3][3],
	      double z[3]);

#ifdef __cplusplus
}
#endif
#endif
