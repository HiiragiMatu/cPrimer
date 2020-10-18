#include <stdio.h>
#include <ctype.h>

int main(void){
  char userInput;
  int c_white = 0, c_line = 0, c_other = 0;
  printf("Enter chars(# to exit): ");
  while((userInput = getchar()) != '#'){
    if(userInput == ' '){
      c_white++;
    }else if(userInput == '\n'){
      c_line++;
    }else{
      c_other++;
    }
  }
  printf("%d whitespace %d newline %d other chars", c_white, c_line, c_other);
  return 0;
}