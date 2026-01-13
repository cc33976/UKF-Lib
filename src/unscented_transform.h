#ifndef UNSCENTED_TRANSFORM_H
#define UNSCENTED_TRANSFORM_H

#ifdef __cplusplus
extern "C" {
#endif

  typedef struct UKF UKF;
  
  typedef struct MerweSigmaPoints MerweSigmaPoints;

  void residual(double sigmas[3], double x[3], double y[3]);

  void unscented_transform(double sigmas[7][3],
			   double Wm[7],
			   double Wc[7],
			   double noise_cov[3][3],
			   UKF *ukf,
			   double x[3],
			   double P[3][3]);

#ifdef __cplusplus
}
#endif
#endif 


