#include <stdio.h>
int main(void)
{
	int a[5] = { 1,2,3,4,5 };
	int* p;
	p = a;
	printf("%p", p);

	int b = 5;
	int* bp = &b;
	//*bp = 10;
	bp[0] = 10;
	printf("%d\n", *bp);
	//�迭�� �̸��� �ᱹ �����Ϳ� ���� ������ �ϰ�, �����͸� 1�� ������Ų �ڷᱸ���� �迭�̴�.

	int nums[5] = { 1,2,3,4,5 };
	int* numsp = nums;
	for (int i = 0;i < 5;i++) {
		printf("%d��° ���Ұ�: %d\n", i + 1, *(numsp + i));
	}
	return 0;
}