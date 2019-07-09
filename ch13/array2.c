#include <stdio.h>
#define NUM 10

void main (){
    int score[NUM];
    int i,sum=0;
    double average;

    for(i=0; i<NUM; i++)
    {
        printf("심판%d번째 점수를 입력해주세요: ",i+1);
        scanf("%d", &score[i]);
    }
     for(i=0; i<NUM; i++)
            sum += score[i];
    printf("%d",sum);

    average=((double)sum/NUM);
    printf("평균 득점은 %f입니다.",average); //double이니까 %f로!!!!!!
    }