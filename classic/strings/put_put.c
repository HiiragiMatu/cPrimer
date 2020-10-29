/* put_put sounds like pupu */
#include <stdio.h>
void put1(const char *);
int put2(const char *);

int main(void){
  put1("Put!Put!\n");
  put1("Pu!Pu!\n");

  printf("I count %d character.\n", put2("I dont want to say something useless.\n"));

  return 0;
}

void put1(const char * string)
{
  while(*string)
    putchar(*string++);
}

int put2(const char * string)
{
  int count = 0;
  while(*string)
  {
    putchar(*string++);
    count++;
  }
  return count;
}