//�� ���� �Է¹޾Ƽ� ���� ���� ���

#include <stdio.h>

int main (void){
    int n1,n2;
    printf("���ڸ� �ΰ� �Է��� �ּ���:" );
	scanf("%d %d",&n1,&n2);

    if(n1>n2){ //n1�� �� ũ�ٸ�? (�������)
        printf("�������� %d",n2); //n2�� �� �۴ٴ� �ǹ�
    }
    else{ //(�ƴҰ��)
        printf("�������� %d",n1); //�ƴϸ� n1�� �۴ٴ� �ǹ�
    }
return 0;
}