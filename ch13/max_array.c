//�迭�� 10�� ���� �� �� �ִ밪�� ã�°�
//�迭�� ������ �̿��Ͽ� 1~100������ ���� ����

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main (){
    int i=0,max,min;
    int array[10];
    srand(time(NULL));
    for(i=0; i<10; i++)
    {
        array[i]=rand()%100 + 1; //1~100���̰�
    }

    max=array[0];
    for(i=1; i<10 ; i++){
    if(max<array[i])
        max=array[i];
    } //�ִ밪

    min=array[0];
    for(i=1; i<10 ; i++){
    if(min>array[i])
        min=array[i];
    } //�ּҰ�

    printf("�ִ밪 %d\n",max);
    printf("�ּҰ� %d\n",min);

    for(i=0; i<10; i++)
    {
        printf("%d\n",array[i]);
    }
}