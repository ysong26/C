//�ݺ� Ƚ���� ���� �ֻ��� Ȯ�� ���ϱ�
//�ֻ��� ���� Ƚ��->Ƚ������->�� ���ݳ��� Ȯ��
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
int dice,count,i;
int dice_1=0, dice_2=0, dice_3=0, dice_4=0, dice_5=0, dice_6=0; //�� ���� �� �ʱ�ȭ
srand(time(NULL)); //�����Ҷ����� ����
//0.�ݺ�Ƚ�� �ޱ�
printf("�ֻ��� �� ��?: ");
scanf("%d",&count);
//1.�ֻ��� ������
for(i=0; i<count; i++){
dice=rand()%6+1; //�ֻ��� ������(�ֻ��� �� Ȯ��) 1-6���� �ֻ���

switch (dice){ //2.�ֻ��� ����Ƚ�� ����
case 1: dice_1++; break; //1����Ƚ�� (���ö����� 1�� ���ϱ�)
case 2: dice_2++; break; //2����Ƚ��
case 3: dice_3++; break; //3����Ƚ��
case 4: dice_4++; break; //4����Ƚ��
case 5: dice_5++; break; //5����Ƚ��
case 6: dice_6++; break; //6����Ƚ��
    }
}
printf("1��(��) ���� Ȯ���� %f\n",(float)dice_1/count*100); //����Ƚ�� / ��üȽ�� * 100 �ؼ� Ȯ�����ϱ�
printf("2��(��) ���� Ȯ���� %f\n",(float)dice_2/count*100);
printf("3��(��) ���� Ȯ���� %f\n",(float)dice_3/count*100);
printf("4��(��) ���� Ȯ���� %f\n",(float)dice_4/count*100);
printf("5��(��) ���� Ȯ���� %f\n",(float)dice_5/count*100);
printf("6��(��) ���� Ȯ���� %f\n",(float)dice_6/count*100);

return 0;
}