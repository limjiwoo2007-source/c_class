#include <stdio.h>
int main(void)
{
	//������
	int firstFor, secondFor;
	for (firstFor = 2; firstFor <= 9; firstFor++) {
		printf("\n%d��\n", firstFor);
		for (secondFor = 1; secondFor <= 9; secondFor++) {
			printf("%d X %d = %d\n", firstFor, secondFor, firstFor * secondFor);
		}
	}
	return 0;
}