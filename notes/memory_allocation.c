/*
  Examples of successful memory allocation and buffer overflow i.e. violation of memory safety.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
  int i;
  /*future arrays*/
  int *array_int;

  /*number of points in the array*/						
  int n_points;
  n_points = 10;
  
  /*data allocation*/
  array_int = malloc(n_points * sizeof(int));

  /*check if everything went OK*/
  if(!array_int){
    printf("There is something wrong with array int\n");
    exit(1);
  }

  /*fill the array with data*/
  printf("Allocation went OK. Initializing...\n");
  for(i=0;i<n_points;i++){
    array_int[i] = i*2;
    printf("%d\n", array_int[i]);
  }
  
  printf("Let's see what happens if I go a bit beyond the allocated space...\n");
  /*What if I try to go a bit beyond?*/
  array_int[n_points] = n_points * 2;
  printf("%d\n", array_int[n_points]);   
  printf("OK.")

  /*What if I go far away?*/
  printf("and if I go far away?\n");
  array_int[n_points * 10000] = n_points * 10000 * 2;
  printf("%d\n", array_int[n_points * 10000]);   
  

  printf("everything went just fine\n");
  return 0;
}
