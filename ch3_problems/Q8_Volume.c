#include <stdio.h>

int main(void){
  float pint, cup;
  float ounce, tablespoon, spoon;
  
  printf("How many cups do you want? ");
  scanf("%f", &cup);
  pint = cup * 2;
  ounce = cup / 8;
  tablespoon = ounce / 2;
  spoon = tablespoon / 3;

  printf("You own %f pint.\n", pint);
  printf("You own %f ounce.\n", ounce);
  printf("You own %f tablespoon.\n", tablespoon);
  printf("You oown %f spoon.\n", spoon);

  return 0;
}