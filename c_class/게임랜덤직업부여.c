#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char nickname[20];
	int job;
	srand((unsigned int)time(NULL));
	printf("�г����� �Է����ּ���: ");
	scanf_s("%s", nickname, (unsigned)sizeof(nickname));

	//job�� 1~3���� ������ �ֱ�
	//����Ʈ ȯ���մϴ� �г��Ӵ�
	//����Ʈ ����� ������ ...
	//����ġ ���� ����Ͽ� job�� ���� �������� 1�̶�� ����
		//2��� ������
		//3�̶�� �ü�
	job = rand() % 3+1;
	printf("ȯ���մϴ� %s��\n", nickname);
	switch (job) {
	case 1: printf("����� ������ �����Դϴ�.");
		break;
	case 2: printf("����� ������ �������Դϴ�.");
		break;
	case 3: printf("����� ������ �ü��Դϴ�.");
		break;
	}
	return 0;
}