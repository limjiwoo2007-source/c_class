#include <stdio.h>
int main(void)
{
	int* ptr;
	//int (*arrptr)[3]; //(*�迭������)[����]?

	int arr[3] = { 1,2,3 };
	ptr = arr;
	
	int (*arrptr)[3] = &arr;
	printf("ù��° ��Ҵ�: %d\n", (*arrptr)[0]);
	printf("�ι�° ��Ҵ�: %d\n", (*arrptr)[1]);
	printf("����° ��Ҵ�: %d\n", (*arrptr)[2]);

	for (int i = 0;i < 3;i++) {
		printf("arr[%d]: %d\n", i, (*arrptr)[i]);
	}

	//��(����)�� �ּҰ� �ʿ��� ��: int * p1 = arr
	//�迭 ��ü�� �ּҰ� �ʿ��� ��: int (*p2)[3] = &arr;

	int twoarr[2][3] = {
		{1,2,3},
		{4,5,6} //2��-�������迭-> �� ����
	};

	int (*twoarrptr)[3] = twoarr;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("twoarr[%d][%d] : %d\n", i, j, twoarrptr[i][j]);
		}
	}

	return 0;
}