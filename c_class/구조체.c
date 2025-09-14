#include <stdio.h>
#define NAME_LEN 10
#define PHONE_LEN 10

typedef int integer;
//typedef struct student stu; ->student 대신 stu
/*
typedef struct student
{
	char name[NAME_LEN];
	char phone[PHONE_LEN];
	integer number;
}stu; -> student 대신 stu
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
	//쓰다가 놓쳤다
};

int main(void)
{
	struct student s1,s2;
	printf("이름: ");
	gets_s(s1.name, NAME_LEN);
	printf("전화번호: ");
	gets_s(s1.phone, PHONE_LEN);
	printf("학번: ");
	scanf_s("%d", &s1.number);

	while (getchar() != '\n'); //엔터값을 비우는 코드

	printf("이름: ");
	gets_s(s2.name, NAME_LEN);
	printf("전화번호: ");
	gets_s(s2.phone, PHONE_LEN);
	printf("학번: ");
	scanf_s("%d", &s2.number);

	printf("\n\n======학생정보출력======\n\n");
	printf("%3d %-20s %-20s %8d\n", 1, s1.name, s1.phone, s1.number);
	printf("%3d %-20s %-20s %8d\n", 2, s2.name, s2.phone, s2.number);

	car myCar = { "Tesla",2023 };
	car* ptr = &myCar;
	printf("브랜드: %s\n", ptr->brand); //ptr->brand 혹은 (*ptr).brand
	printf("연식: %d\n", ptr->year); 

	return 0;
}