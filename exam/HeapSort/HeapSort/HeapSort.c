#include <stdio.h>
#include "UsefulHeap.h"

int PriComp(int n1, int n2)
{
	return n2 - n1;  //오름차순 정렬을 위한 문장
	//return n1-n2; //내림차순 정렬을 위한 문장
}

void HeapSort(int arr[], int n, PriorityComp pc) //힙 정렬 구현 함수
{
	Heap heap;
	int i;

	HeapInit(&heap, pc);

	//힙 정렬 단계 1 : 데이터를 모두 힙에 넣는다.
	for (i = 0; i < n; i++)
		HInsert(&heap, arr[i]);

	//힙 정렬 단계 2 : 힙에서 다시 데이터를 꺼낸다. 꺼낼 때 힙의 루트 노드에 저장된 데이터가 반환되기 때문에 정렬이 된다.
	for (i = 0; i < n; i++)
	{
		arr[i] = HDelete(&heap);
	}
}


int main()
{
	int arr[4] = { 3, 4, 2, 1 };
	int i;

	HeapSort(arr, sizeof(arr) / sizeof(int), PriComp);

	for (i = 0; i < 4; i++)
		printf("%d ", arr[i]);

	printf("\n");

	return 0;
	}