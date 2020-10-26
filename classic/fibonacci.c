/* P9-27 Demonstration of Double Recursion */
#include <stdio.h>
unsigned long Fibonacci(unsigned fib);

int main(void){
  long fib;
  printf("Enter a number: ");
  while(scanf("%u", &fib) ==1){
    for(int i=2; i < fib; i++) 
    {
      printf("%lu\n", Fibonacci(i));
    }
    printf("\nNext number: ");
  }

  return 0;
}

unsigned long Fibonacci(unsigned fib){
  if(fib > 2)
    return Fibonacci(fib - 1) + Fibonacci(fib - 2);
  else
    return 1;
}