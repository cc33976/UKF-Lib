#ifndef F_FUNC_H
#define F_FUNC_H


#ifdef __cplusplus
extern "C" {
#endif

  typedef struct UKF UKF;

  void predict_RK4(UKF *ukf, double x[3], double y[3]);

  void f_func(UKF *ukf, double x_in[3], double x_out[3]);

#ifdef __cplusplus
}
#endif
#endif
	    
