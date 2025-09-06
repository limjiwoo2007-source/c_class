#include <stdio.h>
int main(void)
{
	int firstFor, secondFor;
	for (firstFor = 1; firstFor <= 3; firstFor++) {
		for (secondFor = 1; secondFor <= 2; secondFor++) {
			printf("%dÇà %d¿­\n", firstFor, secondFor);
		}
		printf("\n");
	}
	return 0;
}