#ifndef CROSS_VARIANCE_H
#define CROSS_VARIANCE_H


#ifdef __cplusplus
extern "C" {
#endif

  typedef struct UKF UKF;
  typedef struct MerweSigmaPoints MerweSigmaPoints;

  void cross_variance(UKF *ukf,
		      MerweSigmaPoints *sp,
		      double z[3],
		      double Pxz[3][3]);

#ifdef __cplusplus
}
#endif 
#endif
