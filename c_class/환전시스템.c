#include <stdio.h>
int main(void)
{
	//�޷� 1,390
	//��ȭ 9
	//����ȭ 1,622

	int won, menu;
	printf("ȯ���� �ݾ�(��)�� �Է��ϼ���:");
	scanf_s("%d", &won);

	printf("1. �޷�(1USD = 1390��)\n 2.��ȭ(1JPY = 9��)\n 3.����(1EUR = 1622��)\n ����:");
	scanf_s("%d", &menu);

	switch (menu) {
	case 1: printf("%d�޷�", won / 1390);
		break;
	case 2: printf("%d��", won / 9);
		break;
	case 3: printf("%d����", won / 1622);
		break;
	default: printf("�߸��� �����Դϴ�.");
	}
	return 0;
}