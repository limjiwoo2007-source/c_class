#include <stdio.h>
int main(void)
{
	char scanf_string[50];
	printf("scanf_string�� �� ���ڿ��� �Է��ϼ��� : ");

	scanf_s("%s", scanf_string,(unsigned int)sizeof(scanf_string));
	printf("%s\n", scanf_string);

	char getString[50];
	printf("getString���ڿ��� �Է��ϼ���:");
	gets_s(getString, sizeof(getString));
	printf("%s\n", getString);

	//get--���ٸ� ����, scanf �� ���� ���
	return 0;
}