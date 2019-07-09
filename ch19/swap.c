//swap
//a,b의 정수형 변수를 선언 후 값을 넣고
//두 값을 교환하여 출력
//ex) a=3, b=4 초기화 후
// a와 4를 출력하면 4,3으로 출력
#include <stdio.h>
void main(){
    int a=3, b=4;
    //교환
    int temp; //변수추가 
    temp=a; //a넣어두고
    a=b; //a에 b값넣고
    b=temp; //b값에 a값 넣음

    printf("a=%d b=%d",a,b);
}