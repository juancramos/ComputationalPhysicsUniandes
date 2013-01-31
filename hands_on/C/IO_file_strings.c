/*
  First writes the months of the year and its corresponding number 
  of days to a file. 
  Afterwards it reads the same file and prints to screen its contents.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(void){
  FILE *in;
  int i;
  char name[256];
  int n_days;
  char filename[100]="months.dat";
  char months[12][256];
  /*this defines from the beginning the items in the array*/
  int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
  
  /*Initialization of the array months, with the name of each month in spanish*/
  strcpy(months[0], "Enero");
  strcpy(months[1], "Febrero");
  strcpy(months[2], "Marzo");
  strcpy(months[3], "Abril");
  strcpy(months[4], "Mayo");
  strcpy(months[5], "Junio");  
  strcpy(months[6], "Julio"); 
  strcpy(months[7], "Agosto");  
  strcpy(months[8], "Septiembre");  
  strcpy(months[9], "Octubre");  
  strcpy(months[10], "Noviembre");
  strcpy(months[11], "Diciembre");
  
  

  printf("Writing to file: %s\n", filename);

  /*opens the file, writes, closes the file*/
  in = fopen(filename,"w"); 
  if(!in){
    printf("problem opening the file %s\n", filename);
    exit(1);
  }  
  for(i=0;i<12;i++){
    fprintf(in, "%s %d\n", months[i], days[i]); 
  }
  fclose(in);

  /*opens the file, reads, closes the file*/
  in = fopen(filename,"r"); 
  if(!in){
    printf("problem opening the file %s\n", filename);
    exit(1);
  }  
  for(i=0;i<12;i++){
    fscanf(in, "%s %d\n", name, &n_days); 
    printf("I think that %s has %d days\n",name, n_days);
  }
  fclose(in);

  return 0;
}


