//���� �Է¹��� (0,1)
//���̾����� ���ӱ׷�Ʈ,���߱�
//�������� ���ѷ���

#include <stdio.h>
int main(void) {
    int water;

for(;;){
printf("���� �Է����ּ���(0�� ����,1�� ����): ");
scanf("%d",&water);

if(water==1)
    printf("���ӱ׷�Ʈ,���߱�\n");
else
    printf("�� ����\n");
}

return 0;
}