#include <stdio.h>

int main(void)
{
    char op; //기호를 입력받아야되서 character형
    int x,y,result; //숫자2개랑 결과값

    printf("수식을 입력하세요. \n");
    printf("예)2 * 5 \n");

    scanf("%d %c %d", &x,&op,&y); //숫자 기호 숫자받기 scanf에 넣을땐 '&'잊지말기!

    if (op == '+') //op가 + 일 경우
    result = x+y; //결과값 더하기

    else if (op == '-') //op가 - 일 경우
    result = x-y; //결과값 빼기

    else if (op == '*') //op가 * 일 경우
    result = x*y; //결과값 곱하기

    else if (op == '/') //op가 / 일 경우
    result = x/y; //결과값 나누기

    else if (op == '%') //op가 % 일 경우
    result = x%y; //나머지값 구하기

    else //그 외의 경우
    printf("잘못입력됨\n");
    
    printf("%d %c %d = %d", x,op,y,result); //숫자 기호(%c) 숫자 = 결과를 출력함

    return 0;
}