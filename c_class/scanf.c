#include <stdio.h>
int main(void)
{
	//printf() : ����Լ�
	//scanf_s() : �Է��Լ�
	//   �� �Է¹��� �������� �ڷ����� �����ϴ� ����������
	//   �� �Է¹��� �����Ͱ� ����� �޸� ���� (����)

	int num;
	scanf_s("%d\n", &num); //�Է¹ް�
	printf("\n"); //�ٹٲ��ϱ�

	//scanf_s("�Է� : %d", &num);
	//�Է� : 8
	printf("�Է� : ");
	scanf_s("%d", &num);

	int x, y, z, total;
	printf("���� 3�� �Է� : ");
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	scanf_s("%d", &z);

	return 0;
}