#include <stdio.h>

int main(void)
{
    char op; //��ȣ�� �Է¹޾ƾߵǼ� character��
    int x,y,result; //����2���� �����

    printf("������ �Է��ϼ���. \n");
    printf("��)2 * 5 \n");

    scanf("%d %c %d", &x,&op,&y); //���� ��ȣ ���ڹޱ� scanf�� ������ '&'��������!

    if (op == '+') //op�� + �� ���
    result = x+y; //����� ���ϱ�

    else if (op == '-') //op�� - �� ���
    result = x-y; //����� ����

    else if (op == '*') //op�� * �� ���
    result = x*y; //����� ���ϱ�

    else if (op == '/') //op�� / �� ���
    result = x/y; //����� ������

    else if (op == '%') //op�� % �� ���
    result = x%y; //�������� ���ϱ�

    else //�� ���� ���
    printf("�߸��Էµ�\n");
    
    printf("%d %c %d = %d", x,op,y,result); //���� ��ȣ(%c) ���� = ����� �����

    return 0;
}