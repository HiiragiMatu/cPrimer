#include <stdio.h>
#define SIZE 8

int main(void){
  int i, j;
  double nums[SIZE];
  double map_nums[SIZE];
  double input;
  
  printf("Enter 8 doubles: ");
  for (i = 0; i < SIZE; i++){
    scanf("%lf", &input);
    nums[i] = input;
  }
  double sum = 0;
  for (j = 0; j < SIZE; j++){
    map_nums[j] = nums[j] + sum;
    sum = map_nums[j];
    printf("%.6lf", map_nums[j]);
    printf(" -> ");
  }
  return 0;
}

