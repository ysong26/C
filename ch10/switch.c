#include <stdio.h>
int main (void){

	 int input;

	printf("���� �Է��ϼ���" );
    scanf("%d",&input);

if((input >=1) && (input <=12)) {

    switch (input)
    {
    case 4:
    case 6:
    case 9:
    case 11: printf("%d���� �ϼ��� 30�Դϴ�.",input);    
        break;
    case 2:  printf("%d���� �ϼ��� 28�Դϴ�.",input);
        break;
    default: printf("%d���� �ϼ��� 31�Դϴ�",input);
        break;
    }
}
	return 0;
}
