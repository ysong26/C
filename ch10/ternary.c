#include <stdio.h>
int main (void){

	int input,a;
    printf("�����Է�:");
    scanf("%d",input);

/*
    if(input==0)
        a=0;
    else
    a=1;
*/

a= (input==0) ? 0 : 1;

printf("%d",a);
	return 0;
}