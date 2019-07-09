#include <stdio.h>
void main(){
 //정수형 배열 a를 선언
 int a[]={10,20,30,40};

 //a라는 배열의 주소며 &a[0]와 같다.
 printf("%d\n",*a);
 printf("%d\n",*(a+1));

//배열 주소값 확인
printf("%d %d %d %d\n",&a[0],&a[1],&a[2],&a[3]);//출력하면 int라 값 4씩 올라감
printf("%d %d %d %d",&a,&a+1,&a+2,&a+3);

}