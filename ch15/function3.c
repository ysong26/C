//1.두수를 입력받아 더해서 출력하는 프로그램
//성공시 2.더하는 부분을 함수로 만들어사용

#include <stdio.h>
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);
int rem(int num1, int num2);
void main (){

int num1,num2,sum;
printf("두 수를 입력해주세요:");
scanf("%d %d",&num1, &num2);
sum=add(num1,num2);
printf("더한 값은 %d",sum);
sum=sub(num1,num2);
printf("뺀 값은 %d",sum);
sum=mul(num1,num2);
printf("곱한 값은 %d",sum);
sum=div(num1,num2);
printf("나눈 값은 %d",sum);
sum=rem(num1,num2);
printf("나머지 값은 %d",sum);


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