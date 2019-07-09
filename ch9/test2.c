/*
#include <stdio.h>

int main (void){
    printf("숫자를 입력해 주세요:" );
    int i;
	scanf("%d",&i);
    if((i%2)==0){
    printf("짝수입니다.");
}
else{
printf("홀수입니다."); 
}

return 0;
}
*/

//숫자와 판돈과 배수를 입력받아 홀수면 금액이 판돈*배수로 출력
//짝수면 판돈/배수로 출력

#include <stdio.h>

int main (void){
    printf("숫자를 입력해 주세요:" );
    int number;
	scanf("%d",&number);

    printf("판돈을 입력해 주세요:" );
    int money;
	scanf("%d",&money);

    printf("배수를 입력해 주세요:" );
    int mul;
	scanf("%d",&mul);

    if((number%2)==1){    //홀수일때
    printf("금액%d",money*mul); //판돈*배수
}
else{ //나머지는 짝수
printf("금액%d",money/mul); //판돈/배수
}

return 0;
}
