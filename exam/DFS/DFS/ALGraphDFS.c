#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ALGraphDFS.h"
#include "DLinkedList.h"
#include "ArrayBaseStack.h"

int WhoIsPrecede(int data1, int data2);


//�׷����� �ʱ�ȭ
void GraphInit(ALGraph* pg, int nv)
{

    int i;

    pg->adjList = (List*)malloc(sizeof(List) * nv);
    pg->numV = nv; //numV: ������ ��
    pg->numE = 0;  //numE: ������ ��. �ʱ��� ���� ���� 0��

    for (i = 0; i < nv; i++)
    {
        ListInit(&(pg->adjList[i]));
        SetSortRule(&(pg->adjList[i]), WhoIsPrecede);
    }

    //������ ���� ���̷� �迭�� �Ҵ���.
    pg->vistiInfo = (int*)malloc(sizeof(int) * pg->numV);

    //�迭�� ��� ��Ҹ� 0���� �ʱ�ȭ��.
    memset(pg->vistiInfo, 0, sizeof(int) * pg->numV);
}


//�׷��� ���ҽ��� ����
void GraphDestroy(ALGraph* pg)
{
    if (pg->adjList != NULL)
        free(pg->adjList);

    //�Ҵ�� �迭�� �Ҹ�!
    if (pg->vistiInfo != NULL) //visitInfo: ���� �߰��� ���.
        free(pg->vistiInfo);
}


//���� �߰�
void AddEdge(ALGraph* pg, int fromV, int toV)
{
    LInsert(&(pg->adjList[fromV]), toV); //adjList: ������ ����
    LInsert(&(pg->adjList[toV]), fromV);
    pg->numE += 1;
}


//������ ���� ���
void ShowGraphEdgeInfo(ALGraph* pg)
{
    int i;
    int vx;


    for (i = 0; i < pg->numV; i++)
    {
        printf("%c�� ����� ����: ", i + 65);

        if (LFirst(&(pg->adjList[i]), &vx))
        {
            printf("%c ", vx + 65);

            while (LNext(&(pg->adjList[i]), &vx))
                printf("%c ", vx + 65);
        }
        printf("\n");
    }
}

int WhoIsPrecede(int data1, int data2)
{
    if (data1 < data2)
        return 0;
    else
        return 1;
}


int VisitVertex(ALGraph* pg, int visitV)
{
    if (pg->vistiInfo[visitV] == 0)
    {
        pg->vistiInfo[visitV] = 1;

        printf("%c ", visitV + 65);
        return TRUE;
    }
    return FALSE;
}

//DFS������� ���ǵ� �Լ� : ������ ���� ���
void DFShowGraphVertex(ALGraph* pg, int startV)
{
    Stack stack;
    int visitV = startV;
    int nextV;

    StackInit(&stack); //DFS�� ���� ������ �ʱ�ȭ
    VisitVertex(pg, visitV);  //���� ������ �湮
    SPush(&stack, visitV);  //���� ������ ������ ��������!

    //visitV�� ��� ������ ����� ������ �湮�� �õ��ϴ� while��
    while (LFirst(&(pg->adjList[visitV]), &nextV) == TRUE)
    {
        int visitFlag = FALSE;

        if (VisitVertex(pg, nextV) == TRUE)
        {
            SPush(&stack, visitV);
            visitV = nextV;
            visitFlag = TRUE;
        }
        else
        {
            while (LNext(&(pg->adjList[visitV]), &nextV) == TRUE)
            {
                if (VisitVertex(pg, nextV) == TRUE)
                {
                    SPush(&stack, visitV);
                    visitV = nextV;
                    visitFlag = TRUE;
                    break;
                }
            }
        }

        if (visitFlag == FALSE)
        {
            if (SIsEmpty(&stack) == TRUE)
                break;
            else
                visitV = SPop(&stack);
        }
    }

    memset(pg->vistiInfo, 0, sizeof(int) * pg->numV);
}

