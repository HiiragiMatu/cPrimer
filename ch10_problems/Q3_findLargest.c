#include <stdio.h>
#define SIZE 5
int largest_of(int arr[]);

int main(void){
  int i = 0;
  int n;
  int findMe[SIZE];
  printf("Enter 5 numbers to find their biggest one: ");
  while( i < SIZE){
    scanf("%d", &n);
    findMe[i] = n;
    i++;
    printf("Next Number: ");
  }
  printf("Who is the biggest? %d\n", largest_of(findMe));

  return 0;
}

int largest_of(int arr[])
{
  int temp = arr[0];
  for (int i = 0; i < SIZE; i++)
  {
    if(temp < arr[i])
    {
      temp = arr[i];
    }
  }
  return temp;
}