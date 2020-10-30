#include <stdio.h>

int main(void){
  int digits[6] = {1, 2, 4, 8, 16, 32};
  printf("%d\n", digits[2]);
  int digit100[100] = {[99] = -1};
  printf("%d\n", digit100[99]);
  int digits100_2[100] = {[5] = 101, [10] = 101, 101, 101, 101};
  printf("%d %d %d %d %d", digits100_2[5], digits100_2[10], digits100_2[11], digits100_2[12], digits100_2[13]);
  return 0;
}