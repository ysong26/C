#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 
int main(void)
{
    int i,j=0;
    int com[3]={0}; //��ǻ�Ϳ��� �߻��� 3���� ������ �����ϴ� �迭
    int mine[3]={0}; //����ڰ� ���� 3���� ���ڸ� �����ϴ� �迭
    int strike=0; //STRIKE ��������
    int ball=0; //BALL��������
    int game=0; //GAMEȽ������
    int end=0; //������ ������������ ����
   
 
    while(com[0]==com[1]||com[0]==com[2]||com[1]==com[2]) //���������ڰ� �ϳ��� ������ �ݺ��ؼ� �����߻�->�������� �ٸ����� �߻�
    {
        srand((int)time(NULL));//���� �ð��� �̿��ؼ� ���� ����
        
        for(i=0; i<3; i++)
        {
        com[i]=(rand()%9)+1;//���� 1~9������ 3���ݺ��Ͽ� COM�迭�� ����(COM[0],COM[1],COM[2])
        }
    }
    //------------------------��ǻ�Ͱ� ���� ������ ���ڸ� �迭�� ����--------------------------     
 
 
    while(end==0) //END������ 0�̸� ��� ���� (3STRIKE�� �ɶ����� ����)
    {
        printf("���δٸ� ���� 0~9���� ������ �Է����ּ���.\n");
        for(i=0;i<3;i++)
        {
            scanf("%d",&mine[i]);//������ �ٸ� ���ڸ� ����ڿ��Լ� �Է¹޾� MINE�迭�� ����(MINE[0],MINE[1],MINE[2])
        }
 
        if(mine[0]==mine[1]||mine[0]==mine[2]||mine[1]==mine[2]) //���������ڰ� �ϳ��� ������ ���ӽ��ۺҰ���
            {
                printf("�Է��� ���ڰ� �ߺ��Ǿ����ϴ�.������ �ٽý������ּ���.\n");
                break; //�ٷ� ���� �ݺ����� ��������, �� WHILE���� ���������Ե�.
            }
    
 
     //      printf("%d, %d, %d // %d, %d,%d\n",com[0],com[1],com[2],mine[0],mine[1],mine[2]); //TEST
    //------------------------------����ڿ��Լ� �Է¹���------------------------------------------------
        for(i=0; i<3;i++) //FOR�� 3�� �ݺ� ����
        {        
            if (com[i]==mine[i]) //��ǻ�ͳ����� ������Ǽ��ڸ� �����迭���� ���Ͽ�����, ���� ���ڰ� ���ٸ�
            {
                strike=strike+1; //STRIKE�� ���ڸ� +1���������ش�
            }
        }
 
        for(i=0; i<3;i++) //FOR�� 3�� �ݺ� ����
        {
            for(j=0; j<3; j++) //FOR�� 3�� �ݺ� ���� =>�� i=0, j=0,1,2/ i=1,j=0,1,2/ i=2, j=0,1,2 9�����ư�
            {
                if(com[i]==mine[j]) //�������ڰ��ִ��� ���Ͽ�
                {
                    ball=ball+1; //���̶�� ball�� 1���������ش�.
                    break; //���̶�� com[i]�� i�� �������� ���Ѵ�.
                }
            }
 
        }
 
        
        game++;//gameȽ���� �Ǵ��ϴ� ������ �������ѹ� ���������� ���������ش�.
        printf("%d��° ���� : %d strike %d ball\n",game,strike,ball-strike);//ball�� ������ �� ball���� strike�� �� ������. 
 
        if(strike==3)
        {
            end=1; //���� 3strike�� �ȴٸ�, end�� 1���־� ���� while���� �����Ű�� �ʰ� ������.
        }
        strike=0; //3strike�� �ƴ϶�� strike�� ball�� �ʱ�ȭ ���ش�.
        ball=0;
        
 
              
    }   
 
        
    return 0;
}