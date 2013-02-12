/*
  Creates an identity matrix following the 
  row major order convention in C.
*/
#include <stdio.h>
#include <stdlib.h>
void transpose(float * m, int n_x, int n_y);
void print_matrix(float * m, int n_x, int n_y);

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
      I[pos] = pos;
    }
  }

  print_matrix(I, n_x, n_y);

  transpose(I, n_x, n_y);
 
  print_matrix(I, n_x, n_y);

  return 0;
}



void print_matrix(float * m, int n_x, int n_y){
  int i,j,pos;

  fprintf(stdout, "\n");
  /*Prints to screen*/
  for(i=0;i<n_x;i++){
    for(j=0;j<n_y;j++){
      pos = i + (n_x * j);/*position in the array*/
      fprintf(stdout, " %f ",m[pos]);
    }
    fprintf(stdout, "\n");
  }
  fprintf(stdout, "\n");
}

void transpose(float * m, int n_x, int n_y){
  int i,j,pos_ij, pos_ji;
  float tmp;
  /*Prints to screen*/
  for(i=0;i<n_x;i++){
    for(j=i;j<n_y;j++){
      pos_ij = i + (n_x * j);
      pos_ji = j + (n_x * i);

      tmp = m[pos_ij];
      m[pos_ij] = m[pos_ji];
      m[pos_ji] = tmp;      
    }
  }

}
