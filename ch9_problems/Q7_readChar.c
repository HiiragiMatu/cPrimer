#include <stdio.h>
#include <ctype.h>
char isChar(char);

int main(void){
  char ch;

  printf("Give me a char and I will tell you the truth.\n");
  printf("Your answer(# to quit): ");
  while((scanf("%c", &ch) == 1) && ch != '#')
  {
    getchar();
    if(isChar(ch) != -1){
      printf("%c is an alphabet, and is the %d in Alphabet Table.\n", isChar(ch), isChar(ch) - 64);
    }
     printf("Next Client...\n");  
  }
  printf("No more...");
  return 0;
}

char isChar(char ch)
{
  ch = toupper(ch);
  if(isalpha(ch)){
    return ch;
  } else {
    return -1;
  }
}