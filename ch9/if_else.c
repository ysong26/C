//정수를 입력받아서 출력한다.

#include <stdio.h>

int main (void){
    printf("정수를 입력해주세요:" );
    int i;
	scanf("%d",&i);
    printf("입력한 정수는 %d이고",i); 
    if(i>10){
    printf("입력한수가 10보다 큽니다.");
}
else{
printf("입력한수가 10보다 작습니다."); 
}

return 0;
}