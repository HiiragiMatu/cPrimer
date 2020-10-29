#include <stdio.h>
void to_base(unsigned int, int base);

int main(void){
  int num, b;
  int count;
  printf("Give me a number(q to quit): ");
  while((scanf("%d", &num)) == 1){
    printf("Enter number base: ");
    while((count = scanf("%d", &b)) == 1 && (b < 2) || (b > 10))
    {
      printf("Base should in the range 2 - 10.\n");
    }
    if(count != 1)
      break;
    printf("Base %d equivalent: ", b);
    to_base(num, b);
    printf("\nEnter next:　");
  }
  printf("Wonderful Digits!\n");
  return 0;
}

void to_base(unsigned int n, int base)
{
  int result;
  result = n % base;
  if(n >= base)
    to_base(n / base, base);
  putchar('0' + result);
}