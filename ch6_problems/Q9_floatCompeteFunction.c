#include <stdio.h>

float whoWin(float n1, float n2);

int main(void){
  float p1, p2;
  printf("Please enter two float respectively: ");
  while(scanf("%f", &p1) == 1 && scanf("%f", &p2) == 1){
    printf("%15s %15s %15s\n", "Difference", "Multiplication", "Division");
    whoWin(p1, p2);

    printf("Find out something? Let's explore more(q to exit): ");
  }
  return 0;
}

float whoWin(float n1, float n2){
  float diff = n1 - n2;
  float multi = n1 * n2;
  float div = multi / diff;
  printf("%15f %15f %15f\n", diff, multi, div);
}