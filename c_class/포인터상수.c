#include <stdio.h>
int main(void)
{
	int x = 10, y = 20;
	const int* p1 = &x; //�ڷ��� �տ� const ���� (���� ����� �����)
	//*p1 = 30;

	p1 = &y;
	printf("%d", *p1);

	int* const p2 = &x; //�����ͺ��� �̸� �տ� const ���� (�����ʹ� �ּҸ� ����Ű�� �༮�̱� ������ ������ ���� �̸� �տ� const�� ������ �ּҸ� ������ �� ���� ��)

	*p2 = 30;
	//p2 = &y;
	printf("%d", *p2);
	
	const int* const p3 = &y;
	//*p3 = 100;
	//p3 = &x;
	//const ���� �ּ� ��� ���� ���� (������?)
	return 0;
}