#include <stdio.h>
#define RATE_1 0.15
#define RATE_2 0.2
#define RATE_3 0.25

int main(void){
  float payRate;
  int menu;
  float work_hours;
  float salary;
  float tax;
  float netIncome;
  printf("*************************\n");
  printf("Enter the number corresponding to the desired pay rate or action: \n");
  printf("1) $8.75/hr          2) $9.33/hr\n");
  printf("3) $10.00/hr         4) $11.20/hr\n");
  printf("5) quit\n");
  scanf("%d", &menu);
  switch(menu)
  {
    case 1:
      payRate = 8.75;
      break;
    case 2:
      payRate = 9.33;
      break;
    case 3:
      payRate = 10.00;
      break;
    case 4:
      payRate = 11.20;
      break;
    case 5:
      return 0;
    default:
      printf("You should enter 1 ~ 4 or 5 to quit!\n");
  }

  printf("Enter your work hours: ");
  while(scanf("%f", &work_hours) == 1){
    if(work_hours <= 40){
      salary = work_hours * payRate;
      tax = salary * RATE_1;
      netIncome = salary - tax;
    } else {
      salary = work_hours * payRate + (work_hours - 40) * (payRate / 2);
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