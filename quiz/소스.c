#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(NULL));

	int answerDoor; //�ڵ���
	int yourChoise; //����� ����
	int opendDoor=0;//����� ��
	int limit;      //�ݺ�Ƚ��
	int notChangingWin = 0; //�̺��� �� ��
	int changingWin = 0;    //���� �� ��
	double notChangingPercent = 0.0; //�̺��� �� �·�
	double ChangingPercent = 0.0;    //���� �·�

	printf("1�� ��, 2�� ��, 3�� ���� �ֽ��ϴ�.\n");
	printf("�� �� �������� �ڵ����� �ϳ��� �� �ڿ� ����ֽ��ϴ�.\n");
	printf("���ݺ��� �ԷµǴ� ȸ���� �õ��Ͽ� �·��� �����ϰڽ��ϴ�.\n");
	scanf("%d", &limit);
	
    for (int i = 0; i < limit; i++) {
	answerDoor = (rand() % 3)+1;//1~3�� �� �� �ϳ��� �ڵ����� ����ֵ��� ����
	yourChoise = (rand() % 3) + 1;

	if (answerDoor == yourChoise) notChangingWin++;
	}
	notChangingPercent = (double)notChangingWin / limit * 100;

	printf("�ٲ��� �ʴ� ��� Ȯ�� = %5.2lf\n", notChangingPercent);
/*********************************************************************************************** */
	for (int i = 0; i < limit; i++) {
		answerDoor = (rand() % 3) + 1;//1~3�� �� �� �ϳ��� �ڵ����� ����ֵ��� ����
		yourChoise = (rand() % 3) + 1;
		
        //1. �ڵ����� �������� ���
        if(answerDoor==yourChoise){
            do{
            opendDoor = (rand() % 3) + 1;
            }while(opendDoor == yourChoise);
        }
       
        else{
            if((answerDoor!=1) && (yourChoise!=1))
                opendDoor=1;
            
            else if ((answerDoor!=2) && (yourChoise!=2))
                opendDoor=2;
            else
            opendDoor=3;
        }  

		switch (yourChoise) {//���� �� ���� �����ϵ��� ��.
			case 1: {//1�� ���� ��� 2�� Ȥ�� 3���� �ǵ��� ��
				if (opendDoor == 2) yourChoise = 3;
				else yourChoise = 2;
                break;
			}
			case 2: {
				if (opendDoor == 3) yourChoise = 1;
				else yourChoise = 3;
                break;
			}
			case 3: {
				if (opendDoor == 1) yourChoise = 2;
				else yourChoise = 1;
                break;
			}
		}
		if (answerDoor == yourChoise) changingWin++;
	}

	ChangingPercent = (double)changingWin / limit * 100;

	printf("�ٲٴ� ��� Ȯ�� = %5.2lf\n", ChangingPercent);

}

