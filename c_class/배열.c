#include <stdio.h>
int main(void)
{
	//�迭�� �̸� (������ ����)
	//�迭�� �� ���� ��ġ�ϴ� �ڷ���
	//�迭�� ���� - �迭�� ���Ե� �������� ����

	int numbers[5] = { 10,20,30,40,50 };
	//�ʱ�ȭ����Ʈ
	int nums[] = { 1,2,3 };

	printf("%d\n", numbers[1]);

	for (int i = 0; i < 5; i++) {
		printf("%d\n", numbers[i]);
	}

	return 0;
}