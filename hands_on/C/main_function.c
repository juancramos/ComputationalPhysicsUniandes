/*
  Prints a table of values corresponding to 
  the radius of a sphere, its surface and volume.

  The function doing the printing is defined outside the main.c 
*/

#include <stdio.h>
#define PI 3.14159

void print_points(int n_points);
float get_surface(float radius);
float get_volume(float radius);

int main(void){
  /*defines the variables*/
  int n_points =12;

  /*call to the external function*/
  print_points(n_points); 
  return 0;
}

void print_points(n_points){
  int i;
  float radius;
  float volume;
  float surface;
  
  /*initialization*/
  radius = 0.0;
  volume = 0.0;
  surface = 0.0;

  printf("Radius Surface Volume\n");
  /*loop over n_points different values for the radius*/
  for(i=0; i<n_points; i++){
    radius = 1.0*i;

    surface = get_surface(radius); /*call to the function radius*/
    volume = get_volume(radius);  /*call to the function volume*/

    /*output the values to the screen*/
    printf("%f %f %f\n", radius, surface, volume);
  }  
}

float get_surface(float radius){
  float sur;
  sur = 4.0 * PI * radius * radius;
  return sur;
}

float get_volume(float radius){
  float vol;
  vol = (4.0 / 3.0 ) * PI * radius * radius * radius;
  return vol;
}

