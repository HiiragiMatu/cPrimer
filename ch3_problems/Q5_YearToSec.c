#include <stdio.h>

int main(void){
  int years;
  unsigned int years_to_seconds;

  printf("What's your age, sir?\n");
  scanf("%d", &years);

  years_to_seconds = years * 3.156e7;
  
  printf("You have passed %u seconds since your birth! Incredible!", years_to_seconds);
  return 0;
}