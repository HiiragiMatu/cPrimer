#include <stdio.h>
#define SIZE 26

int main(void){
  char Alphabet[SIZE];
  int i, j;
  for (i = 0, j = 'A'; i < SIZE, j < 'A' + SIZE; i++, j++){
    Alphabet[i] = j;
  }

  int k = 0;
  for (i = 0; i < 6; i++){
    for (j = 0; j <= i && k < SIZE; j++){
      //if(j != i)
        printf("%c", Alphabet[k++]);
    }
    printf("\n");
  }
  printf("Bye!");
  return 0;
}

/*int main(void)
{
    char ch='A';
    int i,j;
    for(i=1;i<7;i++)               
        {
        for(j=0;j<i;j++)            
            printf("%c",ch++);      
        printf("\n");
        }
    return 0;
}*/