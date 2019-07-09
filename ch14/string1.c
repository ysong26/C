#include <stdio.h>

void main (){
    int i;
    char str[4]={'a','b','c','\0'};
    char str1[4]="abc"; //위에있는거랑 똑같음 abc Null값까지 다들어감
    int a[]={0,1,2}; //크기에 맞는 개수로 알아서 설정됨
    char str2[]="Hello"; //크기에 맞는 개수로 알아서 설정됨
    char str3[]="안녕하세요";
    for(int i=0;  ;i++){
    if(str[i]=='\0')break; //Null나올때까지 찍기
    printf("%c",str[i]);
    printf("%c",str1[i]);
    }
    printf("\n%s",str2);
    printf("\n%s",str3);
    i=0;
    while(str3[i]!='\0'){ //Null이 아닐때까지 반복
    i++;
    }
    printf("\nstr의 배열의 개수는 %d",i+1);//한글 1글자가 =영어2글자라서 10에다가 Null까지 +1
}