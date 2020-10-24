#include <stdio.h>
#define BASIC 10.00
#define SALARY_DOUBLE 5
#define RATE_1 0.15
#define RATE_2 0.2
#define RATE_3 0.25

int main(void){
  float work_hours;
  float salary;
  float tax;
  float netIncome;
  printf("Enter your work hours: ");
  while(scanf("%f", &work_hours) == 1){
    if(work_hours <= 40){
      salary = work_hours * BASIC;
      tax = salary * RATE_1;
      netIncome = salary - tax;
    } else {
      salary = work_hours * BASIC + (work_hours - 40) * SALARY_DOUBLE;
      if(salary < 450){
        tax = 300 * RATE_1 + (salary - 300) * RATE_2;
        netIncome = salary - tax;
      } else {
        tax = 300 * RATE_1 + 150 * RATE_2 +(salary - 450)* RATE_3;
        netIncome = salary - tax;
      }
    }
    printf("Your work hour is %.2f.\n", work_hours);
    printf("Your salary is %.2f with %.2f tax and Net Income %.2f\n", salary, tax, netIncome);
    if(netIncome < 500){
      printf("You should work harder!\n");
    } else {
      printf("Watch your health!\n");
    }
  }
  return 0;
}