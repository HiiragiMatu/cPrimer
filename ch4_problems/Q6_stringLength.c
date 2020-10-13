#include <stdio.h>
#include <string.h>

int main(void){
  char name[20];
  char f_name[20];

  printf("Give me your whole name.\n");
  scanf("%s%s", name, f_name);

  printf("%10s %10s\n", name, f_name);
  printf("%10d %10d\n", strlen(name), strlen(f_name));

  printf("%10s %10s\n", name, f_name);
  printf("%-10d %-10d\n", strlen(name), strlen(f_name));

  return 0;
}