/*
  Using some mathematical operations in math.h
*/
#include <stdio.h>
#include <math.h>
int main(void){
  int a;
  int b;
  int c;
  
  float d;
  float e;
  float f;

  a = 1;
  b = 10;
  c = pow(a,b);

  d = 1.0;
  e = 10.0;
  f = pow(a,b);

  printf("%d %d %d \n", a , b, c);
  printf("%f %f %f \n", d , e, f);

  return 0;
}
