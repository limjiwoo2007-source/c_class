#include <stdio.h>

int big(int a, int b) {
	if (a < b) {
		return b;
	}
	else {
		return a;
	}
}


int main(void)
{
	/*
	�ΰ��� ���� �� �� ū ���� ��ȯ�ϴ� �Լ�
	�� ���� ���� �Ű������� �޾� �� ū ���� ���� ��ȯ�ϴ� �Լ� �����

	main���� ù��°, �ι�° ���� ���� �Է¹ޱ�
	�Լ��� ȣ���Ͽ� �� ��� ������ ������ ����ϱ�
	*/

	int f1, f2;
	printf("���� ���� �Է����ּ���: ");
	scanf_s("%d %d", &f1, &f2);
	int price = big(f1, f2);
	printf("�� ��� ������ ����:%d", price);
	return 0;
}