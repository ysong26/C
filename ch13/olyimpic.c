//8���� �������� ���� ������ �Է¹޴´�.(���� ������ 1~200)
//�ִ������� �� ���ǰ� �ּ� ������ �� ������ ������ 6����
//���� ������ ������ ����� ����Ѵ�.
//���� ����� 
//������ ����
//150 �̻��� '�� ���߾��'
//100 ~ 150 ���̴� '���߾��'
//100 �̸��� '����ϼ���' �� ����Ѵ�.
#include <stdio.h>

void main()
{
    int i,value[8],max,min,sum=0,avg;
    for(i=0; i<8; i++){
        printf("%d��°������ �Է����ּ���.",i+1);
        scanf("%d",&value[i]);
    }
    max=value[0];
    for(i=1; i<8; i++){
        if(max<value[i])   
            max=value[i];
    }
    min=value[0];
    for(i=1; i<8; i++){
        if(min>value[i])
            min=value[i];
    }
    for(i=0;i<8;i++){
        sum+=value[i];
    }
    sum=sum-max-min;
    avg=sum/6;
    printf("������%d",avg);
    if(avg>=150)
        printf("�� ���߾��");
    else if(avg>=100)
        printf("���߾��");
    else
        printf("��� �ϼ���.");    
}

