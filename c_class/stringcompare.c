#include <stdio.h>
int main(void)
{
	char str1[] = "apple";
	char str2[] = "apple";
	char str3[] = "banana";

	printf("str1 vs str2 : %d\n", strcmp(str1, str2));
	printf("str1 vs str3 : %d\n", strcmp(str1, str3));
	printf("str3 vs str1 : %d\n", strcmp(str3, str1));

	// ������ 0
	// ���� ũ�� ���
	// ���� ������ ����
	// ��ҹ��ڸ� ���� A(65) a(97)

	/*
	cat
	c == c
	a == a
	t == t
	0

	cat car
	c == c
	a == a
	t �ٸ���! t
	t(116) / r(114)
	��� : ���

	cat cater
	c == c
	a == a
	t == t
	X vs e -> 0 vs 101 = -101
	����
	*/
	return 0;
}