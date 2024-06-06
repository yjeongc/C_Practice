#include <stdio.h>
#include <stdlib.h>
#include "ArrayBaseStack.h"

void StackInit(Stack* pstack)
{
    pstack->topIndex = -1;  //-1은 빈상태를 의미함.
}


//스택이 비어있는지 확인하는 함수
int SIsEmpty(Stack* pstack)
{
    if (pstack->topIndex == -1)  //스택이 비어있다면
        return TRUE;
    else
        return FALSE;
}


//push 함수
void SPush(Stack* pstack, Data data)
{
    pstack->topIndex += 1; //데이터 추가를 위한 인덱스 값 증가
    pstack->stackArr[pstack->topIndex] = data; //데이터 저장
}


//pop 연산 담당 함수
Data SPop(Stack* pstack)
{
    int rIdx;

    if (SIsEmpty(pstack))
    {
        printf("Stack Memory Error!");
        exit(-1);
    }

    rIdx = pstack->topIndex;  //삭제할 데이터가 저장된 인덱스 값 저장
    pstack->topIndex -= 1; //pop연산의 결과로 topIndex 값 하나 감소

    return pstack->stackArr[rIdx]; // 삭제되는 데이터 반환
}


//peek 연산 담당 함수. (데이터를 확인만 하는 함수. 삭제는 안함)
Data SPeek(Stack* pstack)

{
    if (SIsEmpty(pstack))
    {
        printf("Stack Memory Error!");
        exit(-1);
    }

    return pstack->stackArr[pstack->topIndex];  //맨 위에 저장된 데이터 반환
}