#include <stdio.h>
int main(void)
{
	//�ʱ��ܾ�
	int money = 10000;
	int menu, amount;

	while (1) {
		printf("\n====ATM====\n");
		printf("1.�ܾ���ȸ\n 2.�Ա�\n 3.���\n 4.����\n");
		printf("�޴� ����: ");
		scanf_s("%d", &menu);

		//�߸��� �޴��� �Է¹޾Ҵٸ�
		if (menu < 1 || menu>4) {
			printf("�߸��� �Է��Դϴ�.");
			continue;
		}

		if (menu == 1) {
			printf("���� �ܾ� %d\n", money);
		}
		//���� �Ա��� �����ٸ� �Ա� �ݾ��� amount���ٰ� ���� �� money�� �����ֱ�
		//�߸��� ����(-) �Է��ߴٸ� �ٽ� �ݺ����� ���ư�
		if (menu == 2) {
			printf("�Ա��� �ݾ��� �Է����ּ���.");
			scanf_s("%d", &amount);
			if (amount < 0) {
				printf("�߸��� ���Դϴ�.");
				continue;
			}
			money += amount;
			printf("���� �ܾ��� %d�Դϴ�.", money);
		}
		//3�� ����� �Է��ߴٸ�
		//amount�� ��ݱݾ��� �־��ֱ�
		//���� �ܾ׺��� �� ū ��ݾ��� �Է��ߴٸ� �ܾ��� �����ߴٰ� �˸� �� �ٽ� �ݺ�
		//�ܾ׺��� ���� �ݾ��� ����Ϸ� �Ѵٸ� �ܾ׿��� ���ֱ�
		if (menu == 3) {
			printf("��� �ݾ��� �Է����ּ���.");
			scanf_s("%d", &amount);
			if (amount > money) {
				printf("�ܾ��� �����մϴ�.");
				continue;
			}
			else {
				money -= amount;
				printf("���� �ܾ��� %d�Դϴ�.", money);
			}
		}
		//4���� ���� ���Ḧ �����ߴٸ� atm �����ϱ�
		if (menu == 4) {
			printf("====ATM ����====");
			break;
		}
	}
	return 0;
}
