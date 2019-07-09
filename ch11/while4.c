//입력받은 숫자가 0이면 종료
//그렇지 않으면 계속 입력요청

#include <stdio.h>
int main (void){

int i;
do{
printf("숫자를 입력해주세요:");
scanf("%d",&i);
}while(i != 0);

printf("종료되었습니다.");
    return 0;
}