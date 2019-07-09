#include <stdio.h>
int main (void){

int sum=0;
int i=1;

do{ //반복조건부터 나옴
sum = sum + i;
i++;

}while(i<=10);

printf("1에서 10까지 더한값은 %d입니다.",sum);
    return 0;
}