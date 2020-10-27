#include <stdio.h>
#define RATE_1 0.15
#define RATE_2 0.2
#define RATE_3 0.25

int main(void){
  float payRate;
  char menu;
  float work_hours;
  float salary;
  float tax;
  float netIncome;
  printf("*************************\n");
  printf("Enter the number corresponding to the desired pay rate or action: \n");
  printf("a) $8.75/hr          b) $9.33/hr\n");
  printf("c) $10.00/hr         d) $11.20/hr\n");
  printf("q) quit\n");
  // menu可獨立寫成一個funcion
  /*
  *  void menu(void)
  * {
  *     ...
  *     ...
  * }
  * 
  */
  scanf("%c", &menu);
  switch(menu)
  {
    case 'a':
      payRate = 8.75;
      break;
    case 'b':
      payRate = 9.33;
      break;
    case 'c':
      payRate = 10.00;
      break;
    case 'd':
      payRate = 11.20;
      break;
    case 'q':
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