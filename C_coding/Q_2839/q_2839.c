#include <stdio.h>

int main(void){
  int five_counter;
  int three_counter;
  int count = 5000;
  int i,j;
  int sugar;

  scanf("%d", &sugar);

  five_counter = sugar / 5;
  three_counter = sugar / 3;

  for(i = 0; i <= five_counter; i++){
    if((sugar - i * 5) % 3 != 0)
      continue;
    for(j = 0; j <= three_counter; j++){
      if((i * 5) + (j * 3) > sugar)
        break;
      if(((i * 5) + (j * 3) == sugar) && (i + j < count))
        count = i + j;
    }
  }
  if(count == 5000)
    printf("-1\n");
  else
    printf("%d\n", count);

  return 0;
}
