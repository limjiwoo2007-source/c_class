#include <stdio.h>

int multiply(int a, int b) {
	return a * b;
}

int main(void)
{
	//���� 2�� �Է¹��� ��
	//���ϱ� �Լ��� �����Ѵ�.
	//�Է¹��� ���� 2���� ���ϱ� �Լ��� ����ϱ�

	int num1, num2;
	printf("ù��° ���ڸ� �Է����ּ���: ");
	scanf_s("%d", &num1);
	printf("�ι�° ���ڸ� �Է����ּ���: ");
	scanf_s("%d", &num2);
	int result = multiply(num1, num2);
	printf("���ϱ� ���� ���: %d * %d = %d", num1, num2, result);
	return 0;
}