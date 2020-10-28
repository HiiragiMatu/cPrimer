#include <stdio.h>
double min(double, double);

int main(void){
  double n1, n2;
  
  printf("Enter two numbers: ");
  while( (scanf("%lf", &n1) == 1 && (scanf("%lf", &n2)) == 1))
  {
    printf("%.2lf is small\n", min(n1, n2));
    printf("Next two number: ");
  }
  printf("See you!\n");
  return 0;
}

double min(double n1, double n2)
{
  if(n1 > n2){
    return n2;
  }else {
    return n1;
  }
}