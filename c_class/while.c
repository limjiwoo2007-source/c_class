#include <stdio.h>
int main(void)
{
	int hi = 1;
	while (hi <= 10) {
		printf("�ȳ��ϼ��� %d\n", hi);
		hi++;
	}

	//������ 6�ܿ� �ش��ϴ� ���鸸 �̱�
	int six = 1;
	while (six <= 60) {
		if (six % 6 == 0) {
			printf("%d\n", six);
		}
		six++;
	}
	return 0;
}