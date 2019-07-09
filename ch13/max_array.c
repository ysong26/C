//배열을 10개 만들어서 그 중 최대값을 찾는거
//배열은 랜덤을 이용하여 1~100사이의 값을 넣음

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main (){
    int i=0,max,min;
    int array[10];
    srand(time(NULL));
    for(i=0; i<10; i++)
    {
        array[i]=rand()%100 + 1; //1~100사이값
    }

    max=array[0];
    for(i=1; i<10 ; i++){
    if(max<array[i])
        max=array[i];
    } //최대값

    min=array[0];
    for(i=1; i<10 ; i++){
    if(min>array[i])
        min=array[i];
    } //최소값

    printf("최대값 %d\n",max);
    printf("최소값 %d\n",min);

    for(i=0; i<10; i++)
    {
        printf("%d\n",array[i]);
    }
}