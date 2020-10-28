#include <stdio.h>
int main(void)
{
  int zippo[4][2] = {{2, 4}, {3, 5}, {4, 6}, {7, 8}};

  printf("    zippo = %p,     zippo + 1 = %p\n", zippo, zippo + 1);
  printf("zippo[0] = %p, zippo[0] + 1 = %p\n", zippo[0], zippo[0] + 1);
  printf("   *zippo = %p,    *zippo + 1 = %p\n", *zippo, *zippo + 1);
  printf("---------\n");
  printf("zippo[0][0] = %d\n", zippo[0][0]);
  printf("*zippo[0] = %d\n", *zippo[0]);
  printf("   **zippo = %d\n", **zippo);
  printf("    zippo[2][1] = %d\n", zippo[2][1]);
  printf("*(*(zippo+2) + 1) = %d\n", *(*(zippo + 2) + 1));

  return 0;
}