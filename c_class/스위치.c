#include <stdio.h>
int main(void)
{
	/*
	int ���� = �ʱⰪ;
	switch(����){
		case ��1: �ڵ�1;
		break;
		case ��2: �ڵ�2;
		break;
		case ��3: �ڵ�3;
		break;
		case ��4: �ڵ�4;
		break;
	}
	*/

	int day;
	printf("������ �������ּ��� (1~7�� �� 1/ 1:������~ 7:�Ͽ���");
	scanf_s("%d", &day);
	switch (day) {
	case 1: printf("�������Դϴ�.\n");
		break;
	case 2: printf("ȭ�����Դϴ�.\n");
		break;
	case 3: printf("�������Դϴ�.\n");
		break;
	case 4: printf("������Դϴ�.\n");
		break;
	case 5: printf("�ݿ����Դϴ�.\n");
		break;
	case 6: printf("������Դϴ�.\n");
		break;
	case 7: printf("�Ͽ����Դϴ�.\n");
		break;

	default: printf("��ȿ���� ���� �Է��Դϴ�.");
	}

	return 0;
}