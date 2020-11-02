#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define ANS "GRANT"
#define SIZE 40
char *s_gets(char *st, int n);
void ToUpper(char *str);

int main(void){

  char try[SIZE];

  puts("Who is buried in Grant's tomb?");
  s_gets(try, SIZE);
  ToUpper(try);
  while(strcmp(try, ANS) != 0)
  {
    puts("No, that's wrong. Try agian.");
    s_gets(try, SIZE);
    ToUpper(try);
  }
  puts("That's right!");
  return 0;
}

void ToUpper(char *str)
{
  while(*str != '\0') 
  {
    *str = toupper(*str); //將每一個字元轉為大寫
    str++;
  }
}

char *s_gets(char *st, int n)
{
  char *ret_val;
  int i = 0;
  //第1個參數指向字串位址 第2個參數計算讀取最大字元量(包含停止符號(空字符)) 第3個參數讀取字符的指針
  ret_val = fgets(st, n, stdin);
  if(ret_val)
  {
    // st[i] 等價於 *st -> 只是用指標得考量遞增語法的不同
    while(st[i] != '\n' && st[i] != '\0') // 只要不等於換行符號和停止符號就持續往後找字元
      i++; 
    if(st[i] == '\n') //如果遇到換行符號設定為停止符號 -> 改變為字串
      st[i] = '\0';
    else
      while(getchar() != '\n') // 最後必須取得'\0'作為停止位元，告知編譯器此輸入為字串
        continue;
  }
  return ret_val;
}
/*
char *fgets(char *st, int n, FILE* fp)
{
  char * p = s // p = &s[0];
  int c; 
  int i = 0;
  for( ;; )
  {
    c = fgetc(fp);
    if(c == -1)
      break;
    s[i] = c;
    ++i;
    if( i >= (n-1)) break;
    if( c == '\n') break;
  }
  if(i == 0) return 0;
  s[i] = 0;
  return s;
}
*/