#include <stdio.h>

int main(void){
  int i, limit;
  int times;
  float cvg1 = 0.0, cvg2 = 0.0;
  float plus = 1.0;
  float minus = 2.0;
  printf("Please enter a number to stop the calculation: ");
  while(scanf("%d", &limit) == 1){
    if(limit < 0)
      printf("You should enter larger than 0!\n");
    for (i = 0, times = 1, plus = 1.0; i < limit; i++, times++, plus++)
    {
      cvg1 = 1.00 + 1.00 / plus;
      printf("%d times = %.6f\n", times, cvg1);
    }

    printf("-----------\n");

    for (i = 0, times = 1, plus = 1.0, minus = 2.0; i < limit; i++, times++, plus++, minus *= 2)
    {
      cvg2 = 1.00 - 1.00 / plus + 1.00 / minus;
      printf("%d times = %.6f\n", times, cvg2);
    }
    printf("Next number(q to exit): ");
  }
  return 0;
}