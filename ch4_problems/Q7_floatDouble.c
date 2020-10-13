#include <stdio.h>
#include <float.h>

int main(void){
  float p1 = 1.0 / 3.0;
  double p2 = 1.0 / 3.0;

  printf("Game Start!\n");
  printf("%20.4f %20.4f\n", p1, p2);
  printf("%20.12f %20.12f\n", p1, p2);
  printf("%20.16f %20.16f\n", p1, p2);

  return 0;
}