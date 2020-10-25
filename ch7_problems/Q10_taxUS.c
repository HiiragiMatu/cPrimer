#include <stdio.h>
#define RATE1 0.15
#define RATE2 0.28

int main(void){
  int menu;
  float salary;
  float tax;
  float netIncome;
  float threshold;
  printf("Choose your status: \n");
  printf("1)Single     2)Master of house\n");
  printf("3)Married Couple     4)Married Individual\n");
  printf("5)Exit\n");

  scanf("%d", &menu);
  switch(menu)
  {
    case 1:
      threshold = 17850;
      break;
    case 2:
      threshold = 23900;
      break;
    case 3:
      threshold = 29750;
      break;
    case 4:
      threshold = 14875;
      break;
    case 5:
      printf("Bye!");
      return 0;
    default:
      printf("Please enter number 1 ~ 4 or 5 to exit!\n");
  }
  
  printf("Enter your salary to count tax: ");
  while(scanf("%f", &salary) == 1){
    if(salary > threshold){
      tax = threshold * RATE1 + (salary - threshold) * RATE2;
      netIncome = salary - tax;
    } else {
      tax = salary * RATE1;
      netIncome = salary - tax;
    }
    printf("Your salary is %.2f with %2.f tax and the net Income is %.2f\n", salary, tax, netIncome);
    printf("Enter next number to know?\n");
  }
  printf("Bye!");
  return 0;
}
