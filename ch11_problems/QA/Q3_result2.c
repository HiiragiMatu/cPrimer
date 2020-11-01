#include <stdio.h>
#include <string.h>

int main(void)
{
  char food[] = "Yummy";
  char *ptr;

  // strlen(food)直接讀取\0之前的長度
  ptr = food + strlen(food);
  while(--ptr >= food)
    puts(ptr);
  return 0;
}