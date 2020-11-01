#include <stdio.h>
#define ROW 3 
#define COL 5

int main(void){
  double arr[ROW][COL] =
      {
          {1, 2, 3, 4, 9},
          {1, 2, 3, 4, 5},
          {1, 2, 3, 4, 5}
      };

  avg_arr(arr, ROW);
  max_arr(arr, ROW);
  return 0;
}

void avg_arr(double arr[][COL], int rows)
{
  double subtot, total;
  printf("  SET    SET_AVG\n");
  total = 0;
  for (int i = 0; i < rows; i++)
  {
    subtot = 0;
    for (int j = 0; j < COL; j++)
    {
      subtot += arr[i][j];
    }
    printf("%3d %10.2f\n", 1 + i, subtot / 5);
    total += subtot;
  }
  printf("\nThe array avg is %.2f.\n", total / (rows * 5));
}

void max_arr(double arr[][5], int rows)
{
    int i,j = 0;
    double max = arr[0][0];
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    printf("The largest value of the array is: %.2f", max);
}
