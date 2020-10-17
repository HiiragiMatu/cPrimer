#include <stdio.h>
#define SIZE 5

int main(void){
  int number[SIZE];
  int i;
  printf("Enter 5 number to inverse: ");
  for (i = 0; i < SIZE; i++){
    scanf("%d", &number[i]);
  }
  for (i = SIZE-1; i >= 0; i--){
    printf("%d ", number[i]);
  }
  printf("\nLook another number(q to exit): ");
  return 0;
}