//���� �Է¹޾Ƽ� 1�� �ٿ����� ���ϱ�
#include <stdio.h>


//���� �ڵ�
int main(void) {

    //���� ����
    int a;
    int sum = 0;

    printf("���� �Է��ϼ���.");
    scanf_s("%d", &a);


    for (int i = 0; i < -(a + 1);)
    {
        sum += a + i;
        i--;
    }
    printf("1�� �ٿ����� ���� ���� %d�Դϴ�.", sum);
    return 0;
}