#include <stdio.h>
#include <string.h>

int main(void){
  char str[100];
  int i, length;
  scanf("%s", str);

  length = strlen(str);

  for(i = 0; i < length ; i++){
    printf("%c", str[i]);
  if(i % 10 == 9)
      printf("\n");
  }
  //printf("system finish!\n");
  return 0;
}
