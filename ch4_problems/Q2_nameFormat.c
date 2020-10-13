#include <stdio.h>

int main(void) {
  char name[20];

  printf("Ma'dam, what's your name?\n");
  scanf("%s", name);

  printf("\"Damn %s \"\n", name);
  printf("\"Damn %20s\"\n", name);
  printf("\"Damn %-20s\"\n", name);
  printf("\"Damn %+3s\"", name);

  return 0;
}