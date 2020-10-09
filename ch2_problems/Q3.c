#include <stdio.h>

int main(void) {
  int age;
  int age_to_days;

  printf("What is your age?\n");
  scanf("%d", &age);
  age_to_days = age * 365;
  printf("Your age is %d and equal to %d days!\n", age, age_to_days);
  return 0;
}

