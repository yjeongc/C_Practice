#include <stdio.h>
#include <stdlib.h>
#include "ArrayBaseStack.h"

void StackInit(Stack* pstack)
{
    pstack->topIndex = -1;  //-1�� ����¸� �ǹ���.
}


//������ ����ִ��� Ȯ���ϴ� �Լ�
int SIsEmpty(Stack* pstack)
{
    if (pstack->topIndex == -1)  //������ ����ִٸ�
        return TRUE;
    else
        return FALSE;
}


//push �Լ�
void SPush(Stack* pstack, Data data)
{
    pstack->topIndex += 1; //������ �߰��� ���� �ε��� �� ����
    pstack->stackArr[pstack->topIndex] = data; //������ ����
}


//pop ���� ��� �Լ�
Data SPop(Stack* pstack)
{
    int rIdx;

    if (SIsEmpty(pstack))
    {
        printf("Stack Memory Error!");
        exit(-1);
    }

    rIdx = pstack->topIndex;  //������ �����Ͱ� ����� �ε��� �� ����
    pstack->topIndex -= 1; //pop������ ����� topIndex �� �ϳ� ����

    return pstack->stackArr[rIdx]; // �����Ǵ� ������ ��ȯ
}


//peek ���� ��� �Լ�. (�����͸� Ȯ�θ� �ϴ� �Լ�. ������ ����)
Data SPeek(Stack* pstack)

{
    if (SIsEmpty(pstack))
    {
        printf("Stack Memory Error!");
        exit(-1);
    }

    return pstack->stackArr[pstack->topIndex];  //�� ���� ����� ������ ��ȯ
}