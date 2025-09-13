#include <stdio.h>
#include <string.h>
int main(void)
{
	const char* questions[] = {
		"'�ѱ�'�� ����� �Է��ϼ���: ",
		"'�����'�� ����� �Է��ϼ���: ",
		"'���'�� ����� �Է��ϼ���: ",
	};

	const char* answers[] = {
		"korea",
		"cat",
		"apple"
	};

	//int ������ ����� ������ ������ ��! �ʱⰪ�� 0
	int score = 0;
	//������ ����ִ� input 20ĭ¥�� �迭�� �����
	char input[20];
	//������ ����� ���� �� �̸��� user
	const char* user;

	//total (���� ����) sizeof ���
	//sizeof(answers) = 24
	//sizeof(answers[0]) = 8
	// 24 / 8 = 3
	int total = sizeof(answers) / sizeof(answers[0]);

	printf("======���ܾ����� ����======\n\n");
	//for���� ����Ͽ� total���� i�� �۴ٸ� i�� ����
	// ���� 1: '�ѱ�'�� ����� �Է��ϼ���:
	//�Է��� input�� �ޱ�

	//�Է¹��� input�� user�� ���� (�����Ͱ� �Է°��� ����ų �� �ֵ���)

	for (int i = 0;i < total;i++) {
		printf("���� %d: '%s'�� ����� �Է��ϼ���: ", i+1, questions[i]);
		scanf_s("%s", input, (unsigned)sizeof(input)); //���ڿ� �޾ƿ� ���� ���ڿ� ��ü�� �ּ� ����, &���� ����
		user = input;
		//const char* user = korea;

		//���� user �Է°��� answers�� i�� ���ٸ� �����Դϴ� ��� �� score ����
		//�ƴ϶�� Ʋ�Ƚ��ϴ� ������ **�Դϴ�. �� ���� ���
		if (strcmp(user, questions[i]==0)) {
			printf("�����Դϴ�\n");
			score++;
		}
		else {
			printf("��! ������ '%s'�����ϴ�!\n\n", answers[i]);
		}
	}

	printf("=====��� ��ǥ=====\n");
	printf("�� %d���� �� %d�����������ϴ�! \n", total, score);

	/*
	3���� �� �����ٸ� �Ϻ��ؿ�
	3���� �� 2������ �����ٸ� ���ݸ� �� �����ؿ� (������ ���)
	2���� �̻� ������ ���ߴٸ� �������� �� ������ �غ���~
	*/
	
	if (score == total) {
		printf("�Ϻ��ؿ�");
	}
	if (score >= total/2) {
		printf("���ݸ� �� �����ؿ�");
	}
	else {
		printf("�������� �� ������ �غ���~");
	}
	return 0;
} //�̻��ϰ� ���´�;;�̤�