// 0,1,2,3 �� �Է¹޴´�.
// �Է¹��� ���� �ѱ۷� ����Ѵ�.
// �� �ܼ��ڴ� �߸��� �Է��Դϴ�
#include <stdio.h>
int main (void){
	 int input;
	printf("���� �Է��ϼ���" );
    scanf("%d",&input);

    if(input==0)
        printf("�Էµ� ���ڴ� 0�Դϴ�.");
    else if(input==1)
        printf("�Էµ� ���ڴ� 1�Դϴ�.");
    else if(input==2)
        printf("�Էµ� ���ڴ� 2�Դϴ�.");
    else if(input==3)
        printf("�Էµ� ���ڴ� 3�Դϴ�.");
    else 
        printf("�ٽ� �Է��� �ּ���.");
	return 0;
}