#include <stdio.h>
#include <ctype.h>
void add(void);
void subtract(void);
void multiply(void);
void divide(void);
int get_first(void);
void menu(void);
float num1(void);
float num2(void);

int main(void)
{
  char response;
  float num1, num2;
  float result;
  menu();

  while((response = get_first()) != 'q')
  {
    if(response == '\n')
      continue;
    response = tolower(response);
    switch(response)
    {
      case 'a':
        add();
        break;
      case 'b':
        subtract();
        break;
      case 'c':
        multiply();
        break;
      case 'd':
        divide();
        break;
      default:
        printf("You should enter a ~ d or q to quit.\n");
        menu();
        continue; 
    }
  }
  return 0;
}

void menu(void)
{
  printf("******************************\n");
  printf("Enter the operation of your choice\n");
  printf("a. add          b. subtract\n");
  printf("c. multiply     d. divide\n");
  printf("******************************\n");
  printf("Menu: ");
}

int get_first(void)
{
  int ch;
  ch = getchar();
  
  // 檢查是否為空白字元
  while(isspace(ch))
    ch = getchar();
  // 檢查是否有換行字元 
  while(getchar() != '\n')
    continue;
  return ch;
}

float num1(void)
{
  float num1;
  printf("Enter number 1: ");
  scanf("%f", &num1);
  return num1;
}

float num2(void)
{
  float num2;
  printf("Enter number 2: ");
  scanf("%f", &num2);
  return num2;
}

void add(void)
{
  printf("%.2f\n", num1() + num2());
  menu();
}

void subtract(void)
{
  printf("%.2f\n", num1() - num2());
  menu();
}

void multiply(void)
{
  printf("%.2f\n", num1() * num2());
  menu();
}

void divide(void)
{
  float n1 = num1();
  float n2 = num2();
  
  if(n2 == 0.000f){
    printf("Number two cannot be 0!\n");
  }else{
    printf("%.2f\n", n1 / n2);
  }
  
  menu();
}