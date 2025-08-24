#include <stdio.h>
int main(void)
{
	//자동형변환
	double change_number = 10;
	printf("%.15f\n", change_number);

	int change_number2 = 5.1234;
	printf("%d\n", change_number2);

	//명시적형변환
	printf("%d\n", (int)1.1234);
	printf("%d\n", (short)1.1234); // 32
	printf("%f\n", (float)22);

	float f = 3.14f;
	printf("%f\n", f);

	unsigned char ch; // -128~127 (0~255)
	unsigned char sh; // -32,000~32,000 (0~65,000)
	unsigned int in; // -21억~21억 (0~42억)
	
	ch = 128;
	sh = 50000;
	in = 4100000000;

	printf("%d\n", ch);
	printf("%d\n", sh);
	printf("%u\n", in);

	char num = 255;
	printf("%d\n", num);
	// 255/2=127...1
	// 127/2=63...1
	// 63/2=31...1
	// 31/2=15...1
	// 15/2=7...1
	// 7/2=3...1
	// 3/2=1...1
	// 1/2=0...1 

	//01011001 ->  89
	//00110100 ->  52
	
	return 0;
}