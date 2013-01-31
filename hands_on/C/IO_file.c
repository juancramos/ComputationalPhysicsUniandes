#include <stdlib.h>
#include <stdio.h>

int main(void){
  FILE *in;
  int i;
  int var;
  int test;
  char filename[100]="new_data.dat";
  
  printf("Writing to file: %s\n", filename);

  /*opens the file, writes, closes the file*/
  in = fopen(filename,"w"); 
  if(!in){
    printf("problems opening the file %s\n", filename);
    exit(1);
  }
  
  for(i=0;i<10;i++){
    fprintf(in, "%d\n", i); 
  }

  fclose(in);


  /*opens the file, appends more data, closes the file*/
  in = fopen(filename,"a"); 
  if(!in){
    printf("problems opening the file %s\n", filename);
    exit(1);
  }
  
  for(i=0;i<10;i++){
    fprintf(in, "%d\n", i*2 + 10); 
  }

  fclose(in);


  /*opens the file, reads, closes the file*/
  in = fopen(filename, "r");
  if(!in){
    printf("problems opening the file %s\n", filename);
    exit(1);
  }
  
  printf("Now I am reading\n");
  for(i=0;i<20;i++){
    fscanf(in, "%d\n", &var);
    printf("value = %d\n", var);
  }
  fclose(in);
 
  /*opens the file, reads, closes the file*/
  in = fopen(filename, "r");
  if(!in){
    printf("problems opening the file %s\n", filename);
    exit(1);
  }
  
  printf("Now I am reading\n");
  do{
    test = fscanf(in, "%d\n", &var);
    if(test!=EOF){
      printf("value = %d\n", var);
    }
  }while(test!=EOF);

  fclose(in);



  return 0;
}


