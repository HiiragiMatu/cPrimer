#include <stdio.h>
#include <math.h>
double harmonic(double, double);

int main(void){
  double num1, num2;
  printf("To find the harmonic number, enter two numbers: ");
  while((scanf("%lf %lf", &num1, &num2)) == 2)
  {
    printf("The most harmonic number is %.4lf\n", harmonic(num1, num2));
    printf("Explore more harnony(q to exit): ");
  }
  printf("Peace...");
  return 0;
}

double harmonic(double n1, double n2)
{
  double avg;
  n1 = 1 / n1;
  n2 = 1 / n2;
  avg = (n1 + n2) / 2;
  return 1 / avg;
}