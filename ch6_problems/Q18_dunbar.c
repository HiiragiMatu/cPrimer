#include <stdio.h>
#define DUNBAR 150

int main(void){
  int friends = 5;
  int week = 1;
  
  do {
    int f_left = friends - week;
    friends = (f_left)*2;
    printf("In %d weeks with %d friends and %d left\n", week, friends, f_left);
    week++;
  } while (DUNBAR > friends);
  printf("\"Dunbar number\"(150 principle) it indicates the maxmium number of tight relationship with people.\n");
  return 0;
}