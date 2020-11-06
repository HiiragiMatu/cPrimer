#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SLEN 81

struct namect {
  char *fname; // 結構內的指標
  char *lname;
  int letters;
};

void getinfo(struct namect *);
void makeinfo(struct namect *);
void showinfo(const struct namect *);
void cleanup(struct namect *);
char *s_gets(char *st, int n);


int main(void){
  struct namect person;

  getinfo(&person);
  makeinfo(&person);
  showinfo(&person);
  cleanup(&person);
  return 0;
}

void getinfo(struct namect * pst)
{
  char temp[SLEN];
  printf("Please enter your first name.\n");
  s_gets(temp, SLEN);
  pst->fname = (char *)malloc(strlen(temp) + 1); // 配置記憶體
  strcpy(pst->fname, temp); // 複製輸入的字串到新配置的空間
  printf("Please enter your last name.\n");
  s_gets(temp, SLEN);
  pst->lname = (char *)malloc(strlen(temp) + 1); // 由此可知字串都不在結構中，但是字串的位址在結構裡。
  strcpy(pst->lname, temp); 
}

void makeinfo(struct namect *pst)
{
  pst->letters = strlen(pst->fname) + strlen(pst->lname);
}

void showinfo(const struct namect * pst)
{
  printf("%s %s, your name contains %d letters.\n", pst->fname, pst->lname, pst->letters);
}

void cleanup(struct namect * pst)
{
  free(pst->fname);
  free(pst->lname);
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
