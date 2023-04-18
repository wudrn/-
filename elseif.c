#include <stdio.h>

main(){
  int x;
  printf("1번 사과, 2번 딸기, 3번 망고, 4번 수박\n");
    scanf("%d", &x);

  if(x==1)
    printf("사과를 좋아하는군요!");
  else if(x==2)
    printf("딸기를 좋아하는군요!");
  else if(x==3)
    printf("망고를 좋아하는군요!");
  else if(x==4)
    printf("수박을 좋아하는군요!");
  else
    printf("당신은 아마도 과일을 좋아하지 않는 것 같군요");
  printf("좋아하는 과일 조사 끝");
}