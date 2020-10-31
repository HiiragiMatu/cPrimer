#include <stdio.h>
#define ROW 3
#define COL 5
// 指定二維數量
void multiply(double source[][COL], int);
void show_arr(double source[][COL], int);

int main(void){
  double arr[ROW][COL] = {{1, 3, 5, 7, 9}, {2, 4, 6, 8, 10}, {1, 1, 2, 3, 5}};

  show_arr(arr, ROW);
  multiply(arr, ROW);
  show_arr(arr, ROW);
  return 0;
}

void multiply(double source[][COL], int rows)
{
  for (int i = 0; i < rows; i++)
    for (int j = 0; j < COL; j++)
      source[i][j] = 2 * source[i][j];
}

void show_arr(double source[][COL], int rows)
{
  for (int i = 0; i < ROW; i++)
    for (int j = 0; j < COL; j++){
      printf("%.2lf ", source[i][j]);
    }
  printf("\n");
}