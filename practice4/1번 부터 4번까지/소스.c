#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main()
{
	//1번 문제
	unsigned int num;
	printf("십진수:");
	scanf("%u", &num);

	unsigned int mask = 1 << 7;
	printf("이진수:");


	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	printf("\n");

	//2번 문제
	char data = 'a';
	char key = 0xff;

	char encrpted_data;
	encrpted_data = data ^ key;

	printf("암호화된 문자=%c \n", encrpted_data);

	char orig_data;
	orig_data = encrpted_data ^ key;
	printf("원래의 데이터 = %c\n", orig_data);

	//3번 문제
	char c1;
	int i;
	float f;

	c1 = 10000;
	i = 1.23456 + 10;
	f = 10 + 20;
	printf("c = %d, i = %d, f = %f\n", c1, i, f);

	//4번 문제
	int x = 0, y = 0;
	int result;

	result = 2 > 3 || 6 > 7;
	printf("%d\n", result);

	result = 2 > 3 && 3 > 2;
	printf("%d\n", result);

	result = x = y = 1;
	printf("%d\n", result);

	result = - ++x + y--;
	printf("%d\n", result);

	return 0;
}