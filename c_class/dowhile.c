#include <stdio.h>
int main(void)
{
	int doWhile = 1;
	/*do {
		printf("doWhile문 %d번 연습중! \n", doWhile);
		doWhile++;
	} while (doWhile <= 10);*/

	while (doWhile <= 10) {
		printf("while과의 차이점\n");
		doWhile++;
	}
	return 0;
}