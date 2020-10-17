#include <stdio.h>
#define SIZE 10

int main(void){
  int i;
  int show[SIZE];
  int square = 2;
  printf("Numbers: ");
  for(i = 0; i < SIZE; i++){
    show[i] = square;
    square *= 2;
  }

  i = 0;
  
  do {
    printf("%d ", show[i]);
    i++;
  } while (i != SIZE);
  
  return 0;
}