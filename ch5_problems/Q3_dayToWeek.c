#include <stdio.h>
#define WEEK 7

int main(void){
  int days, weeks, left_days;

  printf("How many days left?(0 to exit)\n");
  scanf("%d", &days);
  while(days != 0){
    weeks = days / WEEK;
    left_days = days % WEEK;
    printf("We have %d days which is %d weeks and %d days left.\n", days, weeks, left_days);
    scanf("%d", &days);
  }

  return 0;
}