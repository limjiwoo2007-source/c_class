#include <stdio.h>

int big(int a, int b) {
	if (a < b) {
		return b;
	}
	else {
		return a;
	}
}


int main(void)
{
	/*
	두개의 가격 중 더 큰 값을 반환하는 함수
	두 개의 값을 매개변수로 받아 더 큰 값이 뭔지 반환하는 함수 만들기

	main에서 첫번째, 두번째 과일 가격 입력받기
	함수를 호출하여 더 비싼 과일의 가격을 출력하기
	*/

	int f1, f2;
	printf("과일 값을 입력해주세요: ");
	scanf_s("%d %d", &f1, &f2);
	int price = big(f1, f2);
	printf("더 비싼 과일의 가격:%d", price);
	return 0;
}