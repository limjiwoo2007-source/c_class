#include <stdio.h>
int main(void)
{
	int continueNum;
	for (continueNum = 0; continueNum <= 10; continueNum++) {
		if (continueNum % 2 == 0) {
			continue;
		}
		printf("%d\n", continueNum);
	}

	int whileContinue = 0;
	while (whileContinue <= 10) {
		whileContinue++;
		if (whileContinue % 2 != 0) { //È¦¼ö
			continue;
		}
		printf("%d\n", whileContinue);
	}
	return 0;
}