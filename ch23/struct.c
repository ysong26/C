#include <stdio.h>

    struct square{
    int x;
    int y;
    };

void main ()
{
    struct square nemo, nemo1;

    nemo.x=10;
    nemo.y=20;
    nemo1.x=20; nemo1.y=30;
    printf("%d %d",nemo.x,nemo.y);
}

