//8명의 심판으로 부터 점수를 입력받는다.(점수 범위는 1~200)
//최대점수를 준 심판과 최소 점수를 준 심판을 제외한 6명의
//심판 점수를 가지고 평균을 계산한다.
//점수 출력후 
//점수에 따라
//150 이상은 '참 잘했어요'
//100 ~ 150 사이는 '잘했어요'
//100 미만은 '노력하세요' 를 출력한다.
#include <stdio.h>

void main()
{
    int i,value[8],max,min,sum=0,avg;
    for(i=0; i<8; i++){
        printf("%d번째점수를 입력해주세요.",i+1);
        scanf("%d",&value[i]);
    }
    max=value[0];
    for(i=1; i<8; i++){
        if(max<value[i])   
            max=value[i];
    }
    min=value[0];
    for(i=1; i<8; i++){
        if(min>value[i])
            min=value[i];
    }
    for(i=0;i<8;i++){
        sum+=value[i];
    }
    sum=sum-max-min;
    avg=sum/6;
    printf("점수는%d",avg);
    if(avg>=150)
        printf("참 잘했어요");
    else if(avg>=100)
        printf("잘했어요");
    else
        printf("노력 하세요.");    
}

