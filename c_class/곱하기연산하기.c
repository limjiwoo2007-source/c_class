#include <stdio.h>

int multiply(int a, int b) {
	return a * b;
}

int main(void)
{
	//숫자 2개 입력받은 후
	//곱하기 함수를 선언한다.
	//입력받은 숫자 2개로 곱하기 함수를 사용하기

	int num1, num2;
	printf("첫번째 숫자를 입력해주세요: ");
	scanf_s("%d", &num1);
	printf("두번째 숫자를 입력해주세요: ");
	scanf_s("%d", &num2);
	int result = multiply(num1, num2);
	printf("곱하기 연산 결과: %d * %d = %d", num1, num2, result);
	return 0;
}