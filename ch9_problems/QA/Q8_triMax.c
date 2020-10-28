#include <stdio.h>
int max(int, int, int);
int main(void){
  printf("%d", max(5, 7, 4));

  return 0;
}

int max(int n1, int n2, int n3)
{
  int temp;
  if(n1 > n2){
    temp = n1;
  } else {
    temp = n2;
  }

  if(temp > n3){
    
  } else {
    temp = n3;
  }
  return temp;
}