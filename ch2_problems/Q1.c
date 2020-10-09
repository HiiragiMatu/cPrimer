#include <stdio.h>

int main(void) {
  char familiy_name[] = "Chen";
  char name[] = "Matsu";

  printf("Hello, my name is %s %s.\n", name, familiy_name);
  printf("Hello, my name is %s.\n", name);
  printf("Hello, my name is %s.\n", familiy_name);
  printf("Hello, my name is %s ", name);
  printf("%s.\n", familiy_name);
  return 0;
}