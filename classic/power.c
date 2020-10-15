/* Power Trip P6-42*/
#include <stdio.h>

double power(double n, int p);

int main(void){
  double x, xpow;
  int exp;

  printf("Power Trip! Enter a number and the positive integer power: ");
  while(scanf("%lf%d", &x, &exp) == 2){
    xpow = power(x, exp);
    printf("%3.g to the power %d is %.5g\n", x, exp, xpow);
    printf("Next?(q to quit)\n");
  }
  printf("Bey!\n");

  return 0;
}

double power(double n, int p){
  int i;
  double pow = 1;
  for (i = 1; i <= p; i++)
    pow *= n;

  return pow;
}