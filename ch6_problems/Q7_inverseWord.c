#include <stdio.h>
#include <string.h>
#define SIZE 100

int main(void){
  char word[100];
  int i, o;
  printf("Please enter a word: ");
  while(scanf("%s", word) == 1){
    o = strlen(word);
    printf("%10s %10s\n", "Original", "Inversed");
    printf("%10s       ", word);
    for (i = o; i >= 0; i--)
    {
      printf("%c", word[i]);
    }
    printf("\n   That is Magic!\n");
    printf("Enter next word to find more(q to quit): ");
  }
  return 0;
}