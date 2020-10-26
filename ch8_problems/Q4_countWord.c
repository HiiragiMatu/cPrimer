#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100
int main(void){
  int count = 0;
  int allWord = 0;
  char ch[SIZE];
  printf("Any: ");
  int jump = 0;
  // scanf("%s", ch)如何跳出迴圈.....
  while (jump < 5)
  {
    scanf("%s", ch);
    printf("%d letters in %s\n", strlen(ch), ch);
    allWord += strlen(ch);
    count++;
    printf("Next: ");
    jump++;
    }
  printf("%d letters in avg.\n", allWord / count);
  printf("Bye!");
  return 0;
}