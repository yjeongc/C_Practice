#include <stdio.h>
#include "UsefulHeap.h"


int DataPriorityComp(char ch1, char ch2) // �켱���� �� �Լ�
{
    return ch2 - ch1;
}


int main()
{
    Heap heap;
    HeapInit(&heap, DataPriorityComp);  //���� �ʱ�ȭ

    HInsert(&heap, 'A');  //���� 'A'�� �ְ��� �켱������ ����
    HInsert(&heap, 'B');  //���� 'B'�� �ι�° �켱������ ����
    HInsert(&heap, 'C');  //���� 'C'�� �ι�° �켱������ ����
    printf("%c \n", HDelete(&heap));

    HInsert(&heap, 'A');
    HInsert(&heap, 'B');
    HInsert(&heap, 'C');
    printf("%c \n", HDelete(&heap));

    while (!HIsEmpty(&heap))
        printf("%c \n", HDelete(&heap));


    return 0;
}