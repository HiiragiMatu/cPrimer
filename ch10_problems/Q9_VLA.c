#include <stdio.h>
// 寫二維陣列需先指定第二層大小
void copy_2d_arr(double target[][5], double source[][5], int n);
void print_2d_arr(double arr[][5], int rows);

int main(void)
{
  double source[3][5] = {{1, 2, 3, 4, 5}, {2, 3, 4, 5, 6}, {7, 8, 9, 8, 7}};
  double new_arr[3][5];

  copy_2d_arr(new_arr, source, 3);
  print_2d_arr(new_arr, 3);
  return 0;
}

void copy_2d_arr(double target[][5], double source[][5], int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 5; j++)
      target[i][j] = source[i][j];
  }
}
void print_2d_arr(double arr[][5], int rows)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < 5; j ++)
    {
      printf("%.2lf ", arr[i][j]);
    }
    printf("\n");
  }
}