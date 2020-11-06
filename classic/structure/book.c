#include <stdio.h>
#include <string.h>
#define MAXTITL 41
#define MAXAUTL 31

char *s_gets(char *st, int n);

struct book { // 結構樣板(Template) -> 標籤變數名詞為 「book」 -> 可下放至分號前
  char title[MAXTITL];
  char author[MAXAUTL];
  float value;
}; // 結構的結尾需要"分號"以告知編譯器 -> 結尾前也可以加入變數名稱

int main(void)
{
  struct book library; // 宣告一個名為library的book結構變數

  printf("Please enter the book title.\n");
  s_gets(library.title, MAXTITL);
  printf("Now enther ther author.\n");
  s_gets(library.author, MAXAUTL);
  printf("Now enter the price.\n");
  scanf("%f", &library.value);

  printf("%s by %s: $%.2f\n", library.title, library.author, library.value);
  printf("%s: \"%s\" ($%.2f)\n", library.author, library.title, library.value);
  printf("Done.\n");

  return 0;
}

char *s_gets(char *st, int n)
{
  char *ret_val;
  char *find;

  ret_val = fgets(st, n, stdin);
  if(ret_val)
  {
    find = strchr(st, '\n'); // 尋找換行字元
    if(find)  // 如果不是NULL
      *find = '\0'; // 替換成停止字符
    else
      while(getchar() != '\n')
        continue; // 省略其餘行
  }
  return ret_val;
}