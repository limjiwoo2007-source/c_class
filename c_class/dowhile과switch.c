#include <stdio.h>
int main(void)
{
	int choice;
	do {
		printf("\n====�޴�====\n");
		printf("1. ������ �λ縻\n");
		printf("2. ���Ի�� ȯ����Ʈ\n");
		printf("3. ������ �� ��\n");
		printf("0. ����\n");
		printf("�޴��� �Է����ּ���.\n");
		scanf_s("%d", &choice);

		switch (choice) {
		case 1: printf("���� �Ϸ絵 �ູ�ϰ� �����ʽÿ�.\n**�Ｚ���ڵ帲**\n");
			break;
		case 2: printf("�ȳ��ϼ���! �Ի縦 ���ϵ帳�ϴ�.\n**�Ｚ���ڵ帲**");
			break;
		case 3: printf("1. �ŷ�ó����\n2. ȸ�Ƿ�����\n3. ��ȹ������\n**�Ｚ���ڵ帲**");
			break;
		case 0: printf("���α׷��� �����մϴ�.");
			break;
		default: printf("��ȣ�� �ٽ� �Է��Ͻʽÿ�.");
		}
	} while (choice != 0);

	return 0;
}