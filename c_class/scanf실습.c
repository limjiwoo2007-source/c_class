#include <stdio.h>
int main(viod)
{
	int x, y, z, total;
	printf("정수 3개 입력 : ");
	scanf_s("%d %d %d", &x,&y,&z);
	
	total = x + y + z;

	printf("%d+%d+%d=%d", x, y, z, total);

	float fnum = 3.1415;
	printf("실수 소수점 자르기 %0.2f", fnum);

	return 0;
}