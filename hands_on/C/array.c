/*
  Example of static array definition and the importance of initalization
*/
#include <stdio.h>

int main(void){
  int lista[10]; //define a list of 10 integers
  int i;

  //print the content
  printf("Content before initilization\n");
  for(i=0;i<10;i++){
    printf("%d\n", lista[i]);
  }

  //initialize
  for(i=0;i<10;i++){
    lista[i] = i * 2;
  }
  
  //print the new content
  printf("Content after initilization\n");
  for(i=0;i<10;i++){
    printf("%d\n", lista[i]);
  }

  return 0;
}
