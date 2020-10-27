#include <stdio.h>

int main(void){
  char ch;
  printf("Whatever: ");
  while(scanf("%c ", &ch) == 1)
  {
    // 其餘非輸出字元依照相同方式撰寫
    if(ch == '\n')
        printf("The '\\n' ascii value is %d\n", ch);
    else
        printf("The '%c' ascii value is %d\n", ch, ch);
    
  }

  return 0;
}