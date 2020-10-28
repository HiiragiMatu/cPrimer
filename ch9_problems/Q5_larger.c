#include <stdio.h>
void larger_of(double *, double *);

int main(void){
  double num1, num2;
  printf("Let's think who is bigger if I say: ");
  while((scanf("%lf %lf", &num1, &num2)) == 2)
  {
    larger_of(&num1, &num2);
    printf("%.2lf %.2lf, That is in disguise!\n", num1, num2);
    printf("Who did that?\n");
    printf("I want to see one more time!\n");
  }
  printf("Have fun!\n");
  return 0;
}

void larger_of(double *n1, double *n2)
{
  // 更簡潔的方式 *p1 = *p2 = *p1 > *p2 ? *p1 : *p2;
  if(*n1 > *n2){
    *n2 = *n1;
  } else {
    *n1 = *n2;
  }
}