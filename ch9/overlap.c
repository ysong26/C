//���ڸ� �Է¹޾Ƽ� 100�̻��̸�
//100�̻��Դϴ�.
//��ø����ø�ϴ°�

#include <stdio.h>
int main (void){
    int x;
	printf("���� �Է��ϼ���" );
    scanf("%d",&x);

    if(x>=100){
        printf("100�̻��Դϴ�.");
            if(x>200)
                printf("200�̻��Դϴ�.");
            else
                printf("200�����Դϴ�.");
    }
    else
    {
       if(x<=50)
            printf("50�����Դϴ�.");
    }
return 0;
}