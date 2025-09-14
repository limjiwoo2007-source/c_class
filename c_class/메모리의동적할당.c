#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	printf("숫자입력: ");
	scanf_s("%d", &num);

	if (num < 2) {
		printf("숫자는 최소 2 이상 입력해야 합니다.");
		return 1;
	}

	//int numLength[num];
	int* numLength = (int*)malloc(num * sizeof(int));

	if (numLength == NULL) {
		printf("메모리 할당 실패!\n");
		return 1;
	}

	numLength[1] = 3;
	printf("%d\n", numLength[1]);

	free(numLength);

	return 0;
}