#include <stdio.h>

// 함수 원형 선언: main 아래쪽에 해당 함수가 정의될 것이라는 약속을 컴파일러에게 알려주는 것
int getMax(int scores[], int size);
int getMin(int scores[], int size);
double getAverage(int scores[], int size);

int main(void)
{
	// 학생 5명의 점수를 받아서 가장 큰 점수 출력 / 가장 작은 점수 / 평균 출력
	int scores[5];
	int size = 5;

	printf("학생 5명의 점수를 입력하세요.\n\n ");
	for (int i = 0; i < size; i++) {
		printf("%d번 학생 점수: ", i + 1);
		scanf_s("%d", &scores[i]);
	}

	int max = getMax(scores, size);
	int min = getMin(scores, size);
	double average = getAverage(scores, size);

	printf("=====결과 출력=====\n");
	printf("최고 점수: %d\n", max);
	printf("최저 점수: %d\n", min);
	printf("평균 점수: %.2f\n", average);
	return 0;
}

int getMax(int scores[], int size) { //이름, 매개변수 같아야 함
	//scores배열의 첫번째 값을 int max라는 것에 넣어줌 (첫번째 값을 일단 최대값으로 설정함)
	//for문으로 두번째 값부터 끝까지 검사
	//만약 scores를 돌고있는 변수의 값이 max에 들어있는 0번째 값보다 크다면
	//max에 더 큰 값을 대입하기
	//함수는 최종적으로 가장 큰 값을 반환하게 될 것이다.

	int max = scores[0];
	for (int i = 1;i < size;i++) {
		if (scores[i] > max) {
			max = scores[i];
		}
	}
	return max;
}
int getMin(int scores[], int size) {
	int min = scores[0];
	for (int i = 1;i < size;i++) {
		if (scores[i] < min) {
			min = scores[i];
		}
	}
	return min;
}
double getAverage(int scores[], int size) {
	//모든 합계를 저장할 변수를 만든 후
	//배열을 순회하며 모든 점수를 합산
	//return값은 합산된 점수/학생수
	//리턴값은 형변환하여 소수점까지 계산
	int sum=0;
	for (int i = 0; i < size; i++) {
		sum += scores[i];
	}
	return (double)sum / size;
}