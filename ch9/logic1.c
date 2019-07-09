//숫자 하나를 입력받아서
//100보다 크거나 50보다 작으면
//good이라고 출력되게 만들기


#include <stdio.h>

int main (void){
    printf("100보다 크거나 50보다 작은수 입력하세요" );
    int i;
	scanf("%d",&i);
    if((i>100) || (i<50))
    printf("good");
    else
    {
        printf("bad");
    }
    
return 0;
}