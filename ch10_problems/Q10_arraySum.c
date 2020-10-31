#include <stdio.h>
#define SIZE 3
// 相等於 void sumArray(double source1[], double source2[], double new_arr[]);
void sumArray(double *source1, double *source2, double *new_arr);

int main(void){
  double source1[SIZE] = {1, 2, 3};
  double source2[SIZE] = {4, 5, 6};
  double new_arr[SIZE];

  sumArray(source1, source2, new_arr);
  for (int i = 0; i < SIZE; i++)
    printf("%2.lf ", new_arr[i]);

  return 0;
}

void sumArray(double *source1, double *source2, double *new_arr)
{
  for (int i = 0; i < SIZE; i++)
    // 相等於 new_arr[i] = source1[i] + source2[i]
    *new_arr++ = *source1++ + *source2++;
}