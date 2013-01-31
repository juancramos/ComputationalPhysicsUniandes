/*
examples of 'if'  and 'while' statements
*/
#include <stdio.h>

int main(void){
  int a;
  int b;
  
  a=1;
  b=2;

  /*if*/
  if(a > b){
    printf("a is greater than b: a=%d, b=%d\n", a, b);
  }

  /*if else*/
  a=1;
  b=1;
  if(a<b){
    printf("a is less than b: a=%d, b=%d\n", a, b);
  }else{
    printf("a is equal or greater than b: a=%d, b=%d\n", a, b);
  }


  /*do while*/
  printf("A loop with do-while structure\n");
  a=0;
  b=10;
  do{
    printf("a=%d, b=%d\n", a, b);    
    a++; /*a = a+1*/
  }while(a<b);
  

  return 0;
}
