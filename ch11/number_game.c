#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void)
{

int input,input_count,max_num,min_num;
printf("�ݺ� Ƚ���� �Է����ּ���:");
scanf("%d",&input_count);
printf(" ���� ������ ���� �Է����ּ���: ");
scanf("%d %d",&min_num,&max_num);
srand(time(NULL));
int num,count=0;
num=rand()%(max_num +1 - min_num) + min_num ; //1~100���� ����
printf("%d\n",num); //��

do{
    printf("���ڸ� �Է����ּ���:");
    scanf("%d",&input);
    if(input > num) 
        printf("�Էµ� ���ں��� �۽��ϴ�.\n");
    else if(input < num)
        printf("�Էµ� ���ں��� Ů�ϴ�.\n");
        count++;
}while(!(input == num || count >= input_count)) ;

if(input== num)
printf("�����Դϴ�.");

else
   printf("Ƚ���ʰ�");
    return 0;
}