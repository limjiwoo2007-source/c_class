#include <stdio.h>
int main(void)
{
	char stringText[] = "�ȳ��ϼ���!";
	printf("���ڹ迭 stringText�� ���̴� : %zu\n", sizeof(stringText));

	char englishText[] = "hello!";
	printf("���ڹ迭 englishText�� ���̴� : %zu\n", sizeof(englishText));

	char longText[50] = "This is long text";
	printf("���ڿ��迭 longText�� ���̴�: %zu\n", sizeof(longText));
	printf("���ڿ��迭 longText�� ������ ���̴�: %d\n", strlen(longText));

	printf("%s \n", longText);

	char introduce[30] = "My name is ����";
	printf("%s", introduce);
	introduce[11] = '\0';
	printf("%s", introduce);

	return 0;
}