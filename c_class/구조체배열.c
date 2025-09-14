#include <stdio.h>
#define SIZE 50

typedef struct Book {
	char title[SIZE];
	char author[SIZE];
	int price;
}Book;


int main(void)
{
	Book book[3] = { 0 };
	int maxIndex = 0;

	//for������ scanf_s�� ����Ͽ� å������ �޾ƿ� ��
	//*��° å���� 
	//*��° å ����
	//*��° å ����
	for (int i = 0;i < 3;i++) {
		printf("%d��° å����:",i+1);
		scanf_s("%s", book[i].title, (unsigned)sizeof(book[i].title));
		printf("%d��° å ����:", i + 1);
		scanf_s("%s", book[i].author, (unsigned)sizeof(book[i].author));
		printf("%d��° å ����:", i + 1);
		scanf_s("%d", &book[i].price);
	}
	for (int i = 1;i < 3;i++) {
		if (book[i].price > book[maxIndex].price) {
			maxIndex = i;
		}
	}

	printf("���� ��� å ����\n");
	printf("����: %s\n", book[maxIndex].title);
	printf("����: %s\n", book[maxIndex].author);
	printf("����: %d\n", book[maxIndex].price);

	printf("\n");
	return 0;
}