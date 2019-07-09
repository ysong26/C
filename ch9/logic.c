//하나의 수를 입력받아서 3보다 크고 10보다 작으면
//잘못된 입력입니다.라고 출력 제대로 입력되면 무시

#include <stdio.h>

int main (void){
    printf("3보다 크고 10보다 작은수를 입력해주세요:" );
    int i;
	scanf("%d",&i);
    if(!((i>3) && (i<10)))
    printf("잘못된 입력입니다.");
    
return 0;
}