#include <stdio.h>
int main(void)
{
	//1~8까지 들어있는 배열 만들기
	//배열의 마지막 요소의 주소를 가리키는 포인터 변수 만들기

	//홀수의 합을 저장할 변수 sum=0 만들기

	//for문을 사용하여 배열의 모든 요소를 순회할 것이다.
	//만약 ptr을 역참조한 값을 2로 나눈 나머지가 0이 아니라면
	//sum에 ptr에 들어있는 값을 대입해준다.

	//ptr은 배열의 마지막 숫자를 담고있기 때문에 이전 요소로 감소시킨다.

	int arr[8] = { 1,2,3,4,5,6,7,8 };
	int* ptr = &arr[7];
	//printf("%d", *ptr);
	int sum = 0;
	for (int i = 0; i < 8; i++) {
		if (*ptr % 2 != 0) {
			sum += *ptr;
		}
		ptr--;
	}
	printf("홀수의 합: %d\n", sum);
	
	return 0;
}

/*
1. int* p
2. 
/