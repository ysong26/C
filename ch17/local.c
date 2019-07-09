//helloprint 함수만들자 parameter로 1~3의 값을 받아서 
//"1: 안녕하세요."
//"2: 반갑습니다."
//"3: 사랑합니다."
//반환값은 미존재(void) ,단 출력에서 숫자는 입력된 값으로 출력
//사용법 helloprint(숫자);
#include <stdio.h>
void helloprint(int num);
 int a=5; //전역변수

void main (){
    helloprint(1);
    //a=6; 지역변수
    helloprint(2);
    helloprint(3);
    printf("%d\n",a);

}

void helloprint (int num){
    if (num ==1){
        //int b=0; 지역변수 if블록 안에서만 존재함 
        printf("%d 안녕하세요.\n",num);
    }

    else if (num ==2)
    {
        printf("%d 반갑습니다.\n",num); 
    }
    else 
    printf("%d 사랑합니다.\n",num);
    printf("%d\n",a);
}