//1.�μ��� �Է¹޾� ���ؼ� ����ϴ� ���α׷�
//������ 2.���ϴ� �κ��� �Լ��� �������

#include <stdio.h>
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);
int rem(int num1, int num2);
void main (){

int num1,num2,sum;
printf("�� ���� �Է����ּ���:");
scanf("%d %d",&num1, &num2);
sum=add(num1,num2);
printf("���� ���� %d",sum);
sum=sub(num1,num2);
printf("�� ���� %d",sum);
sum=mul(num1,num2);
printf("���� ���� %d",sum);
sum=div(num1,num2);
printf("���� ���� %d",sum);
sum=rem(num1,num2);
printf("������ ���� %d",sum);


}
int add(int num1, int num2){
    return num1+num2;
}

int sub(int num1, int num2){
    return num1-num2;
}

int mul(int num1, int num2){
    return num1*num2;
}

int div(int num1, int num2){
    return num1/num2;
}

int rem(int num1, int num2){
    return num1%num2;
}