/*
#include <stdio.h>

int main (void){
    printf("���ڸ� �Է��� �ּ���:" );
    int i;
	scanf("%d",&i);
    if((i%2)==0){
    printf("¦���Դϴ�.");
}
else{
printf("Ȧ���Դϴ�."); 
}

return 0;
}
*/

//���ڿ� �ǵ��� ����� �Է¹޾� Ȧ���� �ݾ��� �ǵ�*����� ���
//¦���� �ǵ�/����� ���

#include <stdio.h>

int main (void){
    printf("���ڸ� �Է��� �ּ���:" );
    int number;
	scanf("%d",&number);

    printf("�ǵ��� �Է��� �ּ���:" );
    int money;
	scanf("%d",&money);

    printf("����� �Է��� �ּ���:" );
    int mul;
	scanf("%d",&mul);

    if((number%2)==1){    //Ȧ���϶�
    printf("�ݾ�%d",money*mul); //�ǵ�*���
}
else{ //�������� ¦��
printf("�ݾ�%d",money/mul); //�ǵ�/���
}

return 0;
}
