#include <stdio.h>
int main (void){
 int a,b;
	printf("2개의 정수를 입력하시오 <예 99 2>: ");
	scanf("%d %d",&a,&b); //두개의 정수 입력
	
    printf("몫은 %d 입니다. \n", a/b );
	printf("나머지는 %d 입니다. \n", a%b );
	return 0;
}