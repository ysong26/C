//입력된 수의 약수를 모두 출력

#include <stdio.h>
int main(void) {
    int i,input_num,count=0;
printf("양의 정수를 입력하시오: ");
scanf("%d",&input_num);

for (i=1; input_num>=i; i++){
    if ((input_num%i)==0){
        count++;
        if(count>2) break;
    }

}
if(count==2)
printf("소수입니다.");

return 0;
}