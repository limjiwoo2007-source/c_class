#include <stdio.h>
int main(void)
{
	//printf() : 출력함수
	//scanf_s() : 입력함수
	//   ㄴ 입력받을 데이터의 자료형에 대응하는 서식지정자
	//   ㄴ 입력받을 데이터가 저장될 메모리 공간 (변수)

	int num;
	scanf_s("%d\n", &num); //입력받고
	printf("\n"); //줄바꿈하기

	//scanf_s("입력 : %d", &num);
	//입력 : 8
	printf("입력 : ");
	scanf_s("%d", &num);

	int x, y, z, total;
	printf("정수 3개 입력 : ");
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	scanf_s("%d", &z);

	return 0;
}