//������ ���α׷� 
//����=1; ����=2; ��=3;
//��> ������Է�(����=1,����=2;��=3):
//��ǻ�� �������� �������� ������ ������ ����ϴ� ���α׷�
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SCISSORS 1
#define ROCK 2
#define PAPER 3

void main()
{
   srand(time(NULL));   //���� �õ尪 �ʱ�ȭ
   int com,human;
    for(;;){   
        com=rand()%3+1;  //��ǻ�� ����
        /************** �׽�Ʈ �ڵ� **********************/
        if(com==1) printf("��ǻ�ʹ� ����(%d)\n",com);
        else if(com==2)  printf("��ǻ�ʹ� ����(%d)\n",com);
        else printf("��ǻ�ʹ� ��(%d)\n",com);  
        /**************************************************/     

        printf("����(1) ����(2) ��(3) �� �Է��� �ּ���:");
        scanf("%d",&human);
        if(com==human)
                printf("�����ϴ�.\n");
        else if((com==3 && human==1) || (com==1 && human==2) || (com==2 && human==3) )
                printf("�̰���ϴ�.\n");
        else
                printf("�����ϴ�.\n");
        printf("------------\n");
    }
}