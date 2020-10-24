#include <stdio.h>

int main()
{
  int findPrime;
  int isPrime;
  int i, n;
  printf("Enter a number to find its prime: ");
  while(scanf("%d", &findPrime) == 1)
  {
    for (n = 2; (n * n) < findPrime; n++)
    {
      isPrime = 1;
      for (i = 2; (i*i) < n; i++)
      {
        if(n % i == 0){
          isPrime = 0;
          break;
        }
      }
      if(isPrime)
      {
        printf("%d is prime.\n", n);
      }
    }
    printf("Enter next number: ");
  }
  printf("Bye!");
  return 0;
}