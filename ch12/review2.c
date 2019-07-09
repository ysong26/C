#include <stdio.h>
int main(void) {
    int i,j,n;

printf("숫자를 입력해주세요: ");
scanf("%d",& n);

for (i=1;  i<=n; i++){
    printf("%d \n",i);
}
for (i=n;  i>1; i--) //거꾸로 
{
    printf("%d \n",i);
}


return 0;
}