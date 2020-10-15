/* Difference about the two nested loop P6-36*/
#include <stdio.h>
#define ROWS 10
#define CHARS 10

int main(void) {
  int row;
  char ch;

  const int CROWS = 10;
  const int CCHARS = 10;

  for (row = 0; row < ROWS; row++){
    for (ch = 'A'; ch < ('A' + CHARS); ch++){
      printf("%c", ch);
    }
    printf("\n");
  }

  printf("\n");

  for (row = 0; row < CROWS; row++){
    for (ch = ('A' + row); ch < ('A' + CCHARS); ch++){
      printf("%c", ch);
    }
    printf("\n");
  }

  return 0;
}