#include <stdio.h>
int get_larger(int x, int y);

void main (){

int num1,num2;
printf("�� ���� �Է����ּ���:");
scanf("%d %d",&num1,&num2);
    printf("�� �� �߿��� ū ���� %d �Դϴ�.",get_larger(num1, num2));

 return 0;
}

int get_larger(int x, int y)
{
 if(x>y) return(x);
    else return(y);
}
