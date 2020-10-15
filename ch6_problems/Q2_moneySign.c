#include <stdio.h>

int main(void){
  int n;
  int i, j;

  printf("How many $ signs? ");
  while(scanf("%d", &n) == 1){
    for (i = 0; i < n; i++){
      for (j = 0; j < i; j++){
        printf("$");
      }
      printf("\n");
    }
    printf("Try another number(q to quit): ");
  }
  
  printf("\nMagic is finished!\n");
  return 0;
}