#include <stdio.h>
int main(void)
{
	//������ id: 1234
	//pw: 5678
	//������� �Է��� ���� inputID, inputPW ����
	//�õ�Ƚ���� ���� tries=0;
	//while�� ����Ͽ� 3������ �õ� �����ϰ�
	//���̵�� ��й�ȣ�� �Է¹޾� �� �ּҿ� �־��ֱ�
	//���� 1234�� �Է��� ���̵� ����, 5678 �Է¹��� pw�� ���ٸ� �α��� ���� (�ݺ� ����)
	//�α��ο� �����ߴٸ� ���� ��ȸ �˷��ֱ�
	//�õ�Ƚ�� ����
	//�õ�Ƚ���� 3�� �������ٸ� print 3ȸ ���� ������ ���ܵǾ����ϴ�.

	int id = 1234, pw = 5678;
	int inputID, inputPW;

	int tries = 0;
	while (tries < 3) {
		printf("���̵�� ��й�ȣ�� �Է����ּ���:");
		scanf_s("%d %d", &inputID, &inputPW);
		if (inputID != 1234 || inputPW != 5678) {
			printf("�α��ο� �����߽��ϴ�.");
			tries++;
			printf("���� ��ȸ�� %d�� �Դϴ�.", 3 - tries);
		}
		else {
			printf("�α��� ����");
			break;
		}

	}
	if (tries == 3) {
		printf("3ȸ ���� ������ ���ܵǾ����ϴ�.");
	}

	return 0;
}
