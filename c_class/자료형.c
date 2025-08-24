#include <stdio.h>
int main(void)
{
	/*
	정수형
	int : %d
	short(잘 안 씀) 
	long (잘 안 씀) : %ld
	long long : %lld

	실수형
	double : %f
	float : %f
	long double : %lf

	문자형
	char : 문자를 표현하는 대표적인 자료형 (값의 범위 안에 들어오는 숫자 담을 수 있음)
	%c
	*/

	unsigned int max_number = 2200000000;
	printf("%u", max_number);
	return 0;


}