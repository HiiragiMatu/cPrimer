#include <stdio.h>
int units = 0;
void critic(void);

int main(void)
{
  extern int units; // extern用於告知編譯器此變數位於函數外，包括檔案外。

  printf("How many pounds to a firkin of butter?\n");
  scanf("%d", &units);

  while(units != 56)
    critic();
  printf("You must have looked it up!\n");
  return 0;
}

void critic(void){
  printf("No luck, my friend. Try again.\n");
  scanf("%d", &units);
}