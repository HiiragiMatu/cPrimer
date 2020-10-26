#include <stdio.h>

int main(void){
  char ch;
  printf("Whatever: ");
  while(scanf("%c ", &ch) == 1)
  {
    
    printf("The char is %c and %d in ASCII.\n", ch, ch);
  }

  return 0;
}