#include <stdio.h>
int main(void)
{
	//*****
	//****
	//***
	//**
	//*
	//만들기
	int line, star;
	for (line = 5; line >= 1; line--) {
		for (star = 1; star <= line; star++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n");
	//어려운 별찍기
	int num, i, j;
	printf("행 개수 입력: ");
	scanf_s("%d", &num);
	for (i = 1; i <= num; i++) {//줄개수
		for (j = 1; j <= num-i; j++) {//왼쪽 공백 개수
			printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}