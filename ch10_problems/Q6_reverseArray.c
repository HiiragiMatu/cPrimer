#include <stdio.h>
#define SIZE 20
void show_array(double[], int);

int main(void){
  int start = 0;
  double num;
  double arr[SIZE];
  printf("Enter numbers(q to quit): ");
  while(scanf("%lf", &num) == 1)
  {
    arr[start] = num;
    start++;
    printf("Next one: ");
  }
  printf("Below is the reverse array of your input: ");
  show_array(arr, start);
  return 0;
}

void show_array(double arr[], int s)
{
  for (int i = s-1; i >= 0; i--){
    printf("%.2lf ", arr[i]);
  }
}