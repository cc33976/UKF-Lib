#ifndef H_FUNC_H
#define H_FUNC_H


#ifdef __cplusplus
extern "C" {
#endif

  typedef struct UKF UKF;

  void h_func(double x_in[3], double H[3][3], double z_out[3]);

#ifdef __cplusplus
}
#endif
#endif
