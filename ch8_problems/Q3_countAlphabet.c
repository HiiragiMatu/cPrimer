#include <stdio.h>
#include <ctype.h>

int main(void){
  char ch;
  int u_count = 0;
  int l_count = 0;
  printf("Enter english alphabet: ");
  
  while((ch = getchar()) != '#'){
    getchar();
    if(isupper(ch))
      u_count++;
    else if(islower(ch))
      l_count++;
    printf("Next one: ");
  }
  printf("%d upper letters and %d lower letters.\n", u_count, l_count);
  printf("Bye!\n");
  return 0;
}