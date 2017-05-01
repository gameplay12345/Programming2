#include <stdio.h>
#include "complex.h"
#include "complex_arith.h"

complex add_complex(complex num1,complex num2){
   complex ans;
      ans.real=num1.real+num2.real;
      ans.img=num1.img+num2.img;
   return ans;
}

complex subtract_complex(complex num1,complex num2){
   complex ans;
      ans.real=num1.real-num2.real;
      ans.img=num1.img-num2.img;
   return ans;
}

complex multiply_complex(complex num1,complex num2){
   complex ans;
      ans.real=num1.real*num2.real-num1.img*num2.img;
      ans.img=num1.real*num2.img+num2.real*num1.img;
   return ans;
}

void divide_complex(complex num1,complex num2){
   complex numer,denom;
   float ans_real,ans_img; 
   numer=multiply_complex(num1,conjugate_complex(num2));
   denom=multiply_complex(num2,conjugate_complex(num2));
   if(denom.real!=0){
      ans_real=(float)numer.real/denom.real;
      ans_img=(float)numer.img/denom.real;
      printf("%f+%fi\n",ans_real,ans_img);
   }
   else
      printf("!~ERROR~!Cannot divide by 0.\n");
}

complex conjugate_complex(complex num1){
   complex ans;
      ans.real=num1.real;
      ans.img=-1*num1.img;
   return ans;
}

complex negate_complex(complex num1){
   complex ans;
      ans.real=-1*num1.real;
      ans.img=-1*num1.img;
   return ans;
}
