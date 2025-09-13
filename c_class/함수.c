#include <stdio.h>

void sayHello() {
	printf("Hello, World!\n");
}

int add(int a, int b) {
	return a+b;
}

void c_class(char* name) {
	printf("Hello, %s\n", name);
}


int main(void)
{
	/*
	함수: 특정 작업을 실행하는 코드블록 / 재사용 가능

	반환형 함수이름(매개변수){
		return ?;
	}
	반환형: 함수가 처리 결과를 내보낼 때 알맞은 자료형을 써주어야 함 (int, float, void)
	함수이름: 개발자가 직접 정함 (호출할 때 사용할 이름)
			*호출이란? 기능을 작동할 수 있도록 실행해주는 것
	매개변수: 함수를 만들기 위한 재료 (뭘 넣는지에 따라 출력값이 달라짐)
	return : 함수가 작업을 끝낸 뒤 호출한 곳으로 값을 돌려주는 명령어
			*반환형이 void라면 생략 가능
			
	여러번 사용 가능/ 함수 이름을 기능에 맞게 지어주어야 함/ 가독성이 좋아짐/ 유지보수가 좋아짐
	*/

	sayHello();
	int sum = add(5, 3);
	printf("%d\n", sum);

	char name[20];
	printf("이름을 입력해주세요: ");
	scanf_s("%s", name, (unsigned)sizeof(name));
	c_class(name);

	c_class("eunji");
	c_class("user");

	return 0;
}