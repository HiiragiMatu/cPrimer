#include <stdio.h>

int main(void)
{
  int low = 1, high = 100;
  int guess = (low + high) / 2;
  char ans;
  printf("Pick an number from 1 to 100. I will try to guess.\n");
  printf("Respond with a y or n or h or l.\n");

  printf("Is your number %d?\n", guess);
  while((ans = getchar()) != 'y' || guess <= 100)
  {
    if(ans == '\n')
      continue;
    if(ans != 'h' && ans != 'l')
    {
      printf("You should let me know it is higher or lower so that I know how to guess.\n");
      continue;
    }
    if(ans == 'h')
      high = guess - 1;
    else if (ans == 'l')
      low = guess + 1;
    guess = (low + high) / 2;
    printf("Well...is it %d?\n", guess);
  }
  printf("Aha, got you!\n");
  return 0;
}