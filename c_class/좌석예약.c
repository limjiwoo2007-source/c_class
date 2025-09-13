#include <stdio.h>
int main(void)
{
	//3행 5열 좌석상태 (0으로 초기화 된 상태)
	//int row, col 사용자에게 입력받을 행, 열

	//while 무한반복을 통해 사용자가 종료할 때까지 예약 시도
	//모든 배열을 출력해서 각 좌석의 상태를 보여줌
	//00000
	//00000
	//00000

	//종료조건: 행과 열 모두 0을 입력했다면 종료할 것

	//입력받은 숫자를 감소시켜주는 코드 필요
	//ex: 사람기준 1행-> 0행으로 감소시키기

	//잘못된 자리를 입력했다면 잘못된 좌석입니다. 다시 입력하세요 출력 후 다시 반복으로 돌아감
	
	//입력받은 좌석이 0이 들어있다면
	//해당 좌석을 1로 변경 후 *행*열 좌석 예약 완료 출력
	//입력받은 좌석에 0이 들어있지 않다면 이미 예약 완료된 좌석입니다! 출력

	int seats[3][5] = { 0 };
	int row, col;
	
	while (1) {
		printf("======좌석 현황======\n");
		for (int i = 0;i < 3;i++) {
			for (int j = 0;j < 5;j++) {
				printf("%d", seats[i][j]);
			}
			printf("\n");
		}
		printf("\n예약할 좌석 입력(행 열/ (종료: 0 0)) :");
		scanf_s("%d %d", &row, &col);
		
		if (row == 0 && col == 0) break;

		row--;
		col--;
		
		if (row < 0 || row >= 3 || col < 0 || col >= 5) {
			printf("잘못된 좌석입니다. 다시 입력하세요\n");
			continue;
		}

		if (seats[row][col] == 0) {
			seats[row][col] = 1;
			printf("%d행 %d열 좌석 예약 완료\n", row+1, col+1);
		}
		else {
			printf("이미 예약된 좌석입니다.\n");
		}
	}
	return 0;
}