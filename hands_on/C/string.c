/*
  Basic operations to handle strings
*/

#include <string.h>
#include <stdio.h>

int main(void){
  char name[256];
  char lastname[256];
  char fullname[256];
  int year;


  /*see the garbage in the string before initializing*/
  printf("Garbage in string name %s\n", name);
  printf("Garbage in string lastname %s\n", lastname);


  /*Initialize the string making a copy*/
  strcpy(name, "Simon");
  strcpy(lastname, "El Bobito");

  printf("After inialization: %s %s\n", name, lastname);

  /*create a string with an special format*/
  year = 1965;
  sprintf(fullname, "%s, %s; Born %d", lastname, name, year);

  printf("Final string: %s\n", fullname);

  return 0;
}
