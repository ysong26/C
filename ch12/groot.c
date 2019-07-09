//물을 입력받음 (0,1)
//물이없으면 아임그루트,춤추기
//물있으면 무한루프

#include <stdio.h>
int main(void) {
    int water;

for(;;){
printf("물을 입력해주세요(0은 없음,1은 있음): ");
scanf("%d",&water);

if(water==1)
    printf("아임그루트,춤추기\n");
else
    printf("춤 멈춤\n");
}

return 0;
}