#include <stdio.h>
void printch(char x,int y);
void main ()
{
char x;
int y;

printf("���� ���� �Է�:");
scanf("%c %d",&x,&y);
printch(x,y);
}
void printch(char x1,int y1)
{
      int i;
    for (i=0 ; i<y1 ; i++ )
    {
    printf("%c",x1);
    }
}
