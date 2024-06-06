#ifndef __D_LINKED_LIST_H__
#define __D_LINKED_LIST_H__

#define TRUE    1
#define FALSE   0

typedef int LData;

typedef struct _node
{
    LData data;  //��忡 ����� ������.
    struct _node* next;  //���� ��带 ����Ű�� ������.
} Node;


//���� ���� ����Ʈ�� ��Ÿ���� ����ü ����
typedef struct _linkedList
{
    Node* head;  //����Ʈ�� ù ��° ��带 ����Ű�� ������
    Node* cur;  //����Ʈ���� ���� ��ġ�� ����Ű�� ������
    Node* before;  //���� ��ġ ������ ��带 ����Ű�� ������
    int numOfData;  //����Ʈ�� ����� �������� ��
    int (*comp) (LData d1, LData d2);  //������ ���� ���Լ��� ����Ű�� �Լ� ������
} LinkedList;


typedef LinkedList List;


void ListInit(List* plist);  //���� ���� ����Ʈ�� �ʱ�ȭ �ϴ� �Լ�
void LInsert(List* plist, LData data);  //���ο� ��带 ����Ʈ�� �����ϴ� �Լ�

int LFirst(List* plist, LData* pdata); //����Ʈ���� ù ��° ����� �����͸� �������� �Լ�
int LNext(List* plist, LData* pdata);  //����Ʈ���� ���� ���� �����͸� �������� �Լ�


LData LRemove(List* plist); //���� ��带 �����ϰ� �����͸� ��ȯ�ϴ� �Լ�
int LCount(List* plist); //����Ʈ�� ����� ����� ���� ��ȯ�ϴ� �Լ�


void SetSortRule(List* plist, int (*comp)(LData d1, LData d2)); //����Ʈ�� ���� ��Ģ�� �����ϴ� �Լ�

#endif