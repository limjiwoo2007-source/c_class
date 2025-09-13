#include <stdio.h>
int main(void)
{
	char str1[] = "apple";
	char str2[] = "apple";
	char str3[] = "banana";

	printf("str1 vs str2 : %d\n", strcmp(str1, str2));
	printf("str1 vs str3 : %d\n", strcmp(str1, str3));
	printf("str3 vs str1 : %d\n", strcmp(str3, str1));

	// 같으면 0
	// 앞이 크면 양수
	// 앞이 작으면 음수
	// 대소문자를 구분 A(65) a(97)

	/*
	cat
	c == c
	a == a
	t == t
	0

	cat car
	c == c
	a == a
	t 다르다! t
	t(116) / r(114)
	결과 : 양수

	cat cater
	c == c
	a == a
	t == t
	X vs e -> 0 vs 101 = -101
	음수
	*/
	return 0;
}