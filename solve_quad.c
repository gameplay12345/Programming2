#include "solve_quad.h"
#include "solve_real.h"
#include "solve_complex.h"

void solve_quad(int a,int b,int c){
   if(b*b-4*a*c<0)
      solve_complex(a,b,c);
   else
      solve_real(a,b,c);
}

