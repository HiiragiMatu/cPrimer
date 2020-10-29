#include <stdio.h>
int fibonacci(int);

int main(void){
  int times;
  printf("Finonacci: ");
  while(scanf("%d", &times) == 1){
    printf("%d ", fibonacci(times));
    printf("\nNext try: ");
  }
  printf("Bye!\n");
  return 0;
}

int fibonacci(int times)
{
  int n1 = 1, n2 = 2;
  int next = n1 + n2;
  if(times == 1){
    return n1; 
  } else if(times == 2){
    return n2;
  } else {
    for (int i = 3; i <= times; i++){
      next = n1 + n2;
      n1 = n2;
      n2 = next;
    }
  }
  return next;
}