#ifndef __SIMPLE_HEAP_H__ 
#define __SIMPLE_HEAP_H__

// ��ũ�� ����: �� ��� ������ �ߺ����� ���Ե��� �ʵ��� �ϴ� ����
// __SIMPLE_HEAP_H__�� ������ �ĺ��ڷ�, ��� ���� �̸��� �����ִ� ���̾�� ��
// �� �ĺ��ڰ� �̹� ���ǵǾ� �ִٸ� �Ʒ��� ������ ���õ�

#define TRUE 1
#define FALSE 0

#define HEAP_LEN 100

// HData�� Priority�� ���� �ڷ��� ����
typedef char HData;
typedef int Priority;

// ���� ��Ҹ� ��Ÿ���� ����ü HeapElem ����
typedef struct _heapElem
{
    Priority pr;  // ���� �������� ���� �켱����
    HData data;
} HeapElem;

// �� �ڷᱸ���� ��Ÿ���� ����ü Heap ����
typedef struct _heap
{
    int numOfData;  // ���� ����� �������� ��
    HeapElem heapArr[HEAP_LEN];  // ���� �����ϴ� �迭
} Heap;

// �� �ʱ�ȭ �Լ� ����
void HeapInit(Heap* ph);

// ���� ��� �ִ��� Ȯ���ϴ� �Լ�
int HIsEmpty(Heap* ph);

// ���� �����͸� �����ϴ� �Լ�
void HInsert(Heap* ph, HData data, Priority pr);

// ������ �����͸� �����ϰ� ��ȯ�ϴ� �Լ�
HData HDelete(Heap* ph);

// ��� ������ ���� ��Ÿ���� #endif
#endif