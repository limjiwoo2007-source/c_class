#include <stdio.h>

void staticFuntion() {
	static int num = 0; //static: (������ ������µ�) �Ȼ������ ��� ����Ǿ� ����
	num++;
	printf("num: %d\n", num);
}

int number = 50;

int localFuntion(int a) {
	int result = 5;
	return number + a;
}

int main(void)
{
	int a=100;
	printf("%d\n", a);

	int result = localFuntion(a);
	printf("%d\n", result);

	int number = 40;
	printf("%d\n", number); //�̸��� �ߺ��Ǹ� �ȿ� �ִ� ���������� ����

	staticFuntion();
	staticFuntion();
	staticFuntion();
	staticFuntion();
	staticFuntion();

	/*
	1. ��������: �Լ� ������{} ������ ����� ��� ������ �ش� �Լ� �ȿ����� ��� �����ϴ�.
			�Լ��� ������ �� ����ϴ� ����� �Ű������� �ᱹ ���������̴�. �̸� �ߺ� �Ұ� (�ٸ� �Լ������� �ߺ� ����)
	2. ��������: ��� ����(�Լ�)���� ��� ����/ ���������� �̸��� �����ϴٸ� ���������� �켱������ ���ȴ�.
			���α׷��� ���۰� ���ÿ� �޸� ������ �Ҵ������, ���α׷��� ������ ������ �����Ѵ�.
	3. ����ƽ����: static�̶�� Ű���带 ����Ͽ� �����ϸ�, ���������� �Բ� ����ϸ� �Լ��� ȣ���ϰ� ����� ������ ����ƽ���� ������ �޸𸮰� ������� �ʴ´�.
			/���α׷��� ����� ������ �޸� ������ �����Ѵ�.
	*/
	return 0;
}