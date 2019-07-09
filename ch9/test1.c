//사용자로 숫자를 입력받는다.
//사용자의 숫자가 50인지 확인한다.
//예> 사용자의 숫자를 입력해 주세요:

 /* #include <stdio.h>

int main (void){
    printf("사용자의 숫자를 입력해 주세요:" );
    int i;
	scanf("%d",&i);
    if(i==50){
    printf("당첨 되셨습니다.");
}
else{
printf("다음기회에."); 
}

return 0;
}
*/

#include <stdio.h>

int main (void){
    printf("사용자의 숫자를 입력해 주세요:" );
    int i;
	scanf("%d",&i);
    if(i!=50){
    printf("다음기회에.");
}
else{
printf("당첨 되셨습니다."); 
}

return 0;
}