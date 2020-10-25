/* P9-20 */
#include <stdio.h>

void up_and_down(int);

int main(void){

  up_and_down(1);
  return 0;
}

void up_and_down(int n)
{
  printf("Level %d: location %p\n", n, &n);
  if(n < 50)
    up_and_down(n + 1);
  // When n reaches 50, the control is returned to the previous one.
  printf("LEVEL %d: location %p\n", n, &n);
}