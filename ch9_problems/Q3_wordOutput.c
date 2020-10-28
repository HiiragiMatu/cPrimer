#include <stdio.h>
void chLineRow(char, int, int);

int main(void){
  char ch;
  int col, row;

  printf("Enter a character(# to quit): ");
  // 如果輸入的是字元陣列應該如何處理? 指標?
  while(( ch = getchar()) != '#')
  {
    if(ch == '\n')
      continue;
    printf("Enter cols and rows: ");
    if(scanf("%d %d", &col, &row) != 2)
      break;
    chLineRow(ch, col, row);
    printf("\nEnter the next char(# to quit): ");
  }
  return 0;
}

void chLineRow(char ch, int times, int rows)
{
  int col, row;
  for (row = 0; row < rows; row++)
  {
    for (col = 0; col < times; col++)
    {
      putchar(ch);
    }
    putchar('\n');
  }
}