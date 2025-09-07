#include <stdio.h>
int main(void)
{
	//임의의 id: 1234
	//pw: 5678
	//사용자의 입력을 받은 inputID, inputPW 생성
	//시도횟수를 담을 tries=0;
	//while을 사용하여 3번까지 시도 가능하게
	//아이디와 비밀번호를 입력받아 각 주소에 넣어주기
	//만약 1234와 입력한 아이디가 같고, 5678 입력받은 pw가 같다면 로그인 성공 (반복 종료)
	//로그인에 실패했다면 남은 기회 알려주기
	//시도횟수 증가
	//시도횟수가 3과 같아졌다면 print 3회 실패 접근이 차단되었습니다.

	int id = 1234, pw = 5678;
	int inputID, inputPW;

	int tries = 0;
	while (tries < 3) {
		printf("아이디와 비밀번호를 입력해주세요:");
		scanf_s("%d %d", &inputID, &inputPW);
		if (inputID != 1234 || inputPW != 5678) {
			printf("로그인에 실패했습니다.");
			tries++;
			printf("남은 기회는 %d번 입니다.", 3 - tries);
		}
		else {
			printf("로그인 성공");
			break;
		}

	}
	if (tries == 3) {
		printf("3회 실패 접근이 차단되었습니다.");
	}

	return 0;
}
