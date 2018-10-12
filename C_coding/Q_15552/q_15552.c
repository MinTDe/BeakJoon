#include <stdio.h>

int main(void){
  int i,length;
  int a, b;

  scanf("%d", &length);

  for(i = 0; i< length; i++){
    scanf("%d %d", &a, &b);
    printf("%d\n", a + b);
  }

  return 0;
}
