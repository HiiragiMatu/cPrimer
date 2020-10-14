#include <stdio.h>
#define KELVIN 273.16
const double F_TO_C = 0.5555;

double Temperatures(double degree);

int main(void){
  double degree;

  printf("Enter a Fahrenheit Degree: ");
  scanf("%lf", &degree);
  while(degree != 'q'){
    printf("Fahrenheit     Celcius     Kelvin\n");
    Temperatures(degree);
    printf("Enter another Fahrenheit Degree(q to exit): ");
    scanf("%lf", &degree);
  }

  printf("Bye!");
  return 0;
}

double Temperatures(double degree){
  double celsiusDegree = (degree - 32) * F_TO_C;
  double kelvinDegree = celsiusDegree + KELVIN;
  return printf("%10.2lf%10.2lf%10.2lf\n", degree, celsiusDegree, kelvinDegree);
}

