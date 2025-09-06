#include <stdio.h>
int main(void)
{
	char stringText[] = "안녕하세요!";
	printf("문자배열 stringText의 길이는 : %zu\n", sizeof(stringText));

	char englishText[] = "hello!";
	printf("문자배열 englishText의 길이는 : %zu\n", sizeof(englishText));

	char longText[50] = "This is long text";
	printf("문자열배열 longText의 길이는: %zu\n", sizeof(longText));
	printf("문자열배열 longText의 콘텐츠 길이는: %d\n", strlen(longText));

	printf("%s \n", longText);

	char introduce[30] = "My name is 은지";
	printf("%s", introduce);
	introduce[11] = '\0';
	printf("%s", introduce);

	return 0;
}