#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char song1[30], song2[30], song3[30];
	char* songs[3];
	//���ڿ��� ���� ������ �迭 ����
	//�����͵��� ������ �迭�� ����ų �� �ֵ��� ��������
	songs[0] = song1;
	songs[1] = song2;
	songs[2] = song3;
	//�迭�� �̸��� ���� �ּҸ� ����Ű�� ������ ������ �ϱ� ����

	printf("�뷡 ���� 3���� �Է��ϼ���: \n");
	for (int i = 0;i < 3;i++) {
		printf("%d��° �뷡:", i + 1);
		scanf_s("%s", songs[i], (unsigned)30);
	}

	int choice;
	srand((unsigned)time(NULL));

	//�뷡 ���� 3���� �Է����ּ��� ���
	//for���� ���� 
	// *��° �뷡: ���� �Է¹ޱ�
	while (1) {
		printf("\n====�޴�====\n");
		printf("1. �÷��̸���Ʈ ����(����)\n");
		printf("2. ��ü ����Ʈ ����\n");
		printf("3. ����\n");
		printf("��ȣ �Է�:");
		scanf_s("%d", &choice);
		if (choice == 1) {
			int r = rand() % 3;
			printf("���: %s\n", songs[r]);
		}
		else if (choice == 2) {
			printf("\n====��ü �뷡 ����Ʈ====\n");
			for (int i = 0;i < 3;i++) {
				printf("%d. %s\n", i + 1, songs[i]);
			}
		}
		else if (choice == 3) {
			printf("���α׷��� �����մϴ�.");
			break;
		}
		else {
			printf("�߸��� �Է��Դϴ�. �ٽ� �����ϼ���.\n");
		}
	}


	return 0;
}