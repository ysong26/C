//1 부터 100까지 더하기

#include <stdio.h>
int main (void){

int i=1;
int sum=0;

while(i <= 100){
    sum = sum + i;
    i++;
    }
printf("1부터 100까지 더한값은%d 입니다.",sum);
    return 0;
}