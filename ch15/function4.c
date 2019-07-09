#include <stdio.h>
int get_larger(int x, int y);

void main (){

int num1,num2;
printf("두 수를 입력해주세요:");
scanf("%d %d",&num1,&num2);
    printf("두 수 중에서 큰 수는 %d 입니다.",get_larger(num1, num2));

 return 0;
}

int get_larger(int x, int y)
{
 if(x>y) return(x);
    else return(y);
}
