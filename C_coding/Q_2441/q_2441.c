#include <stdio.h>

int main(void){
  int i,j;
  int n;

  scanf("%d", &n);
  for(i = n; i >= 1; i--){
    for(j = n; j>= 1; j--){
      if(j >= i + 1)
        printf(" ");
      else
        printf("*");
    }
    printf("\n");
  }
}
