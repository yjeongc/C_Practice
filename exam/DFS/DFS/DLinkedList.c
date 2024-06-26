#include <stdio.h>
#include <stdlib.h>
#include "DLinkedList.h"


//리스트 초기화 함수
void ListInit(List* plist)
{
    plist->head = (Node*)malloc(sizeof(Node)); //헤드 노드 생성
    plist->head->next = NULL; //헤드 노드의 다음 노드를 NULL로 초기화
    plist->comp = NULL; //비교 함수 포인터를 NULL로 초기화
    plist->numOfData = 0; //저장된 데이터 수를 0으로 초기화
}


//노드를 삽입하는 함수
void FInsert(List* plist, LData data)
{
    Node* newNode = (Node*)malloc(sizeof(Node)); // 새 노드 생성
    newNode->data = data; // 새 노드에 데이터 저장

    newNode->next = plist->head->next;  //새 노드가 다른 노드를 가리키도록 함
    plist->head->next = newNode; //더미 노드가 새 노드를 가리키게 함

    (plist->numOfData)++;  //저장된 데이터의 수 증가
}


void SInsert(List* plist, LData data)
{
    Node* newNode = (Node*)malloc(sizeof(Node)); //새 노드 생성
    Node* pred = plist->head; //pred는 더미 노드를 가리킴

    newNode->data = data;  //새 노드에 데이터 저장

    //새 노드가 들어갈 위치를 찾기 위한 반복문
    while (pred->next != NULL && plist->comp(data, pred->next->data) != 0)
    {
        pred = pred->next;  //다음 노드로 이동
    }

    newNode->next = pred->next; // 새 노드의 오른쪽을 연결
    pred->next = newNode; //새 노드의 왼쪽을 연결

    (plist->numOfData)++; //저장된 데이터의 수 하나 증가
}

void LInsert(List* plist, LData data)
{
    if (plist->comp == NULL)
        FInsert(plist, data);
    else    SInsert(plist, data);
}


//첫 번째 데이터 반환
int LFirst(List* plist, LData* pdata)
{
    if (plist->head->next == NULL)  //더미노드가 NULL을 가리킨다면
        return FALSE;  //반환할 데이터가 없다! 여기서 더미노드는 데이터를 담지 않고 리스트의 시작을 가리키는 역할을 함.

    plist->before = plist->head; //before은 더미노드를 가리키게 함.(노드 삭제를 편하게 하기 위해)
    plist->cur = plist->head->next; //cur은 첫 번째 노드를 가리키게 함.

    *pdata = plist->cur->data; //첫번째 노드의 데이터를 전달.
    return TRUE; //데이터 반환 성공
}


//다음 데이터 반환
int LNext(List* plist, LData* pdata)
{
    if (plist->cur->next == NULL) //cur이 NULL을 가리킨다면
        return FALSE;  //반환할 데이터가 없다.

    plist->before = plist->cur; //cur이 가리키던 것을 before가 가리킴
    plist->cur = plist->cur->next;  //cur은 그 다음 노드를 가리킴

    *pdata = plist->cur->data; //cur이 가리키는 노드의 데이터 전달
    return TRUE;  //데이터 반환 성공
}


LData LRemove(List* plist)
{
    Node* rpos = plist->cur; //소멸 대상 주소값을 rpos에 저장
    LData rdata = rpos->data; //소멸 대상의 데이터를 rdata에 저장

    plist->before->next = plist->cur->next; //소멸 대상을 리스트에서 제거
    plist->cur = plist->before; //cur이 가리키는 위치를 재조정

    free(rpos); //제거된 노드 소멸
    (plist->numOfData)--; //데이터 수 하나 감소
    return rdata; //제거된 노드의 데이터 반환
}


//리스트에 저장된 데이터 수 반환하는 함수
int LCount(List* plist)
{
    return plist->numOfData;
}


//정렬 기준을 설정하는 함수
void SetSortRule(List* plist, int (*comp)(LData d1, LData d2))
{
    plist->comp = comp;
}