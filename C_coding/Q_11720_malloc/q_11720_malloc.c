#include <stdio.h>
#include <stdlib.h>

int main(void){
  int length, i, sum = 0;
  //char input[100] = {};

  scanf("%d", &length);
  char* input = malloc(sizeof(char) * length);

  scanf("%s", input);

  for(i = 0; i < length; i++)
    sum += (input[i] - '0');

  printf("%d\n", sum);

  return 0;
}
