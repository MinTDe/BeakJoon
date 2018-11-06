#include <stdio.h>

int main(void){
  //int second;
  int a[3];
  int i, j, change;

  fflush(stdout);
  scanf("%d %d %d",a, a+1, a+2);

  for(i = 0; i < 3; i++)
    for(j = 0; j < 2; j++){
      if(a[i] < a[j]){
        change = a[i];
        a[i] = a[j];
        a[j] = change;
      }
    }
    printf("%d", a[1]);
    return 0;
}
