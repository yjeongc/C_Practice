//a ~ b �� ���ϱ�
#include <stdio.h>

//���� �ڵ�
int main(void) {
	//���� ����
	int a, b;
	int i;

	printf("ù ��° ���� �Է��ϼ���.");
	scanf_s("%d", &a);
	printf("�� ��° ���� �Է��ϼ���.");
	scanf_s("%d", &b);

	i = a + 1;

	while (i < b + 1) {
		a += i;
		i++;
	}
	printf("�� ���� �������� ����: %d\n", a);
	return 0;
}