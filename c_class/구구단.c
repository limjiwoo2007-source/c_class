#include <stdio.h>
int main(void)
{
	//구구단
	int firstFor, secondFor;
	for (firstFor = 2; firstFor <= 9; firstFor++) {
		printf("\n%d단\n", firstFor);
		for (secondFor = 1; secondFor <= 9; secondFor++) {
			printf("%d X %d = %d\n", firstFor, secondFor, firstFor * secondFor);
		}
	}
	return 0;
}