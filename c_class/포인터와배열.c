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
	//배열의 이름은 결국 포인터와 같은 역할을 하고, 포인터를 1씩 증가시킨 자료구조가 배열이다.

	int nums[5] = { 1,2,3,4,5 };
	int* numsp = nums;
	for (int i = 0;i < 5;i++) {
		printf("%d번째 원소값: %d\n", i + 1, *(numsp + i));
	}
	return 0;
}