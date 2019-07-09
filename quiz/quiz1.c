//반복 횟수에 따른 주사위 확률 구하기
//주사위 던질 횟수->횟수저장->각 눈금나올 확률
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
int dice,count,i;
int dice_1=0, dice_2=0, dice_3=0, dice_4=0, dice_5=0, dice_6=0; //각 눈금 값 초기화
srand(time(NULL)); //실행할때마다 랜덤
//0.반복횟수 받기
printf("주사위 몇 번?: ");
scanf("%d",&count);
//1.주사위 던지기
for(i=0; i<count; i++){
dice=rand()%6+1; //주사위 던지기(주사위 눈 확인) 1-6까지 주사위

switch (dice){ //2.주사위 나온횟수 저장
case 1: dice_1++; break; //1나온횟수 (나올때마다 1씩 더하기)
case 2: dice_2++; break; //2나온횟수
case 3: dice_3++; break; //3나온횟수
case 4: dice_4++; break; //4나온횟수
case 5: dice_5++; break; //5나온횟수
case 6: dice_6++; break; //6나온횟수
    }
}
printf("1이(가) 나온 확률은 %f\n",(float)dice_1/count*100); //나온횟수 / 전체횟수 * 100 해서 확률구하기
printf("2이(가) 나온 확률은 %f\n",(float)dice_2/count*100);
printf("3이(가) 나온 확률은 %f\n",(float)dice_3/count*100);
printf("4이(가) 나온 확률은 %f\n",(float)dice_4/count*100);
printf("5이(가) 나온 확률은 %f\n",(float)dice_5/count*100);
printf("6이(가) 나온 확률은 %f\n",(float)dice_6/count*100);

return 0;
}