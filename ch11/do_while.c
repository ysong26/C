#include <stdio.h>
int main (void){

int sum=0;
int i=1;

do{ //�ݺ����Ǻ��� ����
sum = sum + i;
i++;

}while(i<=10);

printf("1���� 10���� ���Ѱ��� %d�Դϴ�.",sum);
    return 0;
}