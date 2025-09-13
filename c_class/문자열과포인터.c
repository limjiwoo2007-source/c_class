#include <stdio.h>
int main(void)
{
	char good[] = "good";
	char* bad = "hello";

	printf("%s %s\n", good, bad);

	good[0] = 'H';
	//good = "new Good!";

	//bad[0] = 's';
	bad = "new bad";
	printf("%s %s\n", good, bad);
	return 0;
}