#include <stdio.h>
int main(viod)
{
	int x, y, z, total;
	printf("���� 3�� �Է� : ");
	scanf_s("%d %d %d", &x,&y,&z);
	
	total = x + y + z;

	printf("%d+%d+%d=%d", x, y, z, total);

	float fnum = 3.1415;
	printf("�Ǽ� �Ҽ��� �ڸ��� %0.2f", fnum);

	return 0;
}