#include <stdio.h>
void main(){
 //������ �迭 a�� ����
 int a[]={10,20,30,40};

 //a��� �迭�� �ּҸ� &a[0]�� ����.
 printf("%d\n",*a);
 printf("%d\n",*(a+1));

//�迭 �ּҰ� Ȯ��
printf("%d %d %d %d\n",&a[0],&a[1],&a[2],&a[3]);//����ϸ� int�� �� 4�� �ö�
printf("%d %d %d %d",&a,&a+1,&a+2,&a+3);

}