#include <stdio.h>
int main(void)
{
	int choice;
	do {
		printf("\n====메뉴====\n");
		printf("1. 오늘의 인사말\n");
		printf("2. 신입사원 환영멘트\n");
		printf("3. 오늘의 할 일\n");
		printf("0. 종료\n");
		printf("메뉴를 입력해주세요.\n");
		scanf_s("%d", &choice);

		switch (choice) {
		case 1: printf("오늘 하루도 행복하게 보내십시오.\n**삼성전자드림**\n");
			break;
		case 2: printf("안녕하세요! 입사를 축하드립니다.\n**삼성전자드림**");
			break;
		case 3: printf("1. 거래처미팅\n2. 회의록정리\n3. 기획안제작\n**삼성전자드림**");
			break;
		case 0: printf("프로그램을 종료합니다.");
			break;
		default: printf("번호를 다시 입력하십시오.");
		}
	} while (choice != 0);

	return 0;
}