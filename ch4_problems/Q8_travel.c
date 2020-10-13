#include <stdio.h>
#define GALLON 3.785
#define MILE 1.609

int main(void){
  float dis_mile, dis_kilo;
  float liter_gallon, liter_gas;
  float dis_per_gallon;
  float h_kilo_gas;

  printf("How long you drive?\n");
  scanf("%f", &dis_mile);
  printf("How many liters you use?\n");
  scanf("%f", &liter_gallon);
  dis_per_gallon = dis_mile / liter_gallon;

  printf("Well, you drive %.2f miles per gallon.\n", dis_per_gallon);
  h_kilo_gas = ((liter_gallon * GALLON) / (dis_mile * MILE)) * 100;
  printf("Looks like that you use %.2f gas to drive 100km.\n", h_kilo_gas);

  return 0;
}