#include <stdio.h>
int main(void)
{
	/*
	������ ���ؼ�
	���� ������� �Է��� 0�� ���ٸ� ���:����
	1�� ���ٸ� ���:����
	2�� ���ٸ� ���:��

	��ǻ�͵� �Ȱ��� 0:����, 1:����, 2:��

	��ǻ���� ���ڿ� ����ڰ� �Է��� ���ڰ� ���ٸ� 
	���: �����ϴ�!

	����ڰ� �̰�ٸ�
	���: ����� �̰���ϴ�!

	��ǻ�Ͱ� �̰�ٸ�
	���: ��ǻ�Ͱ� �̰���ϴ�!
	*/
	
	int num, ran;
	srand((unsigned int)time(NULL));
	ran = rand() % 3 ;
	printf("����(0) ����(1) ��(2) �� �ϳ��� �����ϼ���: ");
	scanf_s("%d", &num);
	if (num == 0) {
		printf("���: ����\n");
	}
	if (num == 1) {
		printf("���: ����\n");
	}
	if (num == 2) {
		printf("���: ��\n");
	}
	if (ran == 0) {
		printf("��ǻ��: ����\n");
	}
	if (ran == 1) {
		printf("��ǻ��: ����\n");
	}
	if (ran == 2) {
		printf("��ǻ��: ��\n");
	}
	
	if (num == ran) {
		printf("���: �����ϴ�!");
	}
	if (num == 0) {
		if (ran == 1) {
			printf("��ǻ�Ͱ� �̰���ϴ�.");
		}
		if (ran == 2) {
			printf("����� �̰���ϴ�.");
		}
	}
	if (num == 1) {
		if (ran == 0) {
			printf("����� �̰���ϴ�.");
		}
		if (ran == 2) {
			printf("��ǻ�Ͱ� �̰���ϴ�.");
		}
	}
	if (num == 2) {
		if (ran == 0) {
			printf("��ǻ�Ͱ� �̰���ϴ�.");
		}
		if (ran == 1) {
			printf("����� �̰���ϴ�.");
		}
	}

	/*
	else if ((user==0 && com==2)||(user==1 && com==0)||(user==2 && com==1)) {
	printf("����� �̰���ϴ�");
	*/
	return 0;
}