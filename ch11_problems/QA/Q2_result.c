#include <stdio.h>

int main(void){
  char note[] = "See you at the bar!";
  char *ptr;
  ptr = note;
  puts(ptr);
  printf("%s <----> %p\n", ptr, ptr);
  puts(++ptr);
  // 遞增過後的結果將保持，影響後續
  printf("%s <----> %p\n", ptr, ptr);
  printf("%s <----> %p\n", ptr++, ptr++);
  printf("%s <----> %p\n", ptr, ptr);

  note[7] = '\0';
  // 很簡單，puts()遇到\0就會停止並換行
  puts(note);
  puts(++ptr);
  return 0;
}