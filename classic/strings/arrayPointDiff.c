#include <stdio.h>

int main(void){
  char heart[] = "I love Lucy!";
  const char *head = "I love Lucy!";
  int i;
  // 陣列語法
  for (i = 0; i < 11; i++)
    putchar(heart[i]);
  putchar('\n');
  for (i = 0; i < 9; i++)
    putchar(head[i]);
  putchar('\n');

  // 指標語法
  for (i = 0; i < 11; i++)
    putchar(*(heart + i));
  putchar('\n');
  for (i = 0; i < 10; i++)
    putchar(*(head + i));
  putchar('\n');

  while(*(head) != '\0')
    putchar(*(head++));
  return 0;
}