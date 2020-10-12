#include <stdio.h>

int main(void){
  char digit_versus_ascii;
  
  printf("What ASCII digit you wanna know?\n");
  printf("Enter a character: ");
  scanf("%c", &digit_versus_ascii);
  printf("The code is %d! That's it!\n", digit_versus_ascii, digit_versus_ascii);

  printf("\n");

  printf("What ASCII code you wanna know?\n");
  printf("Enter a digit: ");

  scanf("%d", &digit_versus_ascii);
  printf("Code %d is %c", digit_versus_ascii, digit_versus_ascii);

  return 0;
}