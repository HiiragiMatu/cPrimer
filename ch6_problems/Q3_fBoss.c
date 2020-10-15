#include <stdio.h>

int main(void){
  char fBoss[6];
  int i, j, k;
  for (i = 0, j ='A'; i < 6, j < 'A' + 6 ; i++, j++){
    fBoss[i] = j;
    printf("%c", fBoss[i]);
  }

  printf("\n");

  for (i = 6; i >= 0;i--){
    for (j = 6; j >= i; j--){
      printf("%c", fBoss[j]);
    }
    printf("\n");
  }

  printf("\n");
  return 0;
}