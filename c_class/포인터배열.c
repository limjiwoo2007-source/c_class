#include <stdio.h>
int main(void)
{
	int* p1, * p2, * p3, * p4, * p5;
	int* p[5];

	int x = 3;
	p[3] = &x;
	printf("%p\n", p[3]);
	printf("%d\n", *p[3]);

	//세개의 정수 변수를 만들기
	//포인터 배열을 선언한 후
	//각 포인터변수에 세개의 정수의 주소를 대입
	//for문을 통해 포인터 배열을 출력

	int a=10, b=20, c=30;
	int* ptrArr[3];
	ptrArr[0] = &a;
	ptrArr[1] = &b;
	ptrArr[2] = &c;
	
	for (int i = 0; i < 3; i++) {
		printf("ptrArr[%d]가 가리키는 값: %d\n", i, *ptrArr[i]);
	}
	return 0;
}