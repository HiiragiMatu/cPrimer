#include <stdio.h>

void copy_arr2(double *target, double * source_s, double * source_e);

int main(void){
  double array[7] = {1, 2, 3, 4, 5, 6, 7};
  double to_arr[3];

  copy_arr2(to_arr, array + 2, array + 5);

  for (int i = 0; i < 3; i++)
    printf("%.2lf ", to_arr[i]);

  return 0;
}

void copy_arr2(double *target, double* source_s, double* source_e)
{
  for (double *i = source_s; i < source_e; i++)
    *target++ = *i;
}