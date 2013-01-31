/*
  This program counts the lines in a series 
  of files given at the moment of execution.
*/
#include <stdlib.h>
#include <stdio.h>

int count_lines(char *filename);
int main(int argc, char **argv){
  int n_lines;
  int i;

  /*See what comes from the command line*/
  printf("This program is executed with %d arguments:\n", argc);
  for(i=0;i<argc;i++){
    printf("%s\n", argv[i]);
  }

  if(argc<2){
    printf("We need at least 1 argument beside the name of the executable!\n EXIT!\n");
    exit(1);
  }

  /*We assume that all the arguments are strings. 
    Loop over this lists to count the lines*/

  for(i=1;i<argc;i++){
    n_lines = count_lines(argv[i]);
    printf("File %s has %d lines\n", argv[i], n_lines);
  }
  return 0;
}

int count_lines(char *filename){
  FILE *in;
  int n_lines;
  int c;
  if(!(in=fopen(filename, "r"))){
    printf("problem opening file %s\n", filename);
    exit(1);
  }

  n_lines = 0;
  do{
    c = fgetc(in);
    if(c=='\n'){
      n_lines++;
    }
  }while(c!=EOF);
  
  fclose(in);
  return n_lines;
}
