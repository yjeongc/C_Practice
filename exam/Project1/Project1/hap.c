//���� 1~10 ���� ���ϴ� ���α׷�
#include <stdio.h>
#include <string.h>

//���� ���� �κ�
int i;
int a = 0;

//���� �ڵ�
int main() {
	for (i = 0; i < 11; i++) {
		a+= i;
		printf(a);
	}
	return 0;
}