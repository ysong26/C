//1.����ڷκ��� ���� ���� �Է¹޴´�.
//2.���ǰ��� �Է¹޴´�.
//3.�Ž������� ��� �� �Ž������� ������ ���
// (��>�Ž��� ���� 7210�� �̸� ��õ�� 1 õ��2 ���2 �ʿ�1)

#include <stdio.h>
int main (void){
 int money,price;
	
    printf("�����κ��� ���� �� :" );
	scanf("%d",&money);

	printf("���ǰ�:");
	scanf("%d",&price);
   
   int change;
   change= money-price;

    printf("��õ�� %d : \n",change/5000  );
    printf("õ�� %d : \n", (change%5000) /1000 );
    printf("����� %d : \n",(change%5000%1000) /500 );
    printf("��� %d : \n",  (change%5000%1000%500) /100 );
    printf("���ʿ� %d : \n",(change%5000%1000%500%100) /50  );
    printf("�ʿ� %d : \n",  (change%5000%1000%500%100%50) /10);

	return 0;
}