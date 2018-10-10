#include <stdio.h>

int main(void){
  int i,j,n;

  scanf("%d", &n);

  for(i = 1; i <= n ;i++){
    for(j = 1; j <= n * 2; j++){
      if(j <= i || j > n * 2 - i)
        printf("*");
      // else if(j > n * 2 - i)
      //   printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
  for(i = n - 1; i >= 1;i--){
    for(j = 1; j <= n*2; j++){
      if(j <= i || j > n * 2 - i)
        printf("*");
      // else if(j > n * 2 - i)
      //   printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
  return 0;
}
