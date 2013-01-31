/*
  Prints a table of values corresponding to 
  the radius of a sphere, its surface and volume.
*/

#include <stdio.h>
#define PI 3.14159

int main(void){
  /*defines the variables*/
  int i;
  float radius;
  float volume;
  float surface;
  
  /*initialization*/
  radius = 0.0;
  volume = 0.0;
  surface = 0.0;

  printf("Radius Surface Volume\n");
  /*loop over 12 different values for the radius*/
  for(i=0; i<12; i++){
    radius = i;
    surface = 4.0 * PI * radius * radius;
    volume = (4.0 / 3.0 ) * PI * radius * radius * radius;
    /*output the values to the screen*/
    printf("%f %f %f\n", radius, surface, volume);
  }

  return 0;
}
