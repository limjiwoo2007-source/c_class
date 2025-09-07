#include <stdio.h>
int main(void)
{
	/*
	1. 더하기
	2. 빼기
	3. 곱하기
	4. 나누기
	번호를 선택하세요:

	번호를 입력할 변수 만들기(2개)

	2개의 정수를 입력하세요:
	정수를 받을 변수를 만들어 놓은 후 scanf_s(1개)로 넣어주기

	스위치 시작
	*나눗셈을 할 땐 두번째 받아온 숫자가 0이라면 0으로 나눌 수 없습니다. 출력
	* 2번쨰 들어온 숫자가 0이 아니라면 나눠주기
	*/

	int num1, num2, menu;
	printf("2개의 정수를 입력하세요: ");
	scanf_s("%d %d", &num1, &num2);

	printf("번호를 선택하세요(1~4): ");
	scanf_s("%d", &menu);

	switch (menu) {
	case 1: printf("%d+%d=%d", num1, num2, num1 + num2);
		break;
	case 2: printf("%d-%d=%d", num1, num2, num1 - num2);
		break;
	case 3: printf("%d*%d=%d", num1, num2, num1 * num2);
		break;
	case 4:
		if (num2 == 0) {
			printf("0으로 나눌 수 없습니다.");
		}
		else {
			printf("%d/%d=%d", num1, num2, num1 / num2);
		}
		break;
	default: printf("잘못된 번호입니다.");
	}
	return 0;
}