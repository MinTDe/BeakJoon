#include <stdio.h>
#include <stdlib.h>

int main(void){
  int length,i,sum = 0;
  //char sum_n[100];

  scanf("%d", &length);
  char* test = malloc(sizeof(char) * length);

  scanf("%s", test);

  for(i = 0; i < length; i++)
    sum += (test[i] - '0');

  printf("finish :  %d\n", sum);

  return 0;
}
