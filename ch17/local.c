//helloprint �Լ������� parameter�� 1~3�� ���� �޾Ƽ� 
//"1: �ȳ��ϼ���."
//"2: �ݰ����ϴ�."
//"3: ����մϴ�."
//��ȯ���� ������(void) ,�� ��¿��� ���ڴ� �Էµ� ������ ���
//���� helloprint(����);
#include <stdio.h>
void helloprint(int num);
 int a=5; //��������

void main (){
    helloprint(1);
    //a=6; ��������
    helloprint(2);
    helloprint(3);
    printf("%d\n",a);

}

void helloprint (int num){
    if (num ==1){
        //int b=0; �������� if��� �ȿ����� ������ 
        printf("%d �ȳ��ϼ���.\n",num);
    }

    else if (num ==2)
    {
        printf("%d �ݰ����ϴ�.\n",num); 
    }
    else 
    printf("%d ����մϴ�.\n",num);
    printf("%d\n",a);
}