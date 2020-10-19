#include <stdio.h>

int main(void){
  int number;
  int e_count = 0, o_count = 0;
  int e_sum = 0, o_sum = 0;

  printf("Enter a number: ");
  while(scanf("%d", &number) == 1){
    if(number == 0)
      break;
    if(number % 2 == 0 && number != 0){
      e_sum += number;
      e_count++;
    }else{
      o_sum += number;
      o_count++;
    }
    printf("Next number(0 to exit): ");
  }
  printf("The number of even is %d and odd is %d.\n", e_count, o_count);
  printf("The avg of even is %d and odd is %d.\n", e_sum / e_count, o_sum / o_count);
  printf("Bye!");
  return 0;
}