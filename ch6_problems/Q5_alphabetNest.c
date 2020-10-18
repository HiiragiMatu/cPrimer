#include <stdio.h>

int printLetter(char ch);
void printPyramid(int rows);

int main(void){
  char ch;
  printf("Please enter a capital letter: ");
  while(scanf("%c", &ch) == 1){
    int n = printLetter(ch); // Assume A has only 1 line and B has 2 line, and so on...
    printPyramid(n);
    printf("Next");
  }
  return 0;
}

int printLetter(char ch){
  return ch - 'A' + 1;
}

void printPyramid(int rows){
  for (int row = 1; row <= rows; row++)
  {
    int ch;
    for (int space = row; space < rows; space++)
      printf(" ");
    for (ch = 0; ch < row; ch++)
      printf("%c", 'A' + ch);
    while(--ch) // The state of 'ch' now is the latest ch value. Ex: User enter C, then ch is 3.
      printf("%c", 'A' + ch - 1);
    printf("\n");
  }
}

/*
int main(){  
  int ch=65;    
  int i,j,k,m;      
  for(i=1;i<=5;i++)    
  {    
      for(j=5;j>=i;j--)    
          printf(" ");    
      for(k=1;k<=i;k++)    
          printf("%c",ch++);    
          ch--;    
      for(m=1;m<i;m++)    
          printf("%c",--ch);    
      printf("\n");    
      ch=65;    
  }
  return 0;
}
*/
