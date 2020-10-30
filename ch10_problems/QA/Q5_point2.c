#include <stdio.h>

int main(void){
  // *(ptr + i) == ptr[i] -> **(ptr + 2) == *ptr[2] 
  // ptr 指向第一列 *ptr 指向第一列第一個元素
  int (*ptr)[2];
  int torf[2][2] = {12, 14, 16};
  ptr = torf;
  
  int (*ptr_2)[2];
  int torf_2[2][2] = { {12}, {14, 16}};
  ptr_2 = torf_2;
  // 或者可以嘗試理解為第一個*指向位址 第二個*指向第一列
  // 因此 **ptr 指向位址的第一個元素 **(ptr+1) 
  //      **ptr_2 指向位址的第一個列 **(ptr_2 +1) 先+1表示找第二列，接著尋找位址再指向列(第二列)
  printf("%d %d\n", **ptr, **(ptr + 1));
  printf("%d %d\n", **ptr_2, **(ptr_2 + 1));
  // **(ptr_2 + 1) == *ptr_2[2]
  printf("%p: %p %p\n", ptr, ptr+1, ptr+2);
  printf("%p: %p %p\n", *ptr, *ptr+1, *ptr+2);
  printf("%p: %p %p\n", **ptr, **ptr+1, **ptr+2);

  return 0;
}