#include <stdio.h>
#include <string.h>

int main(void)
{
  char gold[40] = "art of it all ";
  char samuel[40] = "I read p";
  const char *quote = "the way through.";

  strcat(gold, quote);
  strcat(samuel, gold);

  // 很明顯samuel(第一個引數)會被改變，所以一定是傳遞"位址"
  puts(samuel);
  return 0;
}