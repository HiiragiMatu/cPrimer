#include <stdio.h>
#define H2O 3.0e-23
#define QT 950

int main(void){
  double quarts;
  long double quarts_to_molecule;

  printf("Well, tell me how many quarts the cola has?\n");
  scanf("%lf", &quarts);

  quarts_to_molecule =  quarts * QT * H2O;

  printf("There are %e H2O molecules in total! Cool\n", quarts_to_molecule);
 
  return 0;
}