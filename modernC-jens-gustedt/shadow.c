#include "c23-fallback.h"

void squareIt(double* p) [[__unsequenced__]] {
  *p *= *p;
}
int main(void) {
  double x = 35.0; /*@\label{line:decl-x}*/
  double* xp = &x; /*@\label{line:decl-xp}*/
  {
    squareIt(&x);               /* Refers to double x *//*@\label{line:use-x-1}*/
    /*@…*/
    [[maybe_unused]] int x = 0; /* Shadow double x *//*@\label{line:decl-x-2}*/
    /*@…*/
    squareIt(xp);               /* Valid use of double x *//*@\label{line:use-xp}*/
    /*@…*/
  }                /*@\label{line:end-x-2}*/
  /*@…*/
  squareIt(&x);                 /* Refers to double x *//*@\label{line:use-x-2}*/
  /*@…*/
}
