#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void)
{
int i=0,num;
srand(time(NULL));

while (i<10){
    num=rand()%100 + 1; //컴퓨터가 임의로 값을 넣어줌 1~100까지
    printf("%d\n",num);
    i++;
}
return 0;
}