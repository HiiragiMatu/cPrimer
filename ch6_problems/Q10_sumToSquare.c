#include <stdio.h>

int main(void){
  int min, max;
  int i;
  int sum = 0;
  printf("Please enter lower and upper integer limits: ");
  while(scanf("%d", &min) == 1 && scanf("%d", &max) == 1){
    if(min > max){
      printf("Lower should not be larger than Upper!\n");
    }else{
      for (i = min ; i <= max ; i++){
        sum = sum + i * i;
      }
      printf("The sums of the squares from %d to %d is %d\n", min * min, max * max, sum);
      printf("Try Again(q to exit): ");
      sum = 0;
    }
  }
  return 0;
}