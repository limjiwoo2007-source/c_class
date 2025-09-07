#include <stdio.h>
int main(void)
{
	/*
	for(초기값; 조건식; 증감식) {
		조건이 만족하면 실행할 코드
	}
	*/

	int forNumber;
	for (forNumber = 1; forNumber <= 10; forNumber++) {
		printf("반복 %d\n", forNumber);
	}

	//반복 10부터 반복 1까지 출력
	return 0;
}