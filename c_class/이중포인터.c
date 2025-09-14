#include <stdio.h>

int main(void)
{
	int a = 5;
	int* p = &a;
	int** p2 = &p;
	int*** p3 = &p2;


	
	/*
	int a = 10, b;
	int *c=&b;
	
	b=a--; //--a(감소시키고 대입)/a--(대입하고 감소)
	b+=20;
	printf("%d", *c);

	어떤 수 출력될까?
	->30
	==================================================
	int a = 10, b;
	int *c=&b;

	b=a--;
	b+=20;  --> b:30
	*c=a;
	printf("%d",*c); ->9
	printf("%d",b); ->9
	*/
	
	return 0;
}