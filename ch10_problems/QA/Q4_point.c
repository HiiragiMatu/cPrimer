#include <stdio.h>

int main(void){
  int *ptr;
  int torf[2][2] = {12, 14, 16};
  ptr = torf[0];

  int *ptr2;
  int torf2[2][2] = {{12}, {14, 16}};
  ptr2 = torf2[0];

  printf("%d %d\n", *ptr, *(ptr + 2));
  printf("%d %d\n", *ptr2, *(ptr2+2));
  printf("%d %d\n", torf2[0][0], torf2[0][1]);
  printf("%d %d\n", torf2[1][0], torf2[1][1]);
  return 0;
}