#include <stdio.h>

int main(void){
  int divisor;
  int dividend;

  printf("Below shows how module works.\n");
  printf("First input the divisor: ");
  scanf("%d", &divisor);
  while(divisor != 'q'){
    printf("Second input the dividend: ");
    scanf("%d", &dividend);
    int remainer = dividend % divisor;
    printf("%d %% %d is %d\n", dividend, divisor, remainer);
    printf("Continue to know more or enter 'q' to quit: ");
    scanf("%d", &divisor);
  }
  printf("Bye!");
  return 0;
}