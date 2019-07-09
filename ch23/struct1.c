#include <stdio.h>

//typedef int JUNGSU; 


    typedef struct point{
        int x,y,z;
    }abc; //typedef abc하면 struct point대신 abc라고 대체 하겠다는 의미

    void main (){
    abc p1, p2;

    p1.x=10, p1.y=20, p1.z=30;
    p2=p1;
    printf("%d %d %d\n",p1.x,p1.y,p1.z);
    printf("%d %d %d\n",p2.x,p2.y,p2.z);
    //if(p1==p2) 값 비교 아니라 이런거 허용X
    if(p1.x==p2.x && p1.y==p2.y && p1.z==p2.z){
        printf("똑같다");
    }//p1==p2 이건 허용안함
    struct point p3[100];
    p3[0].x=1;
}