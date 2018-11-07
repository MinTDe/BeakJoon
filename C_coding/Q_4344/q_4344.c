#include <stdio.h>
#include <stdlib.h>

int main(void){
  int i, j;
  int case_n, stdudent_n;
  double test;

  // fflush(stdout);
  scanf("%d", &case_n);

  for(i = 0; i < case_n; i++){
    double avg = 0;
    int count = 0;
    scanf("%d", &stdudent_n);
    int *score = (int*)malloc(sizeof(int)*stdudent_n);
    for(j = 0; j < stdudent_n; j++){
      scanf("%d", &score[j]);
      avg += score[j];
      //avg = avg/stdudent_n;
      test = avg/stdudent_n;
    }
    //printf("%f\n",test);
    for(j = 0; j < stdudent_n; j++){
      if(score[j] > test)
      count++;
    }
    printf("%.3f%%\n", (double)count/stdudent_n*100);
    free(score);
  }
  return 0;
}
