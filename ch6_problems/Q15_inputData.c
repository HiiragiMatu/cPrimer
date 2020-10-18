#include <stdio.h>
#include <string.h>
#define SIZE 255


int main(void){
  int i;
  char input[SIZE];
  printf("Enter something: ");
  while(scanf("%s", input) == 1){
    for (i = strlen(input); i >= 0; i--){
      printf("%c", input[i]);
    }
    printf("\nNext thing(q to quit): ");
  }
  return 0;
}