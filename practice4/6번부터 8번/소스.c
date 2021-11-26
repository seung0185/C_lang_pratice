#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main()
{

	//6번 문제
	char ch;

	printf("영문 소문자를 입력하시오:");
	scanf("%c", &ch);

	switch (ch)
	{
	case 'a':
		printf("모음입니다.\n");
		break;

	case 'e':
		printf("모음입니다.\n");
		break;
	case 'i':
		printf("모음입니다.\n");
		break;
	case 'o':
		printf("모음입니다.\n");
		break;
	case 'u':
		printf("모음입니다.\n");
		break;
	default:
		printf("자음입니다.");
	}

	//7번 문제

	int n1=0, n2=0, n3 =0, min = 0;

	printf("정수를 세개 입력하시오:");
	scanf("%d %d %d", &n1, &n2, &n3);

	if (n1 >= n2) {
		if (n2 >= n3)
			min = n3;
		else
			min = n2;
	}
	else
		if (n1 >= n3)
			min = n3;
		else
			min = n1;

	printf("가장 작은 정수: %d\n", min);

	//8번 문제
	int x, y;

	printf("x좌표를 입력하시오:");
	scanf("%d", &x);

	printf("y좌표를 입력하시오:");
	scanf("%d", &y);

	if (x < 0)
	{
		if (y < 0)
			printf("3사분면입니다.");
		else
			printf("2사분면입니다.");
	}
	else
		if (y > 0)
			printf("1사분면입니다.");
		else
			printf("4사분면입니다.");

	return 0;
}