#include <stdio.h>
void printLetter(char ch);
void print(int rows);

int main(void){
  printLetter('E');
  print(5);
}

void printLetter(char ch){
  printf(ch - 'A' + 1);
}

void print(int rows){
  for (int row = 1; row <= rows; row++)
  {
    int ch;
    for (int space = row; space < rows; space++)
      printf(" ");
    for (ch = 0; ch < row; ch++)
      printf("%c", 'A' + ch);
    while(--ch)
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
