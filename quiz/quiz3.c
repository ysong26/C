//가위보 프로그램 
//가위=1; 바위=2; 보=3;
//예> 사용자입력(가위=1,바위=2;보=3):
//컴퓨터 랜덤으로 이졌는지 졌는지 비겼는지 출력하는 프로그램
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SCISSORS 1
#define ROCK 2
#define PAPER 3

void main()
{
   srand(time(NULL));   //랜덤 시드값 초기화
   int com,human;
    for(;;){   
        com=rand()%3+1;  //컴퓨터 결정
        /************** 테스트 코드 **********************/
        if(com==1) printf("컴퓨터는 가위(%d)\n",com);
        else if(com==2)  printf("컴퓨터는 바위(%d)\n",com);
        else printf("컴퓨터는 보(%d)\n",com);  
        /**************************************************/     

        printf("가위(1) 바위(2) 보(3) 중 입력해 주세요:");
        scanf("%d",&human);
        if(com==human)
                printf("비겼습니다.\n");
        else if((com==3 && human==1) || (com==1 && human==2) || (com==2 && human==3) )
                printf("이겼습니다.\n");
        else
                printf("졌습니다.\n");
        printf("------------\n");
    }
}