#include <stdio.h>

double cube(double n);

int main(void){
  double count;
  double num;
  double sumCube = 0;

  printf("Enter a number to calculate its cube: ");
  scanf("%lf", &num);
  while(num != 'q'){
    for (count = 0; count < num + 1; count++){
      sumCube = sumCube + cube(count);
      printf("%10.5f %10.5lf %10.5f\n", count, cube(count), sumCube);
    }
    sumCube = 0;
    printf("Enter another number to calcute its cube(q to quit): ");
    scanf("%lf", &num);
  }

  printf("Bye!");
  return 0;
}

double cube(double n){
  return n * n * n;
}