#include <stdio.h>

void staticFuntion() {
	static int num = 0; //static: (본래는 사라지는데) 안사라지고 계속 저장되어 있음
	num++;
	printf("num: %d\n", num);
}

int number = 50;

int localFuntion(int a) {
	int result = 5;
	return number + a;
}

int main(void)
{
	int a=100;
	printf("%d\n", a);

	int result = localFuntion(a);
	printf("%d\n", result);

	int number = 40;
	printf("%d\n", number); //이름이 중복되면 안에 있는 지역변수로 사용됨

	staticFuntion();
	staticFuntion();
	staticFuntion();
	staticFuntion();
	staticFuntion();

	/*
	1. 지역변수: 함수 스코프{} 내에서 선언된 모든 변수는 해당 함수 안에서만 사용 가능하다.
			함수를 실행할 때 사용하는 재료인 매개변수도 결국 지역변수이다. 이름 중복 불가 (다른 함수에서는 중복 가능)
	2. 전역변수: 모든 지역(함수)에서 사용 가능/ 지역변수와 이름이 동일하다면 지역변수가 우선적으로 사용된다.
			프로그램의 시작과 동시에 메모리 공간을 할당받으며, 프로그램이 종료할 때까지 존재한다.
	3. 스테틱변수: static이라는 키워드를 사용하여 선언하며, 지역변수와 함께 사용하면 함수를 호출하고 기능이 끝나도 스테틱으로 선언한 메모리가 사라지지 않는다.
			/프로그램이 종료될 때까지 메모리 공간을 유지한다.
	*/
	return 0;
}