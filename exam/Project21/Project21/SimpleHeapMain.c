//#include <stdio.h>
//#include "SimpleHeap.h"
//
//int main()
//{
//    Heap heap;
//    HeapInit(&heap);  //���� �ʱ�ȭ
//
//    HInsert(&heap, 'A', 1);  //���� 'A'�� �ְ��� �켱������ ����
//    HInsert(&heap, 'B', 2);  //���� 'B'�� �ι�° �켱������ ����
//    HInsert(&heap, 'C', 3);  //���� 'C'�� �ι�° �켱������ ����
//    printf("%c \n", HDelete(&heap));
//
//    HInsert(&heap, 'A', 1);
//    HInsert(&heap, 'B', 2);
//    HInsert(&heap, 'C', 3);
//    printf("%c \n", HDelete(&heap));
//
//    while (!HIsEmpty(&heap))
//        printf("%c \n", HDelete(&heap));
//
//
//    return 0;
//}