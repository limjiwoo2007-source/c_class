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
	
	b=a--; //--a(���ҽ�Ű�� ����)/a--(�����ϰ� ����)
	b+=20;
	printf("%d", *c);

	� �� ��µɱ�?
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