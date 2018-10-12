#include <stdio.h>

int main(void){
  int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
  char *day[] = {"SUN","MON", "TUE", "WED", "THU", "FRI", "SAT"};
  int MONTH, DAY;   //입력
  int sum = 0;      //합
  int i;        //for
  //int check;

  scanf("%d %d", &MONTH, &DAY);

  for(i = 0; i < MONTH - 1; i++){
    sum += month[i];
    //printf("for 진입\n");
    //printf("sum : %d\n", sum);
  }

  sum += DAY;
  //printf("DAY를 더한 값 : %d\n", sum);

  //check = sum % 7;
  //printf("%d \n", check);

  //printf("%d", sum % 7 -1);
  printf("%s", day[sum % 7]);

  return 0;

}
