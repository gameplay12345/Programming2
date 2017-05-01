#include <stdio.h>
#include <math.h>
#include "solve_real.h"

void solve_real(int a,int b,int c){
   float x1,x2;
   x1=(-b+sqrt(b*b-4*a*c))/(2*a);
   x2=(-b-sqrt(b*b-4*a*c))/(2*a);
   printf("%.3f+%.3f\n",x1,x2);
   printf("%.3f-%.3f\n",x1,x2);
}
