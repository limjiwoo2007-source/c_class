#include <stdio.h>
int main(void)
{
	int x = 10, y = 20;
	const int* p1 = &x; //자료형 앞에 const 선언 (값이 상수로 선언됨)
	//*p1 = 30;

	p1 = &y;
	printf("%d", *p1);

	int* const p2 = &x; //포인터변수 이름 앞에 const 선언 (포인터는 주소를 가리키는 녀석이기 때문에 포인터 변수 이름 앞에 const가 붙으면 주소를 변경할 수 없게 됨)

	*p2 = 30;
	//p2 = &y;
	printf("%d", *p2);
	
	const int* const p3 = &y;
	//*p3 = 100;
	//p3 = &x;
	//const 값과 주소 모두 변경 못함 (고정된?)
	return 0;
}