#include <stdio.h>

void sayHello() {
	printf("Hello, World!\n");
}

int add(int a, int b) {
	return a+b;
}

void c_class(char* name) {
	printf("Hello, %s\n", name);
}


int main(void)
{
	/*
	�Լ�: Ư�� �۾��� �����ϴ� �ڵ��� / ���� ����

	��ȯ�� �Լ��̸�(�Ű�����){
		return ?;
	}
	��ȯ��: �Լ��� ó�� ����� ������ �� �˸��� �ڷ����� ���־�� �� (int, float, void)
	�Լ��̸�: �����ڰ� ���� ���� (ȣ���� �� ����� �̸�)
			*ȣ���̶�? ����� �۵��� �� �ֵ��� �������ִ� ��
	�Ű�����: �Լ��� ����� ���� ��� (�� �ִ����� ���� ��°��� �޶���)
	return : �Լ��� �۾��� ���� �� ȣ���� ������ ���� �����ִ� ��ɾ�
			*��ȯ���� void��� ���� ����
			
	������ ��� ����/ �Լ� �̸��� ��ɿ� �°� �����־�� ��/ �������� ������/ ���������� ������
	*/

	sayHello();
	int sum = add(5, 3);
	printf("%d\n", sum);

	char name[20];
	printf("�̸��� �Է����ּ���: ");
	scanf_s("%s", name, (unsigned)sizeof(name));
	c_class(name);

	c_class("eunji");
	c_class("user");

	return 0;
}