#include <stdio.h>

void swap(int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main(void)
{
	int a = 3, b = 5;
	//swap�̶�� �Լ��� ����Ͽ� a�� b�� ���� �ٲ�ġ�� �ϱ�
	swap(&a, &b);
	printf("%d %d", a,b);

	// call by value -> ����
	// call by reference -> �ּ�
	return 0;
}