#include <stdio.h>
int main(void)
{
	//x=10, y=20
	//x의 주소를 가리키는 포인트변수 생성
	//y의 주소를 가리키는 포인트변수 생성

	//값을 담을 임시의 공간을 만들어줌(temp)
	//임시의 공간에 x의 값을 가리키는 포인터 역참조를 대입
	//x의 값을 가리키는 포인터 역참조에 y의 주소값을 가진 포인터 역참조값을 대입
	//y의 주소값을 가진 포인터 역참조에 임시의 공간에 있는 x의 값을 대입

	//변경 전과 변경 후 출력

	int x = 10, y = 20;
	int* a = &x;
	int* b = &y;
	int temp;
	printf("변경 전: x= %d, y= %d\n", x, y);
	temp = *a; //temp = x의 값
	*a = *b; //x가 가진 값을 y가 가진 값으로 대입
	*b = temp; //y = temp
	printf("변경 후: x= %d, y= %d\n", x, y);
	
	return 0;
}