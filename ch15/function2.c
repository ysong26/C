//�Էµ� ���ڸ�ŭ *���
#include <stdio.h>
void printstar(int num);

void main() {
    int num,i;

printf("�ݺ� Ƚ�� �Է�: ");
scanf("%d",&num);

    printstar(num);
}

void printstar(int num)
{
    int i;
    for (i=1 ; i<=num ; i++ )
    {
    printf("*");
    }
}


