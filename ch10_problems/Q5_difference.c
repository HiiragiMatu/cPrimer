#include <stdio.h>
#define SIZE 20
double diff(double, double);
double max(double[], int);
double min(double[], int);

int main(void){
  int start = 0;
  double num;
  double arr[SIZE];
  printf("Enter some numbers into an array, and I will give you something useful(q to quit): ");
  while(scanf("%lf", &num) == 1)
  {
    arr[start] = num;
    start++;
    printf("Next number: ");
  }
  printf("The max number is %.2lf and the min number is %.2lf, their difference is %.2lf.\n", max(arr, start), min(arr, start), diff(max(arr, start), min(arr,start)));

  return 0;
}

double diff(double M, double m)
{
  return M - m;
}

double min(double arr[], int s)
{
  double min = arr[0];
  for (int i = 0; i < s; i++){
    if(min > arr[i])
      min = arr[i];
  }
  return min;
}

double max(double arr[], int s)
{
  double max = arr[0];
  for (int i = 0; i < s; i++){
    if(max < arr[i])
      max = arr[i];
  }
  return max;
}