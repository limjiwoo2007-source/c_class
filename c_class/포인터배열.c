#include <stdio.h>
int main(void)
{
	int* p1, * p2, * p3, * p4, * p5;
	int* p[5];

	int x = 3;
	p[3] = &x;
	printf("%p\n", p[3]);
	printf("%d\n", *p[3]);

	//������ ���� ������ �����
	//������ �迭�� ������ ��
	//�� �����ͺ����� ������ ������ �ּҸ� ����
	//for���� ���� ������ �迭�� ���

	int a=10, b=20, c=30;
	int* ptrArr[3];
	ptrArr[0] = &a;
	ptrArr[1] = &b;
	ptrArr[2] = &c;
	
	for (int i = 0; i < 3; i++) {
		printf("ptrArr[%d]�� ����Ű�� ��: %d\n", i, *ptrArr[i]);
	}
	return 0;
}