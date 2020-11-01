#include <stdio.h>
char *pr(char *str)
{
  char *pr;
  pc = str;
  while(*pc)
    putchar(*pc++);
  do{
    // *--pc 將指標遞減1後使用 <--> --*pc 將取得的值遞減
    putchar(*--pc);
  } while (pc - str);
  return (pc);
}