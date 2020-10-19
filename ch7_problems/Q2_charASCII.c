#include <stdio.h>
#include <ctype.h>


int main(void){
  char userInput;
  int flag = 0;
  int i;
  printf("Enter char: ");
  while((userInput = getchar()) != '#'){
    getchar();
    flag++;
    if(flag == 8){
      printf("\n");
      flag = 0;
    }
    printf("The %c is %d in ASCII.\n", userInput, userInput);
    printf("Next char: ");
  }
  return 0;
}