//swap
//a,b�� ������ ������ ���� �� ���� �ְ�
//�� ���� ��ȯ�Ͽ� ���
//ex) a=3, b=4 �ʱ�ȭ ��
// a�� 4�� ����ϸ� 4,3���� ���
#include <stdio.h>
void main(){
    int a=3, b=4;
    //��ȯ
    int temp; //�����߰� 
    temp=a; //a�־�ΰ�
    a=b; //a�� b���ְ�
    b=temp; //b���� a�� ����

    printf("a=%d b=%d",a,b);
}