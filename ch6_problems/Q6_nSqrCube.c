#include <stdio.h>

int main(void){
  int i, n, min, max;
  printf("Please enter the min and max number to check their square and cube: ");
  while(scanf("%d", &min) == 1  && scanf("%d", &max) == 1){
    if(min > max){
      printf("First number has to be larger then second one!\n");
    }else{
      printf("%5s %5s %5s\n", "Number", "Square", "Cube");
      for (i = min; i < max + 1; i++)
      {
        printf("%5d %5d %5d\n", i, i * i, i * i * i);
      }
      printf("Next Range(q to quit): \n");
    }
  }
  return 0;
}