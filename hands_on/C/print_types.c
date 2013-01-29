/*
Different formats for the different kinds of basic data types in C.
*/
#include <stdio.h>
int main(void){
  char s[100] = "La respuesta es: ";
  int i = 42;
  float x = 42.0;
  double y = 42.0;


  printf("%s %d %f %e\n", s, i, x, y);

  printf("%s %d %d %d\n", s, i, x, y);
  return 0;
}
