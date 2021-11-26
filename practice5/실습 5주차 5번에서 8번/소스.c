#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int check_alphabat(char u)
{
	if (((u >= 65) && (u <= 90)) || ((u >= 97) && (u <= 122)))
	{
		printf("%c는 알파벳입니다.", u);
	}
	else
		printf("%c는 알파벳이 아닙니다.", u);
	return 0;
}

int is_leap(int y)
{
	if ((y % 4 == 0) && !(y % 100 == 0))
		printf("%d는 윤년입니다.", y);
	else if (y % 400 == 0)
		printf("%d는 윤년입니다.", y);
	else
		printf("%d는 윤년이 아닙니다.", y);
}

int b_rand()
{
	int i;
	srand((unsigned)time(NULL));
	for (i = 0; i < 10; i++)
	{
		printf("%d", rand()%2);
	}

	return 0;
}

int rand_f()
{
	int i;
	srand((unsigned)time(NULL));
	for (i = 0; i < 5; i++)
	{
		float g = rand() % RAND_MAX;
		printf("%f\t", g/1000000);
	}
	return 0;
}

int main(void)
{
	//5번문제
	printf("5번문제\n");
	char a;
	printf("문자를 입력하세요:");
	scanf_s("%c", &a, sizeof(a));

	check_alphabat(a);

	//6번문제
	printf("\n6번문제\n");

	int y;

	printf("연도를 입력하세요:");
	scanf_s("%d", &y);

	is_leap(y);

	//7번문제
	printf("\n7번문제\n");

	b_rand();

	//8번문제
	printf("\n8번문제\n");

	rand_f();

	return 0;

}
