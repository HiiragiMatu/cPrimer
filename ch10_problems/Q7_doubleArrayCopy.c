#include <stdio.h>
#define SIZE 3

// 多維陣列形式參數寫法同下 -> 指取位址的概念
void copy_arr(double target[], double source[], int);

int main(void){
  double doubleArray[SIZE][SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  double copy[SIZE][SIZE];

  // C語言將多維平面化，二維可視為一維的三倍延伸
  for(int i = 0; i < SIZE; i++){
    copy_arr(copy[i], doubleArray[i], SIZE);
  }
  
  for (int i = 0; i < SIZE; i++)
  {
    for (int j = 0; j < SIZE; j++)
      printf("%.2lf ", copy[i][j]);
  }
  return 0;
}

void copy_arr(double target1[], double source[], int n)
{
  for (int i = 0; i < n; i++)
    target1[i] = source[i];
}