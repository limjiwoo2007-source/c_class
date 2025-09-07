#include <stdio.h>
int main(void)
{
	char scanf_string[50];
	printf("scanf_string에 들어갈 문자열을 입력하세요 : ");

	scanf_s("%s", scanf_string,(unsigned int)sizeof(scanf_string));
	printf("%s\n", scanf_string);

	char getString[50];
	printf("getString문자열을 입력하세요:");
	gets_s(getString, sizeof(getString));
	printf("%s\n", getString);

	//get--한줄만 가능, scanf 더 많이 사용
	return 0;
}