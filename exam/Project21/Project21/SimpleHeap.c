#include "SimpleHeap.h"

void HeapInit(Heap* ph)  //���� �ʱ�ȭ
{
    ph->numOfData = 0; //numOfData�� ���� ����� ������ ��
}


int HIsEmpty(Heap* ph) //���� ������� Ȯ��
{
    if (ph->numOfData == 0)
        return TRUE;
    else
        return FALSE;
}


int GetParentIDX(int idx) // �θ� ����� �ε��� �� ��ȯ
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


//�� ���� �ڽ� ��� �� ���� �켱������ �ڽ� ��� �ε��� �� ��ȯ
int GetHiPriChildIDX(Heap* ph, int idx)
{
    if (GetLChildIDX(idx) > ph->numOfData) //���� �ڽ� ��尡 ���� ���� �������� �ʴ� ���. 
    //���� �ڵ忡�� ���� �ڽİ� ������ �ڽ� �� �켱������ ���� �ڽ��� �����ϱ� ���ؼ� ���� �ڽ� ��尡 ���� �������� �ʴ� ��쿡�� ���Ѵ�.
        return 0; //�� ��忡 �ڽ��� ����.
    else if (GetLChildIDX(idx) == ph->numOfData) //���� �ڽ� ��尡 ���� ������ ����� ���.
        return GetLChildIDX(idx);
    else
    {
        if (ph->heapArr[GetLChildIDX(idx)].pr  //�� �ڽ� ����� �켱������ ���Ѵ�.
            > ph->heapArr[GetRChildIDX(idx)].pr)
            return GetRChildIDX(idx);
        else
            return GetLChildIDX(idx);
    }
}


//���� ������ ����
void HInsert(Heap* ph, HData data, Priority pr)
{
    int idx = ph->numOfData + 1;  // ���Ե� �������� �ε��� �ʱ�ȭ. ���� ������ ��� ������ �����͸� �����ϵ��� �ε����� ������.
    HeapElem nelem = { pr, data }; // ���ο� �� ��� ����.

    // ���� ���ο� �����͸� �����ϴ� ����
    while (idx != 1)
    {
        // �θ� ����� �켱������ ���Ͽ� ���ο� �������� �켱������ �۴ٸ�
        if (pr < (ph->heapArr[GetParentIDX(idx)].pr))
        {
            // �θ� ����� �����͸� ���� ��ġ�� �̵�.
            ph->heapArr[idx] = ph->heapArr[GetParentIDX(idx)];
            idx = GetParentIDX(idx); // ���� ��ġ�� �θ� ����� ��ġ�� ����
        }
        else
            break; // �켱������ ������ ��ġ�� ã�����Ƿ� �ݺ��� ����
    }

    ph->heapArr[idx] = nelem; // ���������� ���ο� �����͸� ����
    ph->numOfData += 1; //���� ������ �� ����
}


// ������ ������ ����
HData HDelete(Heap* ph)
{
    HData retData = (ph->heapArr[1]).data; // ������ �������� ��ȯ�� ���� ����
    HeapElem lastElem = ph->heapArr[ph->numOfData]; // ���� ������ ��带 ������

    int parentIdx = 1;
    int childIdx;

    // ������ �����͸� ��ü�� ������ ��ġ�� ã�� ����
    while ((childIdx = GetHiPriChildIDX(ph, parentIdx)) != 0)
    {
        // ������ ����� �켱������ ���Ͽ� �ùٸ� ��ġ�� ã������ ����
        if (lastElem.pr <= ph->heapArr[childIdx].pr)
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

