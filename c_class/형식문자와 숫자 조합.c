#include <stdio.h>
int main(void)
{
	printf("%d", 42);
	printf("%d", 42);
	printf("%10d", 42);

	printf("%5d", 12345);
	printf("%5d\n", 123456);
	printf("%-10d", 123456);
	printf("%d\n", 1);

	printf("%010d", 123456);

	printf("%8.2f", 3.14159);
	// 8: ������ĭ����
	// .2: �Ҽ��� �ڸ���
	return 0;
}