#include <stdio.h>

int main(void){
  int grid[30][100];

  printf("%p\n", grid[22][56]); // -> &grid[22][56]
  printf("%p\n", grid[22][0]);  // -> &grid[22][0], &grid[22]
  printf("%p\n", grid[0][0]); // -> &gird[0][0], &grid[0], (int *) grid

  return 0;
}