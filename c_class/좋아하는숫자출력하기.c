#include <stdio.h>
int main(void) {

	/*
	���� 5�� ������ �迭 �����
	�����ϴ� ���ڸ� �Է¹޾� �� �迭�� ĭ�� �ֱ�
	�迭 ����ϱ�

	*for�� 2�� ����
	* �� ĭ�� �Է��ϴ� for��
	* �Է��� ���� ����ϴ� for��
	*/

	int nums[5];
	printf("�����ϴ� ���� 5���� �Է����ּ���: \n");
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &nums[i]);
	}
	for (int i = 0; i < 5; i++) {
		printf("%d", nums[i]);
	}

	int numbers[5] = { 10,20,30,40,50 };
	int max;

	max = numbers[0];
	for (int i = 1;i < 5; i++) {
		if (max < numbers[i]) {
			max = numbers[i];
		}
	}
	printf("�ִ밪: %d\n", max);
	return 0;
}