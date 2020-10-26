#include <stdio.h>



int main(void){
  char ch;
  int count = 0;
  printf("Whatever you want: ");
  
  while((ch = getchar()) != '#')
  {
    getchar();
    printf("%c\n", ch);
    count ++;
    printf("Next: ");
  }
  printf("Total: %d\n", count);
  printf("Bye!");
  return 0;
}