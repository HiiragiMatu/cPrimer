#include <stdio.h>
void menu(void);
int range(int, int);

int main(void){
  int res;
  menu();
  while((res = range(1,4)) != 4)
  {
    printf("I like choice %d.\n", res);
    menu();
  }
  printf("Bye!\n");
  return 0;
}

void menu(void)
{
  printf("Please choose one of the following:\n");
  printf("1) copy files            2) move files\n");
  printf("3) remove files          4)quit\n");
  printf("Enter the number of your choice: ");
}

int range(int n1, int n2)
{
  int ans;
  int good;
  good = scanf("%d", &ans);
  while(good == 1 && (ans < n1 || ans > n2))
  {
    printf("%d is not a valid choice; try again\n", ans);
    menu();
    scanf("%d", &ans);
  }
  if(good != 1)
  {
    printf("Non-numeric input.\n");
    ans = 4;
  }
  return ans;
}