#include <stdio.h>
#include <stdlib.h>

#include <time.h>

int main(void)
{
	int rad;
	srand((unsigned int)time(NULL));
	rad = rand() % 100+1; //0~99¿¡ +1 -> 1~100±îÁö
	printf("%d", rad);
	return 0;
}