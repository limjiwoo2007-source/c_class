#include <stdio.h>
int main(void)
{
	//*****
	//****
	//***
	//**
	//*
	//�����
	int line, star;
	for (line = 5; line >= 1; line--) {
		for (star = 1; star <= line; star++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n");
	//����� �����
	int num, i, j;
	printf("�� ���� �Է�: ");
	scanf_s("%d", &num);
	for (i = 1; i <= num; i++) {//�ٰ���
		for (j = 1; j <= num-i; j++) {//���� ���� ����
			printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}