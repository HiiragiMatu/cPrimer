#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define LEN 30
enum spectrum {red, orange, yellow, green, blue, violet};
const char * colors[] = {"red", "orange", "yellow", "green", "blue", "violet"};
char *s_get(char *st, int n);

int main(void){
  char choice[LEN];
  enum spectrum color;
  bool color_is_found = false;

  puts("Enter a color (empty line to quit): ");
  while(s_get(choice, LEN) != NULL && choice[0] != '\0')
  {
    for(color = red; color <= violet; color++)
    {
      if(strcmp(choice, colors[color]) == 0)
      {
        color_is_found = true;
        break;
      }
    }
    if(color_is_found)  
      switch(color)
      {
        case red: puts("Roses are red.");
          break;
        case orange: puts("Poppies are orange.");
          break;
        case yellow: puts("sunflowers are yellow.");
          break;
        case green: puts("Grass is green.");
          break;
        case blue: puts("Bluebells are blue.");
          break;
        case violet: puts("Violets are violet.");
          break;
      }
      else 
        printf("I don't know about the color %s.\n", choice);
      color_is_found = false;
      puts("Next color, please(empty line to quit): ");
  }
  puts("Goodbye!");
  return 0;
}



char *s_get(char *st, int n)
{
  char *ret_val;
  char *find;

  ret_val = fgets(st, n, stdin);
  if(ret_val)
  {
    find = strchr(st, '\n'); // 尋找換行字元
    if(find)  // 如果不是NULL
      *find = '\0'; // 替換成停止字符
    else
      while(getchar() != '\n')
        continue; // 省略其餘行
  }
  return ret_val;
}

