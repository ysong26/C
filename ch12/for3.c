//�Էµ� ���� ����� ��� ���

#include <stdio.h>
int main(void) {
    int i,input_num,count=0;
printf("���� ������ �Է��Ͻÿ�: ");
scanf("%d",&input_num);

for (i=1; input_num>=i; i++){
    if ((input_num%i)==0){
printf("%d ",i);
count++;
}

}
//printf("����� ������ %d �� �Դϴ�.",count);
if(count==2)
printf("�Ҽ��Դϴ�.");

return 0;
}