#include <stdio.h>
void process(double ar[], int n);
void process2(short ar2[30], int n);
void process3(long ar3[10][15], int n);
void processvla(int n, double ar[n]);
void process2vla(int n, int m, short ar2[n][m]);
void process3vla(int n, int m, int k, long ar3[n][m][k]);

int main(void){
  double trots[20];
  short clops[10][30];
  long shots[5][10][15];

  process(trots, 20);
  process2(clops, 10);
  process3(shots, 5);

  processvla(20, trots);
  process2vla(10, 30, clops);
  process3vla(5, 10, 15, shots);
  return 0;
}