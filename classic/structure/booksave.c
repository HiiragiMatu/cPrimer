#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10
char *s_gets(char *st, int n);

struct book {
  char title[MAXTITL];
  char author[MAXAUTL];
  float value;
};

int main(void){
  struct book library[MAXBKS];
  int index, filecount;
  int count = 0;
  int size = sizeof(struct book);
  FILE * pbooks;

  if((pbooks = fopen("book.dat", "a+b")) == NULL)
  {
    fputs("Can't open book.dat file.\n", stderr);
    exit(1);
  }

  rewind(pbooks);

  while(count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1)
  {
    if(count == 0)
      puts("Current contents of book.dat:");
    printf("%s by %s: $%.2f\n", library[count].title, library[count].author, library[count].value);
    count++;
  }

  filecount = count;
  if(count == MAXBKS)
  {
    fputs("The book.dat file is full.", stderr);
    exit(2);
  }

  puts("Please add new book titles.");
  puts("Press [Enter] at the start of a line to stop.");
  while(count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0')
  {
    puts("Now enter the author.");
    s_gets(library[count].author, MAXAUTL);
    puts("Now enter the value.");
    scanf("%f", &library[count++].value);
    while(getchar() != '\n')
      continue;
    if(count < MAXBKS)
      puts("Enter the next title.");
  }

  if(count > 0)
  {
    puts("Here is the list of your books:");
    for(index= 0; index < count; index++)
      printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index].value);
    fwrite(&library[filecount], size, count - filecount, pbooks);
  } else {
    puts("No books? Too bad.\n");
  }
  puts("Bye.");
  fclose(pbooks);

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