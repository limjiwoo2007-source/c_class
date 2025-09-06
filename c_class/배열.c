#include <stdio.h>
int main(void)
{
	//배열의 이름 (변수랑 동일)
	//배열에 들어갈 값에 일치하는 자료형
	//배열의 길이 - 배열에 포함될 데이터의 개수

	int numbers[5] = { 10,20,30,40,50 };
	//초기화리스트
	int nums[] = { 1,2,3 };

	printf("%d\n", numbers[1]);

	for (int i = 0; i < 5; i++) {
		printf("%d\n", numbers[i]);
	}

	return 0;
}