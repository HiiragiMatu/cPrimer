/* P9-22 */
#include <stdio.h>

long fact(int);
long rfact(int);

int main(void){
  int num;
  printf("This program calculates factorials.\n");
  printf("Enter a value(q to quit): \n");
  while(scanf("%d", &num) == 1){
    if(num < 0)
      printf("Enter negative number!\n");
    else{
      printf("Loop: %d factorial = %ld\n", num, fact(num));
      printf("Recursion: %d factorial = %ld\n", num, rfact(num));
    }
    printf("Enter a value(q to quit): \n");
  }
  printf("Bye!\n");
  return 0;
}

long fact(int n)
{
  long ans;
  for (ans = 1; n > 1; n--)
    ans *= n;
  return ans;
}

long rfact(int n)
{
  long ans;
  if(n > 0)
    ans = n * rfact(n - 1);
  else
    ans = 1;

  return ans;
}