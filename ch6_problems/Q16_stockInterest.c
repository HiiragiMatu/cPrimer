#include <stdio.h>
#define S_RATE 0.10
#define D_RATE 0.05

int main(void){
  float s_Sum = 100, d_Sum = 100;
  int year = 0;
  do{
    s_Sum = s_Sum + 100 * S_RATE;
    d_Sum = (1+D_RATE)*d_Sum ;
    year++;
    printf("Daphne %f, Deirdre %f\n", s_Sum, d_Sum);
  } while (s_Sum > d_Sum);
  printf("When %d years, Deirdre earns more than Daphne in Stock!\n", year);
  return 0;
}