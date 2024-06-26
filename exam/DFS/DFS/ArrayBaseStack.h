#ifndef __AB_STACK_H__
#define __AB_STACK_H__

#define TRUE    1
#define FALSE   0
#define TRUE    1
#define STACK_LEN 100  //스택의 최대 크기

typedef int Data;

typedef struct _arrayStack
{
    Data stackArr[STACK_LEN]; //스택의 실제 데이터를 저장하는 배열
    int topIndex;  //저장된 데이터의 위치를 가리킴
} ArrayStack;

typedef ArrayStack Stack;

void StackInit(Stack* pstack);  //스택의 초기화
int SIsEmpty(Stack* pstack); //스택이 비었는지 확인

void SPush(Stack* pstack, Data data); //스택의 push 연산
Data SPop(Stack* pstack);  // 스택의 pop 연산
Data SPeek(Stack* pstack); //스택의 peek 연산

#endif
