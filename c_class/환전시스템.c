#include <stdio.h>
int main(void)
{
	//달러 1,390
	//엔화 9
	//유로화 1,622

	int won, menu;
	printf("환전할 금액(원)을 입력하세요:");
	scanf_s("%d", &won);

	printf("1. 달러(1USD = 1390원)\n 2.엔화(1JPY = 9원)\n 3.유로(1EUR = 1622원)\n 선택:");
	scanf_s("%d", &menu);

	switch (menu) {
	case 1: printf("%d달러", won / 1390);
		break;
	case 2: printf("%d엔", won / 9);
		break;
	case 3: printf("%d유로", won / 1622);
		break;
	default: printf("잘못된 선택입니다.");
	}
	return 0;
}