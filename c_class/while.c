#include <stdio.h>
int main(void)
{
	int hi = 1;
	while (hi <= 10) {
		printf("안녕하세요 %d\n", hi);
		hi++;
	}

	//구구단 6단에 해당하는 값들만 뽑기
	int six = 1;
	while (six <= 60) {
		if (six % 6 == 0) {
			printf("%d\n", six);
		}
		six++;
	}
	return 0;
}