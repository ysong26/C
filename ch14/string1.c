#include <stdio.h>

void main (){
    int i;
    char str[4]={'a','b','c','\0'};
    char str1[4]="abc"; //�����ִ°Ŷ� �Ȱ��� abc Null������ �ٵ�
    int a[]={0,1,2}; //ũ�⿡ �´� ������ �˾Ƽ� ������
    char str2[]="Hello"; //ũ�⿡ �´� ������ �˾Ƽ� ������
    char str3[]="�ȳ��ϼ���";
    for(int i=0;  ;i++){
    if(str[i]=='\0')break; //Null���ö����� ���
    printf("%c",str[i]);
    printf("%c",str1[i]);
    }
    printf("\n%s",str2);
    printf("\n%s",str3);
    i=0;
    while(str3[i]!='\0'){ //Null�� �ƴҶ����� �ݺ�
    i++;
    }
    printf("\nstr�� �迭�� ������ %d",i+1);//�ѱ� 1���ڰ� =����2���ڶ� 10���ٰ� Null���� +1
}