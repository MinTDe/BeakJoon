#include <stdio.h>
#include <stdlib.h>


int main(void){
  int i,n;
  double MAX = 0,avg = 0;

  fflush(stdout);
  scanf("%d", &n);

  int* arr = (int*)malloc(sizeof(int)*n);

  for (i = 0 ; i < n ; i++){
    scanf("%d", arr+i);
    if(arr[i] > MAX)
      MAX = arr[i];
  }

  for (i = 0; i < n ; i++)
    avg += arr[i]/MAX * 100;

  printf("%.2f", avg/n);

  return 0;
}
