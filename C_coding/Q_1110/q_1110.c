#include <stdio.h>
int main(void){
  int n,save;
  int F_n, L_n,N_n;
  int count = 0;

  scanf("%d", &n);
  save = n;

  while(1){
    F_n = n / 10;
    L_n = n % 10;
    N_n = (F_n + L_n)%10;
    n = L_n * 10 + N_n;
    //printf("%d ", n);
    count++;
    if(n == save){
      printf("%d\n", count);
      return 0;
    }
  }
}
