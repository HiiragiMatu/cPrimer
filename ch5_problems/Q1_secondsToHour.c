#include <stdio.h>
#define M_TO_H 60

int main(void){
  int min;
  int hour;
  printf("How many minutes?\n");
  scanf("%d", &min);

  hour = min / M_TO_H;
  min = min % 60;
  printf("It's %d hour and %d mins.\n", hour, min);

  return 0;
}