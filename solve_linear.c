#include <stdio.h>
#include "solve_linear.h"

void solve_linear(int b,int c){
   float x;
   x=-c/(float)b;
   printf("x is %.4f\n",x);
}
