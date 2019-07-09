#include <stdio.h>

void main(){
    int a=100;
    int *p;
    printf("%d\n",a);
    printf("%d\n",&a); //&=주소 값(위치)
    p=&a; //p에 a값 주소를 넣음
    printf("%d\n",p);
    printf("%d\n",*p);
}