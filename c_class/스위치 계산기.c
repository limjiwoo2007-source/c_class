#include <stdio.h>
int main(void)
{
	/*
	1. ���ϱ�
	2. ����
	3. ���ϱ�
	4. ������
	��ȣ�� �����ϼ���:

	��ȣ�� �Է��� ���� �����(2��)

	2���� ������ �Է��ϼ���:
	������ ���� ������ ����� ���� �� scanf_s(1��)�� �־��ֱ�

	����ġ ����
	*�������� �� �� �ι�° �޾ƿ� ���ڰ� 0�̶�� 0���� ���� �� �����ϴ�. ���
	* 2���� ���� ���ڰ� 0�� �ƴ϶�� �����ֱ�
	*/

	int num1, num2, menu;
	printf("2���� ������ �Է��ϼ���: ");
	scanf_s("%d %d", &num1, &num2);

	printf("��ȣ�� �����ϼ���(1~4): ");
	scanf_s("%d", &menu);

	switch (menu) {
	case 1: printf("%d+%d=%d", num1, num2, num1 + num2);
		break;
	case 2: printf("%d-%d=%d", num1, num2, num1 - num2);
		break;
	case 3: printf("%d*%d=%d", num1, num2, num1 * num2);
		break;
	case 4:
		if (num2 == 0) {
			printf("0���� ���� �� �����ϴ�.");
		}
		else {
			printf("%d/%d=%d", num1, num2, num1 / num2);
		}
		break;
	default: printf("�߸��� ��ȣ�Դϴ�.");
	}
	return 0;
}