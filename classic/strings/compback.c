/* P11-33 */
#include <stdio.h>
#include <string.h>

int main(void)
{
  printf("strcomp(\"A\", \"A\") is ");
  printf("%d\n", strcmp("A", "A"));
  
  printf("strcomp(\"A\", \"B\") is ");
  printf("%d\n", strcmp("A", "B"));
  
  printf("strcomp(\"B\", \"A\") is ");
  printf("%d\n", strcmp("B", "A"));

  printf("strcomp(\"C\", \"A\") is ");
  printf("%d\n", strcmp("C", "A"));

  printf("strcomp(\"Z\", \"a\") is ");
  printf("%d\n", strcmp("Z", "a"));

  printf("strcomp(\"apples\", \"apple\") is ");
  printf("%d\n", strcmp("apples", "apple"));
}