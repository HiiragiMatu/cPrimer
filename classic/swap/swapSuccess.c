#include <stdio.h>
void interchange(int *u, int *v);

/*
* int * ptr; -> 宣告指標
* ptr = &number -> ptr指向number的記憶體位址
* value = *ptr -> 解碼ptr的位址'*'，存取位址所表示的內容(資料物件)
*/

int main(void){
  int x = 5, y = 10;
  printf("Originally x = %d and y = %d.\n", x, y);
  // 傳遞x, y的記憶體位址，利用&來指示傳遞記憶體位址
  interchange(&x, &y);
  printf("Now x = %d and y = %d.\n", x, y);

  return 0;
}

// 宣告形式參數為指標型態，傳入的實際參數必須是"記憶體位址"
void interchange(int *u, int *v)
{
  int temp;

  temp = *u;
  *u = *v;
  *v = temp;
}