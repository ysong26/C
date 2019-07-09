#include <stdio.h>
int main (void){

int i=0,input;
printf("몇번 반복하시겠습니까?");
scanf("%d",&input);

while(i<input){
    printf("안녕하세요.\n");
    i++;
    }
    return 0;
}