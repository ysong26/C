#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void)
{
int i=0,num;
srand(time(NULL));

while (i<10){
    num=rand()%100 + 1; //��ǻ�Ͱ� ���Ƿ� ���� �־��� 1~100����
    printf("%d\n",num);
    i++;
}
return 0;
}