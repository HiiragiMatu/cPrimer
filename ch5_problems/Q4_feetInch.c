#include <stdio.h>
#define FEET 30.48
#define INCH 2.54

int main(void){
  float height;
  int h_feet;
  float h_inch;

  printf("Enter a height in cetermiter: ");
  scanf("%f", &height);
  while(height > 0){
    h_feet = (int)(height / FEET); //height divides FEET first -> cast into int 
    h_inch = (height - h_feet * FEET) / INCH; //h_feet multiplies float -> cast into float
    printf("%5.2f cm is equal to %d feet and %5.2f inch.\n", height, h_feet, h_inch);
    printf("Enter a height in cetermiter(<= 0 to quit): ");
    scanf("%f", &height);
  }

  printf("Bye!\n");
  return 0;
}