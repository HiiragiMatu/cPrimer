#include <stdio.h>

int main(void){
  int count, num;
  int sum = 0;

  printf("How much would you like to add to?\n");
  scanf("%d", &num);
  while(num != 'q'){
    for (count = 0; count < num+1; count++){
      sum = sum + count;
      printf("%5d %5d\n", count, sum);
    }
    sum = 0;
    printf("Choose another number(q to quit): ");
    scanf("%d", &num);
  }

  printf("Bye!");
  return 0;
}