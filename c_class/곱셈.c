#include <stdio.h>
int main(void)
{
	//2와 1을 변수에 담아 서로 다른 줄에 출력하기
	int number1 = 1;
	int number2 = 2;
	printf("%d\n", number1);
	printf("%d\n", number2);

	//곱셈
	int num1, num2, result;
	num1 = 2;
	num2 = 3;
	result = num1 * num2;
	printf("%d X %d = %d", num1, num2, result);

	return 0;
}