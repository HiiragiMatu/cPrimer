#include <stdio.h>
char get_first(void);
int main(void){
  char ch;
  printf("Return: ");
  ch = get_first();
  printf("Back: %c", ch);
  return 0;
}

char get_first(void){
  char ch;

  ch = getchar();
  getchar();

  return ch;
}