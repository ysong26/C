#include <stdio.h>
int main(void) {
    int i,j,n;

printf("���ڸ� �Է����ּ���: ");
scanf("%d",& n);

for (i=1;  i<=n; i++){
    printf("%d \n",i);
}
for (i=n;  i>1; i--) //�Ųٷ� 
{
    printf("%d \n",i);
}


return 0;
}