#include <stdio.h>


int main(void){
  char ch;
  int count = 0;
  printf("Enter char: ");
  while((ch = getchar()) != '#')
  {
    switch(ch)
    {
      case '.':
        putchar('!');
        printf("\n");
        count++;
        break;
      case '!':
        putchar('!');
        putchar('!');
        printf("\n");
        count++;
        break;
      default:
        getchar();
        printf("Only . and ! will be replaced!\n");
    }
  }
  printf("%d replacement in total", count);
  return 0;
}