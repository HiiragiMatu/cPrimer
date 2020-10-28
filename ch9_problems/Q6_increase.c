#include <stdio.h>
void increase(double *, double *, double *);
void swap(double *, double *);

int main(void){
  double num1, num2, num3;
  printf("Like stairs: ");
  
  while((scanf("%lf %lf %lf", &num1, &num2, &num3)) == 3)
  {
    increase(&num1, &num2, &num3);
    printf("---Magic Time---\n");
    printf("%lf %f %lf", num1, num2, num3);
  }
  
  return 0;
}

void increase(double * n1, double * n2, double * n3)
{
  int temp;
  if(*n1 > *n3)
    swap(n1, n3);
  if(*n1 > *n2)
    swap(n1, n2);
  if(*n2 > *n3)
    swap(n2, n3);
}

void swap(double *n1, double *n2)
{
  int temp;
  if(*n1 > *n2){
    temp = *n2;
    *n2 = *n1;
    *n1 = temp;
  }
}