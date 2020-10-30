#include <stdio.h>
#define SIZE 5
int index_of_largest(double arr[]);

int main(void){
  int i = 0;
  double n;
  double findMeIndex[SIZE];
  while(i < SIZE)
  {
    scanf("%lf", &n);
    findMeIndex[i] = n;
    i++;
  }
  printf("Oh is that my home? %d", index_of_largest(findMeIndex));

  return 0;
}

int index_of_largest(double arr[])
{
  int temp = arr[0];
  int index = 0;
  for (int i = 0; i < SIZE; i++){
    if (temp < arr[i])
    {
      temp = arr[i];
      index = i;
    }
  }
  return index;
}