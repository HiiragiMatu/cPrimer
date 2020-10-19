#include <stdio.h>


int main(void){
  char ch;
  int count = 0;
  printf("Enter char: ");
  while((ch = getchar()) != '#'){
    getchar();
    if(ch == '.'){
      putchar('!');
      printf("\nNext one(# to exit): ");
      count++;
    }else if(ch == '!'){
      putchar('!');
      putchar('!');
      printf("\nNext one(# to exit): ");
      count++;
    }else{
      printf("Only . and ! will be replaced!\n");
    }
  }
  printf("In total %d replacement!\n", count);
  return 0;
}