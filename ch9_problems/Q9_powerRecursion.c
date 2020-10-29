#include <stdio.h>
double paramCheck(double, int);
double power(double, int);

int main(void){
  int times;
  double n, npow;
  printf("Enter a pair of number to count its power(q to quit): ");
  while(scanf("%lf%d", &n, &times) == 2){
    npow = paramCheck(n, times);
    if(npow != -1){
      printf("The %.2lf of %d times is %.4lf\n", n, times, npow);
    }
    printf("Next pair: ");
  }
  printf("Good Day!\n");
  return 0;
}

double paramCheck(double number, int times){
  double pow = 1.0;
  if(times == 0){
    if(number == 0){
      printf("The 0 power 0 is undefined, change it to other number.\n");
      pow = -1;
    }
    pow = 1;
  } else if(number == 0){
    pow = 0.0;
  } else if(times > 0){
    pow = power(number, times);
  } else {
    pow = power(number, times);
  }
  return pow;
}

double power(double number, int t){
  double pow = 1.0;
  if(t > 0){
    pow = number * power(number, t - 1);
  } else if(t < 0){
    pow = 1 / (power(number, -t));
    
  }
  return pow;
}
