#include <stdio.h>
#define SIZE 8

int main(void){
  int i, j;
  double nums[SIZE];
  double input;
  
  printf("Enter 8 doubles: ");
  for (i = 0; i < SIZE; i++){
    nums[i] = scanf("%lf", &input);
  }

  for (i = 0; i < SIZE; i++){
    printf("%lf ", nums[i]);
  }

  return 0;
}

