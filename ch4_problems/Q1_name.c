#include <stdio.h>

int main(void) {
  char name[20];
  char f_name[20];

  printf("Sir, what's your name?\n");
  scanf("%s %s", name, f_name);

  printf("Hi, God Damn %s %s", f_name, name);
  return 0;
}