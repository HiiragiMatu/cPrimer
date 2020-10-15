/* Greek Scholar Zeno Limit Problem P6-30*/
#include <stdio.h>

int main(void){
  int t_ct; //term count
  double time, power_of_2;
  int limit;

  printf("Enter the number of terms you want: ");
  
  while(scanf("%d", &limit) == 1){
    for (time = 0, power_of_2 = 1, t_ct = 1; t_ct <= limit; t_ct++, power_of_2 *= 2.0){
      time += 1.0 / power_of_2;
      printf("time = %f when terms = %d.\n", time, t_ct);
    }
    printf("Enter the next number of terms you want(0 to exit): \n");
  }

  

  return 0;
}