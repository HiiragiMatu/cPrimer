#include <stdio.h>
#include <ctype.h>
#define SIZE 50
char *st(char *str);

int main(void){
  char input[SIZE];
  
  while(st(input) != NULL)
    puts(input);
  puts("Done.");
  return 0;
}

char *st(char *str)
{
  int ch;
  char *orig = str;
  
  while( (ch = getchar()) != EOF && isspace(ch))
    continue;
  if(ch == EOF)
    return NULL;
  else
    *str++ = ch;
  while( (ch = getchar()) != EOF && !isspace(ch))
    *str++ = ch;
  *str = '\0';
  if(ch == EOF)
    return NULL;
  else
  {
    while(ch != '\n')
      ch = getchar();
    return orig;
  }
}

