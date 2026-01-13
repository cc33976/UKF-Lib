#ifndef COMPUTE_PROCESS_SIGMAS_H
#define COMPUTE_PROCESS_SIGMAS_H


// C++ handshake for Arduino implementation
#ifdef __cplusplus
extern "C" {
#endif

  typedef struct UKF UKF;
  
  typedef struct MerweSigmaPoints MerweSigmaPoints;

  void compute_process_sigmas(UKF *ukf, MerweSigmaPoints *sp);

#ifdef __cplusplus
}
#endif

#endif
