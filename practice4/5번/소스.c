#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main()
{
	//5번 문제
	char a, b, c, d;
	unsigned int result1 = 0;

	printf("문자를 4개를 입력하시오:");
	scanf("%c %c %c %c", &a, &b, &c, &d);

	result1 = a | result1;
	result1 = b << 8 | result1;
	result1 = c << 16 | result1;
	result1 = d << 24 | result1;

	printf("%x\n", result1);

	return 0;
}
