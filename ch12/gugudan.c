#include <stdio.h>
int main(void) {

int i,x;
for(x=2; x<10; x++){

    for(i=1; i<=9; i++)
    {
        printf("%d * %d = %d \n",x,i,x*i);
    }
}
return 0;
}