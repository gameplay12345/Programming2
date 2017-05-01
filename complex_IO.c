#include <stdio.h>
#include "complex.h"
#include "complex_IO.h"
complex read_complex(void){
   complex num;
      printf("What is the real number?:");
      scanf("%d",& num.real);
      printf("What is the imaginary number?:");
      scanf("%d",& num.img);
   return num;
}

void write_complex(complex num1){
   printf("%d+%di\n",num1.real,num1.img);
}

