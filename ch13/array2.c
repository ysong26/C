#include <stdio.h>
#define NUM 10

void main (){
    int score[NUM];
    int i,sum=0;
    double average;

    for(i=0; i<NUM; i++)
    {
        printf("����%d��° ������ �Է����ּ���: ",i+1);
        scanf("%d", &score[i]);
    }
     for(i=0; i<NUM; i++)
            sum += score[i];
    printf("%d",sum);

    average=((double)sum/NUM);
    printf("��� ������ %f�Դϴ�.",average); //double�̴ϱ� %f��!!!!!!
    }