#include <stdio.h>
int main (void){

	 int input;

	printf("달을 입력하세요" );
    scanf("%d",&input);

if((input >=1) && (input <=12)) {

    switch (input)
    {
    case 4:
    case 6:
    case 9:
    case 11: printf("%d월의 일수는 30입니다.",input);    
        break;
    case 2:  printf("%d월의 일수는 28입니다.",input);
        break;
    default: printf("%d월의 일수는 31입니다",input);
        break;
    }
}
	return 0;
}
