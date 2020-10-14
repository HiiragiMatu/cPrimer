/* Ch5-10 Emperor and Scholar about Wheat -- Exponential Growth*/
#include <stdio.h>
#define SQUARE 64

int main(void){
  const double CROP = 2E16; // world wheat production in wheat grains
  double current, total;
  int count = 1;

  printf("square      grains      total      ");
  printf("fraction of\n");
  printf("            added       grains     ");
  printf("world total\n");

  total = current = 1.0;
  printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
  
  while(count < SQUARE){
    count = count + 1;
    current = 2.0 * current;
    total = total + current;
    printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
  }

  printf("Amazing!");
  return 0;
}