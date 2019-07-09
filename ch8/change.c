//1.사용자로부터 받은 돈을 입력받는다.
//2.물건값을 입력받는다.
//3.거스름돈을 계산 후 거스름돈의 개수를 출력
// (예>거스름 돈이 7210원 이면 오천원 1 천원2 백원2 십원1)

#include <stdio.h>
int main (void){
 int money,price;
	
    printf("고객으로부터 받은 돈 :" );
	scanf("%d",&money);

	printf("물건값:");
	scanf("%d",&price);
   
   int change;
   change= money-price;

    printf("오천원 %d : \n",change/5000  );
    printf("천원 %d : \n", (change%5000) /1000 );
    printf("오백원 %d : \n",(change%5000%1000) /500 );
    printf("백원 %d : \n",  (change%5000%1000%500) /100 );
    printf("오십원 %d : \n",(change%5000%1000%500%100) /50  );
    printf("십원 %d : \n",  (change%5000%1000%500%100%50) /10);

	return 0;
}