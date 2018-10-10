#include <stdio.h>

int main(void){
  /*char ch = 0;
  while(ch != EOF){
    ch = getchar();
    putchar(ch);
  }*/
  char a = 0;
  while((a = getchar()) != EOF){
    putchar(a);
  }
  printf("Program Finish!\n");
  // char a[10];
  //
  // scanf("%[^EOF]s",a);
  // printf("%s\n", a);

  return 0;
}

// char a[10];
// scanf(“%[123]s”, a);
// // 입력에 1,2,3 중 하나가 나오지 않을때까지 읽음, 12934를 입력 시, 12만 기억
// char a[10];
// scanf(“%[^123]s”, a);
// // 입력에 1,2,3 중 하나가 나올 때까지 읽음. 899aa1을 입력 시, 899aa만 기억
// char a[10];
// scanf(“%10[^\n]s”, a);
// // 입력에 공백을 포함하여 \n(new line)이 나올 때까지 읽으며, Width를 10로 제한.
