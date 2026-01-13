#ifndef UNSCENTEDKALMANFILTER_H
#define UNSCENTEDKALMANFILTER_H

// all subheaders declared here 
#include "cholesky.h"
#include "compute_K_cholesky.h"
#include "compute_process_sigmas.h"
#include "compute_weights.h"
#include "cross_variance.h"
#include "dot.h"
#include "dot3.h"
#include "dot33.h"
#include "f_func.h"
#include "f.h"
#include "h_func.h"
#include "merwe.h"
#include "predict_RK4.h"
#include "predict.h"
#include "residual.h"
#include "subtract.h"
#include "trans33.h"
#include "unscented_transform.h"
#include "update.h"


// C++ handshake for Arduino implementation
#ifdef __cplusplus
extern "C" {
#endif


 
  typedef struct UKF UKF;

  struct MerweSigmaPoints;

  // forward declarations of fx and hx fn pointers
  typedef void (*fx_fn)(UKF *ukf, double x_in[3], double x_out[3]);
  typedef void (*hx_fn)(double x_in[3], double H[3][3], double z_out[3]);


  struct UKF{
    int dim_x;
    int dim_z;
    double dt;
    
    struct MerweSigmaPoints *sp;

    double x[3];
    double x_prior[3];
    double x_post[3]; 

    // pointers to predefined 3x3 arrays s
    double P[3][3];
    double P_prior[3][3];
    double P_post[3][3];
    double Q[3][3];
    double R[3][3];

    // sigma points from fx and hx functions
    double sigmas_f[7][3];
    double sigmas_h[7][3];

    // residuals of state x and measurement z
    double residual_x[3];
    double residual_z[3];
    double y[3];

    // function pointer declarations
    fx_fn fx;
    hx_fn hx; 

    // Kalman Gain
    double K[3][3];

    // System uncertainty
    double S[3][3];
    double SI[3][3];
  

  };


  // create constructor-like object
  void init_UKF(UKF *ukf,
		int dim_x,
		int dim_z,
		double x[3],
		double P[3][3],
		double Q[3][3],
		double R[3][3],
		double dt,
		fx_fn fx,
		hx_fn hx,
		struct MerweSigmaPoints *sp);

#ifdef __cplusplus
}
#endif

#endif
