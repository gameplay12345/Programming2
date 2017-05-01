#include <stdio.h>
#include <math.h>
#include "solve_complex.h"

void solve_complex(int a,int b,int c){
   int x_real;
   float x_img;
   x_real=-b/(2.0*a);
   x_img=sqrt(abs(b*b-4*a*c))/(2*a);
   printf("%d+%.4fi\n",x_real,x_img);
   printf("%d-%.4fi\n",x_real,x_img);
}

