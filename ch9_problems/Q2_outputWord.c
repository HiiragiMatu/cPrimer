#include <stdio.h>
#include <string.h>
void chline(char[], int, int);

int main(void){

  chline("Apple", 1, 4);
  return 0;
}

void chline(char ch[], int i, int j)
{
  for (; i < j; i++){
    printf("%c", ch[i]);
  }
}