#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void)
{

int input,input_count,max_num,min_num;
printf("반복 횟수를 입력해주세요:");
scanf("%d",&input_count);
printf(" 숫자 범위의 값을 입력해주세요: ");
scanf("%d %d",&min_num,&max_num);
srand(time(NULL));
int num,count=0;
num=rand()%(max_num +1 - min_num) + min_num ; //1~100값을 넣음
printf("%d\n",num); //답

do{
    printf("숫자를 입력해주세요:");
    scanf("%d",&input);
    if(input > num) 
        printf("입력된 숫자보다 작습니다.\n");
    else if(input < num)
        printf("입력된 숫자보다 큽니다.\n");
        count++;
}while(!(input == num || count >= input_count)) ;

if(input== num)
printf("정답입니다.");

else
   printf("횟수초과");
    return 0;
}