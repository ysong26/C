#include <stdio.h>

//typedef int JUNGSU; 


    typedef struct point{
        int x,y,z;
    }abc; //typedef abc�ϸ� struct point��� abc��� ��ü �ϰڴٴ� �ǹ�

    void main (){
    abc p1, p2;

    p1.x=10, p1.y=20, p1.z=30;
    p2=p1;
    printf("%d %d %d\n",p1.x,p1.y,p1.z);
    printf("%d %d %d\n",p2.x,p2.y,p2.z);
    //if(p1==p2) �� �� �ƴ϶� �̷��� ���X
    if(p1.x==p2.x && p1.y==p2.y && p1.z==p2.z){
        printf("�Ȱ���");
    }//p1==p2 �̰� ������
    struct point p3[100];
    p3[0].x=1;
}