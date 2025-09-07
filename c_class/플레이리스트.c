#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char song1[30], song2[30], song3[30];
	char* songs[3];
	//문자열을 담을 포인터 배열 생성
	//포인터들이 각각의 배열을 가리킬 수 있도록 대입해줌
	songs[0] = song1;
	songs[1] = song2;
	songs[2] = song3;
	//배열의 이름은 시작 주소를 가리키는 포인터 역할을 하기 때문

	printf("노래 제목 3개를 입력하세요: \n");
	for (int i = 0;i < 3;i++) {
		printf("%d번째 노래:", i + 1);
		scanf_s("%s", songs[i], (unsigned)30);
	}

	int choice;
	srand((unsigned)time(NULL));

	//노래 제목 3개를 입력해주세요 출력
	//for문을 통해 
	// *번째 노래: 제목 입력받기
	while (1) {
		printf("\n====메뉴====\n");
		printf("1. 플레이리스트 실행(랜덤)\n");
		printf("2. 전체 리스트 보기\n");
		printf("3. 종료\n");
		printf("번호 입력:");
		scanf_s("%d", &choice);
		if (choice == 1) {
			int r = rand() % 3;
			printf("재생: %s\n", songs[r]);
		}
		else if (choice == 2) {
			printf("\n====전체 노래 리스트====\n");
			for (int i = 0;i < 3;i++) {
				printf("%d. %s\n", i + 1, songs[i]);
			}
		}
		else if (choice == 3) {
			printf("프로그램을 종료합니다.");
			break;
		}
		else {
			printf("잘못된 입력입니다. 다시 선택하세요.\n");
		}
	}


	return 0;
}