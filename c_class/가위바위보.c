#include <stdio.h>
int main(void)
{
	/*
	난수를 구해서
	만약 사용자의 입력이 0과 같다면 당신:가위
	1과 같다면 당신:바위
	2와 같다면 당신:보

	컴퓨터도 똑같이 0:가위, 1:바위, 2:보

	컴퓨터의 숫자와 사용자가 입력한 숫자가 같다면 
	결과: 비겼습니다!

	사용자가 이겼다면
	결과: 당신이 이겼습니다!

	컴퓨터가 이겼다면
	결과: 컴퓨터가 이겼습니다!
	*/
	
	int num, ran;
	srand((unsigned int)time(NULL));
	ran = rand() % 3 ;
	printf("가위(0) 바위(1) 보(2) 중 하나를 선택하세요: ");
	scanf_s("%d", &num);
	if (num == 0) {
		printf("당신: 가위\n");
	}
	if (num == 1) {
		printf("당신: 바위\n");
	}
	if (num == 2) {
		printf("당신: 보\n");
	}
	if (ran == 0) {
		printf("컴퓨터: 가위\n");
	}
	if (ran == 1) {
		printf("컴퓨터: 바위\n");
	}
	if (ran == 2) {
		printf("컴퓨터: 보\n");
	}
	
	if (num == ran) {
		printf("결과: 비겼습니다!");
	}
	if (num == 0) {
		if (ran == 1) {
			printf("컴퓨터가 이겼습니다.");
		}
		if (ran == 2) {
			printf("당신이 이겼습니다.");
		}
	}
	if (num == 1) {
		if (ran == 0) {
			printf("당신이 이겼습니다.");
		}
		if (ran == 2) {
			printf("컴퓨터가 이겼습니다.");
		}
	}
	if (num == 2) {
		if (ran == 0) {
			printf("컴퓨터가 이겼습니다.");
		}
		if (ran == 1) {
			printf("당신이 이겼습니다.");
		}
	}

	/*
	else if ((user==0 && com==2)||(user==1 && com==0)||(user==2 && com==1)) {
	printf("당신이 이겼습니다");
	*/
	return 0;
}