#include <stdio.h>
#define NAME_LEN 10
#define PHONE_LEN 10

typedef int integer;
//typedef struct student stu; ->student ��� stu
/*
typedef struct student
{
	char name[NAME_LEN];
	char phone[PHONE_LEN];
	integer number;
}stu; -> student ��� stu
*/

struct student
{
	char name[NAME_LEN];
	char phone[PHONE_LEN];
	integer number;
};

typedef struct car
{
	char brand[BRAND_NAME];
	//���ٰ� ���ƴ�
};

int main(void)
{
	struct student s1,s2;
	printf("�̸�: ");
	gets_s(s1.name, NAME_LEN);
	printf("��ȭ��ȣ: ");
	gets_s(s1.phone, PHONE_LEN);
	printf("�й�: ");
	scanf_s("%d", &s1.number);

	while (getchar() != '\n'); //���Ͱ��� ���� �ڵ�

	printf("�̸�: ");
	gets_s(s2.name, NAME_LEN);
	printf("��ȭ��ȣ: ");
	gets_s(s2.phone, PHONE_LEN);
	printf("�й�: ");
	scanf_s("%d", &s2.number);

	printf("\n\n======�л��������======\n\n");
	printf("%3d %-20s %-20s %8d\n", 1, s1.name, s1.phone, s1.number);
	printf("%3d %-20s %-20s %8d\n", 2, s2.name, s2.phone, s2.number);

	car myCar = { "Tesla",2023 };
	car* ptr = &myCar;
	printf("�귣��: %s\n", ptr->brand); //ptr->brand Ȥ�� (*ptr).brand
	printf("����: %d\n", ptr->year); 

	return 0;
}