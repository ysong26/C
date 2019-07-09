//참조에 의한 호출 (Call by reference)
//값에 의한 호출 (Call by value)

#include <stdio.h>
void swap(int *p1, int *p2);
void main(){

    int a=3,b=4;
    swap(&a,&b); //주소값
    printf("a=%d b=%d",a,b);


}
void swap(int *p1, int *p2){
    //p1<= a의 주소값 
    //*p1 <= p1 가르키는 값 즉a의 값
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}