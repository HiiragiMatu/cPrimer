#include <stdio.h>

int main(void){
  int cm;
  float inch;
  int inch_to_cm;
  float cm_to_inch;

  printf("What's your height in Centimeter? ");
  scanf("%d", &cm);
  cm_to_inch = cm * 2.54;

  printf("You are %.4f height in inch!\n", cm_to_inch);
  printf("How about your height in inch? ");
  scanf("%f", &inch);
  inch_to_cm = inch / 2.54;

  printf("You are %d height this time!\n", inch_to_cm);

  if(cm > inch_to_cm){
    printf("Haha, I found your are shorter!\n");
  } else if(cm < inch_to_cm){
    printf("Oh!, Why you are taller now?\n");
  } else {
    printf("Well, looks like there is no difference.\n");
  }
     
  return 0;
}