#ifndef SUBTRACT_H
#define SUBTRACT_H

#ifdef __cplusplus
extern "C" {
#endif

  void subtract(double x[3],
		double U[3][3],
		double sigmas[7][3]);

#ifdef __cplusplus
}
#endif
#endif
