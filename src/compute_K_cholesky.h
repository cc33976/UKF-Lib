#ifndef COMPUTE_K_CHOLESKY_H
#define COMPUTE_K_CHOLESKY_H

// C++ handshake for Arduino implementation
#ifdef __cplusplus
extern "C" {
#endif

  // forward declarations
  void forward_solve_L_3x3(const double L[3][3], const double b[3], double y[3]);

  void back_solve_LT_3x3(const double L[3][3], const double y[3], double x[3]);

  void back_solve_L_3x3(const double L[3][3], const double y[3], double x[3]);

  void compute_K_cholesky(const double Pxz[3][3], const double L[3][3], double K[3][3]);

#ifdef __cplusplus
}
#endif


#endif
