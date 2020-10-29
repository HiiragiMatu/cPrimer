#include <stdio.h>
double power(double, int);

int main(void){
  double n, npow;
  int exp;

  printf("Enter a number(q to quit): ");
  while((scanf("%lf%d", &n, &exp) == 2))
  {
    npow = power(n, exp);
    if(npow != -1){
      printf("%.3lf to the power %d is %.5lf\n", n, exp, npow);  
    }
    printf("Next pair: \n");
  }
  printf("Hope you enjoy.\n");
  return 0;
}

double power(double p, int t)
{
  int i;
  double r = 1.0;

  if(t == 0){
    if(p == 0){
      r = -1;
      printf("0 to the 0 times is undefined!\n");
    }
    r = 1.0;
  } else if(p == 0){
      r = 0.0;
  } else if(t > 0){
      for (i = 0; i < t; i++){
        r *= p;
      }
  } else {
      for (i = 0; i > t; i--){
        r /= p;
      }
  }
  return r;
}
