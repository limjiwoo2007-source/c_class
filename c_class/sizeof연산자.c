#include <stdio.h>
int main(void)
{
	int num1 = 1;
	printf("%zu\n", sizeof(num1));

	printf("%zu\n", sizeof(100));
	printf("%zu\n", sizeof(3.14));
	printf("%zu\n", sizeof(3.14f));
	printf("%zu\n", sizeof(float));
	printf("%zu\n", sizeof(short));
	return 0;
}