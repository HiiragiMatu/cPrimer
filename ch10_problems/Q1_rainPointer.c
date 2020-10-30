#include <stdio.h>
#define M 12
#define Y 5

int main(void){
  const float rain[Y][M] =
      {
          {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.4, 2.4, 3.5, 6.6},
          {2.6, 6.5, 8.9, 4.8, 4.9, 2.1, 1.1, 0.1, 0.9, 2.3, 4.6},
          {2.2, 1.1, 3.3, 4.5, 5.4, 6.6, 3.2, 0.8, 2.8, 3.1, 4.5},
          {7.2, 6.5, 4.3, 6.5, 3.2, 6.4, 3.3, 9.6, 3.2, 3.1, 2.1},
          {2.3, 1.2, 3.2, 4.3, 3.2, 5.5, 6.6, 5.6, 2.3, 1.2, 9.9}};

  int year;
  int month;
  float subtot, total;

  printf("  YEAR     RAINFALL  (inches)\n");
  for (year = 0, total = 0; year < Y; year++)
  {
    for (month = 0, subtot = 0; month < M; month++)
      // 利用指標存取陣列 -> 需各自括號解指標
      // rain[year][month] -> 對應陣列括號
      subtot += *(*(rain + year) + month);
    printf("%5d %15.2f\n", 2010 + year, subtot);
    total += subtot;
  }

  printf("\nThe yearly average is %.1f inches.\n\n", total / Y);
  printf("MONTHLY AVERAGES: \n\n");
  printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");

  for (month = 0; month < M; month++)
  {
    for (year = 0, subtot = 0; year < Y; year++)
      subtot += *( *(rain + year ) + month);
    printf("%4.1f ", subtot / Y);
  }

  printf("\n");
  return 0;
}