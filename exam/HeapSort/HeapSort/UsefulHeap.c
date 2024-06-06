#include "UsefulHeap.h"

void HeapInit(Heap* ph, PriorityComp pc)
{
    ph->numOfData = 0;
    ph->comp = pc;
}

int HIsEmpty(Heap* ph)
{
    if (ph->numOfData == 0)
        return TRUE;
    else
        return FALSE;
}


int GetParentIDX(int idx)
{
    return idx / 2;
}


int GetLChildIDX(int idx)  //���� �ڽ� ����� �ε��� �� ��ȯ
{
    return idx * 2;
}


int GetRChildIDX(int idx) //������ �ڽ� ����� �ε��� �� ��ȯ
{
    return GetLChildIDX(idx) + 1;
}


int GetHiPriChildIDX(Heap* ph, int idx)
{
    if (GetLChildIDX(idx) > ph->numOfData) //���� �ڽ� ��尡 ���� ���� �������� �ʴ� ���. 
        return 0;


    else if (GetLChildIDX(idx) == ph->numOfData) //���� �ڽ� ��尡 ���� ������ ����� ���.
        return GetLChildIDX(idx);


    else
    {
        if (ph->comp(ph->heapArr[GetLChildIDX(idx)],  //�� �ڽ� ����� �켱������ ���Ѵ�.
            ph->heapArr[GetRChildIDX(idx)]) < 0)
            return GetRChildIDX(idx);
        else
            return GetLChildIDX(idx);
    }
}

void HInsert(Heap* ph, HData data)
{
    int idx = ph->numOfData + 1;  // ���Ե� �������� �ε��� �ʱ�ȭ. ���� ������ ��� ������ �����͸� �����ϵ��� �ε����� ������.

    // ���� ���ο� �����͸� �����ϴ� ����
    while (idx != 1)
    {
        // �θ� ����� �켱������ ���Ͽ� ���ο� �������� �켱������ �۴ٸ�
        if (ph->comp(data, ph->heapArr[GetParentIDX(idx)]) > 0)
        {
            // �θ� ����� �����͸� ���� ��ġ�� �̵�.
            ph->heapArr[idx] = ph->heapArr[GetParentIDX(idx)];
            idx = GetParentIDX(idx); // ���� ��ġ�� �θ� ����� ��ġ�� ����
        }
        else
            break; // �켱������ ������ ��ġ�� ã�����Ƿ� �ݺ��� ����
    }

    ph->heapArr[idx] = data;
    ph->numOfData += 1;
}

HData HDelete(Heap* ph)
{
    HData retData = ph->heapArr[1];
    HData lastElem = ph->heapArr[ph->numOfData]; // ���� ������ ��带 ������

    int parentIdx = 1;
    int childIdx;

    // ������ �����͸� ��ü�� ������ ��ġ�� ã�� ����
    while ((childIdx = GetHiPriChildIDX(ph, parentIdx)) != 0)
    {
        // ������ ����� �켱������ ���Ͽ� �ùٸ� ��ġ�� ã������ ����
        if (ph->comp(lastElem, ph->heapArr[childIdx]) >= 0)
            break;

        // ���� ��ġ�� �ڽ� ����� �����͸� �̵�
        ph->heapArr[parentIdx] = ph->heapArr[childIdx];
        parentIdx = childIdx; // ���� ��ġ�� �ڽ� ����� ��ġ�� ����
    }

    //������ ����� �����͸� ������ ��ġ�� ����
    ph->heapArr[parentIdx] = lastElem;
    ph->numOfData -= 1; // ���� ������ �� ����
    return retData; // ������ ������ ��ȯ
}