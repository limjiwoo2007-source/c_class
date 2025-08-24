#include <stdio.h>
#define PI = 3.14
// 매크로상수는 선언 끝에 ;을 붙이지 않습니다.
// 친구가 주소를 포스트잇에 적어놓았다! 
#define FRIEND_HOME "서울시 강남구 테헤란로 112"
int main(void)
{
	printf("약속장소 : %s\n", FRIEND_HOME);
	/*
	변수 : 프로그램이 실행되는 동안 값을 변경할 수 있다.
	상수: 프로그램이 실행되는 동안 값이 변할 수 없다.
	*/

	//리터럴 상수
	// 10
	// -10 / 2.2, 3.14 / 'A', 'B'

	//심볼릭 상수

	const int MY_CONST = 55;
	const char* FRIEND_HOME2 = "서울시 강남구 테헤란로 112";
	printf("약속장소 : %s\n", FRIEND_HOME2);


	//const int YOUR_CONST;
	return 0;
}