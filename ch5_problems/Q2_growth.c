#include <stdio.h>

int main(void){
  int growth;
  int growthLimit;
  printf("Nums are getting stronger!\n");
  scanf("%d", &growth);
  growthLimit = growth + 10;
  while(growth < growthLimit+1){
    printf("%d\n", growth);
    growth++;
  }

  return 0;
}