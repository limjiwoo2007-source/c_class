#include <stdio.h>

void swap(int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main(void)
{
	int a = 3, b = 5;
	//swap이라는 함수를 사용하여 a와 b의 값을 바꿔치기 하기
	swap(&a, &b);
	printf("%d %d", a,b);

	// call by value -> 복제
	// call by reference -> 주소
	return 0;
}