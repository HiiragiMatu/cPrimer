#include <stdio.h>

int main(void){
  float expression;

  printf("Enter a floating-point value: ");
  scanf("%f", &expression);
  printf("fixed-point notation: %.6f\n", expression);
  printf("exponential notation: %e\n", expression);
  printf("p notation: %a\n", expression);

  return 0;
}