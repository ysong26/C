// 9���� ������ �迭�� ������
// ���迭�� 2���� 2�� ����� �־��ش�
// 2 4 6 8 10 12 14 16 18
// �׸��� ����Ѵ�.

#include <stdio.h>
void main (){
    int array[9];
    
    
    for(int i=0; i<9; i++){
        array[i]=2*(i+1);
    }

    for(int i=0; i<9; i++)
    {
        printf("%d\n",array[i]);
    }

}