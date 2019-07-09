#include <stdio.h>
void aaa();

void main(){
    aaa();
    aaa();
    aaa();
}

void aaa(){
    static int i=0;
    i++;
    printf("%d\n",i);
}