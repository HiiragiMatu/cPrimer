#include <stdio.h>
#define MSG "I am a symbolic string constant.c"
#define MAXLENGTH 81
int main(void){
  char words[MAXLENGTH] = "I am a string in an array.";
  const char *pt1 = "Something is pointing at me.";
  // Puts會自動換行
  puts("Here are some strings: ");
  puts(MSG);
  puts(words);
  puts(pt1);

  words[8] = 'p';
  puts(words);

  return 0;
}