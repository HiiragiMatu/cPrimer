#include <stdio.h>

int main(void){
  int count, num;
  int squareSum = 0;

  printf("Enter a number to add their square: ");
  scanf("%d", &num);
  while(num != 'q'){
    printf("     num     square     sumSqares\n");
    for(count = 0; count < num + 1; count++){
      squareSum = squareSum + count * count;
      printf("%10d %10d %10d\n", count, count * count, squareSum);
    }
    squareSum = 0;
    printf("Enter another number to continue(q to quit): ");
    scanf("%d", &num);
  }
  return 0;
}