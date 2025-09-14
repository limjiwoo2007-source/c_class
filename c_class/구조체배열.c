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

	//for문으로 scanf_s를 사용하여 책정보를 받아올 것
	//*번째 책제목 
	//*번째 책 저자
	//*번째 책 가격
	for (int i = 0;i < 3;i++) {
		printf("%d번째 책제목:",i+1);
		scanf_s("%s", book[i].title, (unsigned)sizeof(book[i].title));
		printf("%d번째 책 저자:", i + 1);
		scanf_s("%s", book[i].author, (unsigned)sizeof(book[i].author));
		printf("%d번째 책 가격:", i + 1);
		scanf_s("%d", &book[i].price);
	}
	for (int i = 1;i < 3;i++) {
		if (book[i].price > book[maxIndex].price) {
			maxIndex = i;
		}
	}

	printf("가장 비싼 책 정보\n");
	printf("제목: %s\n", book[maxIndex].title);
	printf("저자: %s\n", book[maxIndex].author);
	printf("가격: %d\n", book[maxIndex].price);

	printf("\n");
	return 0;
}