#include <stdio.h>
int main(void)
{
	int totalPrice;
	int member;
	printf("���űݾ��� �Է����ּ���:");
	scanf_s("%d", &totalPrice);

	printf("ȸ���̽Ű���(ȸ���̸� 1 �ƴϸ� 0 �Է�) ");
	scanf_s("%d", &member);

	if (totalPrice >= 100000) {
		printf("100,000�� �̻� ���� ���� ����ǰ�� �����˴ϴ�.");
		if (member == 1) {
			printf("50,000�� �̻� ���� ȸ���� ��ۺ� �����Դϴ�.");

		}
		else {
			printf("��ȸ���� ��ۺ� 5,000���� �ΰ��˴ϴ�.");
		}
	}
	else if (totalPrice >= 50000) {
		if (member == 1) {
			printf("50,000�� �̻� ���� ȸ���� ��ۺ� �����Դϴ�.");
		}
		else {
			printf("��ȸ���� ��ۺ� 5,000���� �ΰ��˴ϴ�.");
		}
	}
	else {
		printf("���űݾ��� 50,000�� �̸��Դϴ�. ��ۺ� 5,000���� �ΰ��˴ϴ�.");

	}

	return 0;
}