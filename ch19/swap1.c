//������ ���� ȣ�� (Call by reference)
//���� ���� ȣ�� (Call by value)

#include <stdio.h>
void swap(int *p1, int *p2);
void main(){

    int a=3,b=4;
    swap(&a,&b); //�ּҰ�
    printf("a=%d b=%d",a,b);


}
void swap(int *p1, int *p2){
    //p1<= a�� �ּҰ� 
    //*p1 <= p1 ����Ű�� �� ��a�� ��
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}