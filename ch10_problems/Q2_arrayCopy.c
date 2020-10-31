#include <stdio.h>
void copy_arr(double[], double[], int);
void copy_ptr(double*, double[], int);
void copy_ptrs(double[], double[], double*, int);

int main(void){
  double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
  double target1[5];
  double target2[5];
  double target3[5];

  copy_arr(target1, source, 5);
  copy_ptr(target2, source, 5);

  // 有點搞不懂第三個函數怎麼寫
  copy_ptrs(target3, source, source + 5, 5);
  return 0;
}

void copy_arr(double to_arr[], double arr[], int n)
{
  for (int i = 0; i < n; i++){
    to_arr[i] = arr[i];
    printf("%.2lf ", to_arr[i]);
  }
  printf("\n");
}

void copy_ptr(double *to_arr, double arr[], int n)
{
  for (int i = 0; i < n; i++){
    *(to_arr+1) = arr[i];
    printf("%.2lf ", *(to_arr + 1));
  }
  printf("\n");
}

void copy_ptrs(double arr[], double to_arr[], double * n, int s)
{
  int i = 0;
  arr = to_arr;
  n = arr;
  while(i < s){
    printf("%.2lf ", *(n++));
    i++;
  }
  printf("\n");
}