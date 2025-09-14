#include <stdio.h>

// �Լ� ���� ����: main �Ʒ��ʿ� �ش� �Լ��� ���ǵ� ���̶�� ����� �����Ϸ����� �˷��ִ� ��
int getMax(int scores[], int size);
int getMin(int scores[], int size);
double getAverage(int scores[], int size);

int main(void)
{
	// �л� 5���� ������ �޾Ƽ� ���� ū ���� ��� / ���� ���� ���� / ��� ���
	int scores[5];
	int size = 5;

	printf("�л� 5���� ������ �Է��ϼ���.\n\n ");
	for (int i = 0; i < size; i++) {
		printf("%d�� �л� ����: ", i + 1);
		scanf_s("%d", &scores[i]);
	}

	int max = getMax(scores, size);
	int min = getMin(scores, size);
	double average = getAverage(scores, size);

	printf("=====��� ���=====\n");
	printf("�ְ� ����: %d\n", max);
	printf("���� ����: %d\n", min);
	printf("��� ����: %.2f\n", average);
	return 0;
}

int getMax(int scores[], int size) { //�̸�, �Ű����� ���ƾ� ��
	//scores�迭�� ù��° ���� int max��� �Ϳ� �־��� (ù��° ���� �ϴ� �ִ밪���� ������)
	//for������ �ι�° ������ ������ �˻�
	//���� scores�� �����ִ� ������ ���� max�� ����ִ� 0��° ������ ũ�ٸ�
	//max�� �� ū ���� �����ϱ�
	//�Լ��� ���������� ���� ū ���� ��ȯ�ϰ� �� ���̴�.

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
	//��� �հ踦 ������ ������ ���� ��
	//�迭�� ��ȸ�ϸ� ��� ������ �ջ�
	//return���� �ջ�� ����/�л���
	//���ϰ��� ����ȯ�Ͽ� �Ҽ������� ���
	int sum=0;
	for (int i = 0; i < size; i++) {
		sum += scores[i];
	}
	return (double)sum / size;
}