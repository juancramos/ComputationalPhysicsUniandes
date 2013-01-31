/*
  This program takes as three numbers as arguments.
  The first one is an integer, the other two are floats.
  If loops the number of times indicated by the integer
  printing the produc of the two floats and the the loopindex.
*/
#include <stdlib.h>
#include <stdio.h>
#define USAGE "./a.out n_times value_a value_b"

int main(int argc, char **argv){
  int i;
  int n_times;
  float value_a;
  float value_b;

  if(argc!=4){
    printf("USAGE: %s\n", USAGE);
    exit(1);
  }
  
  /*initialize the variable according to the arguments*/
  n_times = atoi(argv[1]);
  value_a = atof(argv[2]);
  value_b = atof(argv[3]);


  for(i=0;i<n_times;i++){
    printf("i=%d, a=%f b=%f, a*b*i=%f\n", i, value_a, value_b, value_a*value_b*i);
  }
  return 0;
}
