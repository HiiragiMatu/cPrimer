#include <stdio.h>

int main(void){
  float file_size;
  float download_speed;
  float time_required;

  printf("What's the size of the file and your poor net?\n");
  scanf("%f", &file_size);
  scanf("%f", &download_speed);
  time_required = (file_size * 8) / download_speed;
  printf("At %.2f megabits per second, a file of %.2f megabytes.\nDownloads in %.2f seconds", download_speed, file_size, time_required);

  return 0;
}