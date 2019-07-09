//두 수를 입력받아서 작은 수를 출력

#include <stdio.h>

int main (void){
    int n1,n2;
    printf("숫자를 두개 입력해 주세요:" );
	scanf("%d %d",&n1,&n2);

    if(n1>n2){ //n1이 더 크다면? (맞을경우)
        printf("작은수는 %d",n2); //n2가 더 작다는 의미
    }
    else{ //(아닐경우)
        printf("작은수는 %d",n1); //아니면 n1이 작다는 의미
    }
return 0;
}