#include <stdio.h>
int main(void)
{
	char ch1 = 'A';
	printf("%c\n", ch1);
	printf("%d\n", ch1);

	char ch2 = 65;
	printf("%c\n", ch2);

	printf("문자 : %c, 숫자 : %d\n", ch1, ch1);
	printf("문자 : %c, 숫자 : %d\n", ch2, ch2);
	return 0;
}