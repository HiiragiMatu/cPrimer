/* Find Prime Ch7-17*/
#include <stdio.h>
#include <stdbool.h>

int main(void){
  unsigned long num; // number to be checked
  unsigned long div; // potnetial divisors
  bool isPrime; // isPrimer is called 'flag'

  printf("Please enter an integer for analysis(q to quit): ");
  while(scanf("%lu", &num) == 1){
    for (div = 2, isPrime = true; (div * div) <= num; div++){
      if(num % div == 0)
      {
        if((div * div != num))
          printf("%lu is divisible by %lu and %lu.\n", num, div, num / div);
        else
          printf("%lu is divisible by %lu.\n", num, div);

        isPrime = false; // number is not a primer
      }
    }
    if(isPrime)
      printf("%lu is prime.\n", num);
    printf("Enter the next number to checked(q to exit): ");
  }
  printf("Bye!");
  return 0;
}