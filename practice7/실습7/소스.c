#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 10

int print_array(int arr1[], int n);
int compare_array(int arr1[], int arr2[], int n);
void find_test_stat(int score[][3]);
void show_binary(int num);

int main()
{
	//1번문제
	printf("1번문제\n");
	int list[size];
	int i;
	
	srand((unsigned)time(NULL));

	for (i = 0; i < size; i++)
	{
		list[i] = rand();
	}

	int min = list[0];
	int max = list[0];
	
	for (i = 0; i < size; i++)
	{
		if (list[i] < min) min = list[i];

		if (list[i] > max) max = list[i];
	}

	for (i = 0; i < size; i++)
	{
		printf("%d ", list[i]);
	}

	printf("\n");
	printf("최솟값은 %d\n", min);
	printf("최댓값은 %d\n", max);

	//2번문제
	printf("2번문제\n");

	int a[size] = { 1, 2, 3, 4, 5 };
	int b[size] = { 1,2,3 };

	printf("배열 a:");
	print_array(a, size);
	
	printf("배열 b:");
	print_array(b, size);
	
	if (compare_array(a, b, size) == 1)
		printf("두개의 배열은 같음\n");
	else
		printf("두개의 배열은 다름\n");

	//3번문제
	printf("3번문제\n");

	int score[10][3];
	for (i = 0; i < 10; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			score[i][j] = 1 + rand() % 100;
		}
	}

	find_test_stat(score);

	//4번문제
	printf("4번문제\n");

	int num;
	printf("10진수를 입력하시오:");
	scanf_s("%d", &num);

	printf("2진수 표현은 ");
	show_binary(num);



}


int print_array(int arr1[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
}

int compare_array(int arr1[], int arr2[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (arr1[i] != arr2[i])
			return 0;
	}
		return 1; 
}

void find_test_stat(int score[][3])
{
	for (int j = 0; j < 3; j++)
	{
		int min = score[0][j];
		int max = score[0][j];

		for (int i = 0; i < size; i++)
		{
			if (score[i][j] < min) min = score[i][j];

			if (score[i][j] > max) max = score[i][j];
		}
		printf("시험 %d의 최고 점수: %d\n", j+1, max);
		printf("시험 %d의 최저 점수: %d\n", j+1, min);
	}
	
}

void show_binary(int num)
{
	int binary[32] = { 0, };
	int i = 0;
	int k = 1;
	int s = num;

	for(; k < num; k=k*2)
	{
		if (s % 2 == 0)
		{
			binary[i] = 0;
			s = s / 2;
		}
		else
		{
			binary[i] = 1;
			s = s / 2;
		}
		i++;
	}

	
	for (int j = 0; j < i; j++)
	{
		printf("%d", binary[j]);
	}
}
