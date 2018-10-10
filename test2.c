#include <stdio.h>

int main(void){
  int i,j;

  for(i=1;i<=5;i++)
  {
    for(j=1;j<=5;j++)
    {
      if((i<=j)||((10-i)<=j))
      {
        printf("*");
      }
      else
      {
        printf(" ");
      }
    }

  }
  for(i=1;i<=4;i++)
  {
    for(j=4;j<=4;j++)
  }
}
