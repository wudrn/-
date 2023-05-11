#include <stdio.h>

main(){
  int a;

  printf("당신이 좋아하는 과일은 무엇인가요? 아래의 번호를 선택해주세요.\n");
  printf("사과=1, 망고=2, 딸기=3, 수박=4, 모두 좋아하지 않는다=0\n");

  printf("선택한 번호를 입력해주세요: ");
  scanf("%d", &a);

  switch(a){
    case 1:
    printf("당신은 사과를 좋아하는군요!\n");
    break;
    case 2:
     printf("당신은 망고를 좋아하는군요!\n");
    break;
    case 3:
     printf("당신은 딸기를 좋아하는군요!\n");
    case 4:
     printf("당신은 수박을 좋아하는군요!\n");
    break;
    default:
     printf("당신은 아마도 과일을 좋아하지 않는 것 같군요!\n");
    break;
  }
}