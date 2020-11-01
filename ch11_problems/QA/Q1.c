#include <stdio.h>
int main(void)
{
  char name[] = {'F', 'U', 'K', 'K'};
  char name2[] = {'F', 'U', 'K', 'K', '\0'};
  printf("%c", name[0]);
  printf("\n");
  printf("%c", name2[3]);
  printf("\n");
  printf("%s", name2);
  return 0;
}