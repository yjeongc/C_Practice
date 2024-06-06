#ifndef __AB_STACK_H__
#define __AB_STACK_H__

#define TRUE    1
#define FALSE   0
#define TRUE    1
#define STACK_LEN 100  //������ �ִ� ũ��

typedef int Data;

typedef struct _arrayStack
{
    Data stackArr[STACK_LEN]; //������ ���� �����͸� �����ϴ� �迭
    int topIndex;  //����� �������� ��ġ�� ����Ŵ
} ArrayStack;

typedef ArrayStack Stack;

void StackInit(Stack* pstack);  //������ �ʱ�ȭ
int SIsEmpty(Stack* pstack); //������ ������� Ȯ��

void SPush(Stack* pstack, Data data); //������ push ����
Data SPop(Stack* pstack);  // ������ pop ����
Data SPeek(Stack* pstack); //������ peek ����

#endif
