//���� 1~10 ���� ���ϴ� ���α׷�
#include <stdio.h>

//���� ���� �κ�
int i = 0, a = 0;

//���� �ڵ�
int main() {
	for (i = 0; i < 11; i++) {
		a += i;
	}
	printf("1���� 10������ ��: %d", a);
	return 0;
}