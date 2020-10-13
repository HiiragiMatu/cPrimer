#include <stdio.h>

int main(void){
  float f_e;

  printf("Who's going to show?\n");
  scanf("%f", &f_e);

  printf("Aha! See %f or %e", f_e, f_e);

  return 0;
}