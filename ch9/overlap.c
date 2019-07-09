//숫자를 입력받아서 100이상이면
//100이상입니다.
//중첩에중첩하는거

#include <stdio.h>
int main (void){
    int x;
	printf("수를 입력하세요" );
    scanf("%d",&x);

    if(x>=100){
        printf("100이상입니다.");
            if(x>200)
                printf("200이상입니다.");
            else
                printf("200이하입니다.");
    }
    else
    {
       if(x<=50)
            printf("50이하입니다.");
    }
return 0;
}