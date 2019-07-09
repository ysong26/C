// 9개의 정수형 배열을 선언후
// 각배열에 2부터 2의 배수를 넣어준다
// 2 4 6 8 10 12 14 16 18
// 그리고 출력한다.

#include <stdio.h>
void main (){
    int array[9];
    
    
    for(int i=0; i<9; i++){
        array[i]=2*(i+1);
    }

    for(int i=0; i<9; i++)
    {
        printf("%d\n",array[i]);
    }

}