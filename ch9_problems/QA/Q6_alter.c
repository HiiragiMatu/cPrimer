#include <stdio.h>

void alter(int *x, int *y){
  int temp;
  temp = *x + *y;
  *x = *x - *y;
  *y = temp;
}