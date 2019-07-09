// 0,1,2,3 을 입력받는다.
// 입력받은 수를 한글로 출력한다.
// 그 외숫자는 잘못된 입력입니다
#include <stdio.h>
int main (void){
	 int input;
	printf("수를 입력하세요" );
    scanf("%d",&input);

    if(input==0)
        printf("입력된 숫자는 0입니다.");
    else if(input==1)
        printf("입력된 숫자는 1입니다.");
    else if(input==2)
        printf("입력된 숫자는 2입니다.");
    else if(input==3)
        printf("입력된 숫자는 3입니다.");
    else 
        printf("다시 입력해 주세요.");
	return 0;
}