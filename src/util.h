#pragma once
#include <math.h>
#include <new>
#include "Vector.h"
// From Tom Minka's LightSpeed package
#define mem(X,n) (X*) malloc(sizeof(X)*(n));

#ifdef	 __USE_ISOC99
/* INFINITY and NAN are defined by the ISO C99 standard */
#elif __STDC_VERSION__ < 199901L
inline double my_infinity(void) {
  double zero = 0;
  return 1.0/zero;
}
#define INFINITY my_infinity()
inline double my_nan(void) {
  double zero = 0;
  return zero/zero;
}
#define NAN my_nan()
#endif


#ifndef M_PI
#define M_PI       3.14159265358979323846
#endif


double gammaln(double x);
double urand();
double harmean(double x,double y);


extern Vector gl_pc;
void precomputeGammaLn(int size);
