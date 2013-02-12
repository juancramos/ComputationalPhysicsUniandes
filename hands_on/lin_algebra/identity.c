/*
  Creates an identity matrix following the 
  row major order convention in C.
*/
#include <stdio.h>
#include <stdlib.h>
int main(void){
  float *I;
  int n_x=5;
  int n_y=5;
  int pos;
  int i,j;

  if(!(I = malloc(sizeof(float)*n_x *n_y))){
      fprintf(stderr, "Problem with memory allocation");
      exit(1);
  }

  /*Initialization*/
  for(i=0;i<n_x;i++){
    for(j=0;j<n_y;j++){
      pos = j + (n_y * i) ;/*position in the array*/	
      if(i==j){					
	I[pos]=1.0;
      }else{
	I[pos]=0.0;
      }
    }
  }

  /*Prints to screen*/
  for(i=0;i<n_x;i++){
    for(j=0;j<n_y;j++){
      pos = j + (n_y * i);/*position in the array*/
	fprintf(stdout, " %f ",I[pos]);
    }
    fprintf(stdout, "\n");
  }
  
  return 0;
}
