#include <stdio.h>

char *str(char * st)
{
  while(*st != ' ' && *st != '\0')
    st++;
  if(*st == '\0')
    return NULL;
  else
    return st;
}

// Or
char *str(const char * st)
{
  while(*st != ' ' && *st != '\0')
    st++;
  if(*st == '\0')
    return NULL;
  else
    return (char*)st;
}