#include <stdio.h>

void main(){
    int a=100;
    int *p;
    printf("%d\n",a);
    printf("%d\n",&a); //&=�ּ� ��(��ġ)
    p=&a; //p�� a�� �ּҸ� ����
    printf("%d\n",p);
    printf("%d\n",*p);
}