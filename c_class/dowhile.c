#include <stdio.h>
int main(void)
{
	int doWhile = 1;
	/*do {
		printf("doWhile�� %d�� ������! \n", doWhile);
		doWhile++;
	} while (doWhile <= 10);*/

	while (doWhile <= 10) {
		printf("while���� ������\n");
		doWhile++;
	}
	return 0;
}