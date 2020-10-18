#include <stdio.h>
#define RATE 0.08

int main(void){
  int moneyInBank = 1000000;
  int years = 0;
  do{
    moneyInBank = (1 + RATE) * moneyInBank - 100000;
    years++;
    printf("%d\n", moneyInBank);
  } while (moneyInBank > 0);
  printf("In %d years, Chuckie Lucky will be a poor guy, sadly.\n", years);
  return 0;
}