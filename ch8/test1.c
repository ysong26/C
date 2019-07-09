//사용자로부터 정수를 입력받은후 1을 더한값과
//1을 뺀값을 출력하시오. (단 최대한 코드짧게)

#include <stdio.h>
int main (void){
 int a;
	
    printf("정수입력" );
	scanf("%d",&a);
    printf("1을 더한값은%d이고 1을 뺀값은 %d이다.", a+1,a-1);
return 0;

}