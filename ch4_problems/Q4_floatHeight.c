#include <stdio.h>

int main(void){
  float height;
  char name[20];

  printf("Name and Height!\n");
  scanf("%s", name);
  scanf("%f", &height);
  printf("%s, you are %.2f feet short, LOL!", name, height);

  return 0;
}