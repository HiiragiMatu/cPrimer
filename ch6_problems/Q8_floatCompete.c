#include <stdio.h>

int main(void){
  float player1, player2;
  printf("Please enter two float respectively: ");
  while(scanf("%f", &player1) == 1 && scanf("%f", &player2) == 1){
    printf("%15s %15s %15s\n", "Difference", "Multiplication", "Division");
    printf("%15f %15f %15f\n", player1 - player2, player1 * player2, (player1 * player2) / (player1 - player2));

    printf("Find out something? Let's explore more(q to exit): ");
  }
  return 0;
}