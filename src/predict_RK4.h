#ifndef PREDICT_RK4_H
#define PREDICT_RK4_H

#ifdef __cplusplus
extern "C" {
#endif

  typedef struct UKF UKF;

  void f(double x[3], double dxdt[3]);

  void predict_RK4(UKF *ukf, double x[3], double y[3]);

#ifdef __cplusplus
}
#endif
#endif
