#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int check_alphabat(char u)
{
	if (((u >= 65) && (u <= 90)) || ((u >= 97) && (u <= 122)))
	{
		printf("%c�� ���ĺ��Դϴ�.", u);
	}
	else
		printf("%c�� ���ĺ��� �ƴմϴ�.", u);
	return 0;
}

int is_leap(int y)
{
	if ((y % 4 == 0) && !(y % 100 == 0))
		printf("%d�� �����Դϴ�.", y);
	else if (y % 400 == 0)
		printf("%d�� �����Դϴ�.", y);
	else
		printf("%d�� ������ �ƴմϴ�.", y);
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
	//5������
	printf("5������\n");
	char a;
	printf("���ڸ� �Է��ϼ���:");
	scanf_s("%c", &a, sizeof(a));

	check_alphabat(a);

	//6������
	printf("\n6������\n");

	int y;

	printf("������ �Է��ϼ���:");
	scanf_s("%d", &y);

	is_leap(y);

	//7������
	printf("\n7������\n");

	b_rand();

	//8������
	printf("\n8������\n");

	rand_f();

	return 0;

}
