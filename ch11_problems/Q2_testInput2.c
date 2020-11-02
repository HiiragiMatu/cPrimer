#include <stdio.h>
#define LEN 10
char *st(char *, int);

int main(void){
  char input[LEN];
  char *check;  // 函數為指向char型態的指標函數
  check = st(input, LEN - 1); //檢查回傳值為何

  if(check == NULL)
    puts("Input failed.");
  else
    puts(input);
  puts("Done.");
  return 0;
}

char *st(char * str, int n)
{
  int i;
  int ch;

  for (i = 0; i < n; i++)
  {
    ch = getchar();
    if(ch != EOF && ch != ' ' && ch != '\t' && ch != '\n')
      str[i] = ch;
    else
      break;
  }
  
  if(ch == EOF)
    return NULL;
  else 
  {
    str[i] = '\0';
    return str;
  }
}