#include <stdio.h>
#define SIZE 26

int main(void){
  char alphabet[SIZE];
  char Alphabet[SIZE];
  int i, j;
  for (i = 0, j = 'a'; i < SIZE, j < 'a' + SIZE; i++, j++){
    alphabet[i] = j;
  }
  printf("%s", alphabet);

  printf("\n");

  for (i = 0, j = 'A'; i < SIZE, j < 'A' + SIZE; i++, j++){
    Alphabet[i] = j;
  }

  printf("%s", Alphabet);
  return 0;
}