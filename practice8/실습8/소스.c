#include<stdio.h>
#define SIZE 5

void get_sum_diff(int x, int y, int* psum, int* pdiff);
void print_array(int* arr, int size);
void copy_array(int* arr1, int* arr2, int size);
int search(int* arr, int size, int x);
void print_array2(char* name, int* arr, int size);
void merge(int* arr1, int* arr2, int* arr3, int size);

int main(void)
{
	//1번문제
	printf("1번문제\n");

	int num1, num2;

	int sum;
	int diff;

	printf("첫 번째 정수:");
	scanf_s("%d", &num1);
	printf("두 번째 정수:");
	scanf_s("%d", &num2);

	get_sum_diff(num1, num2, &sum, &diff);
	printf("두 정수의 합: %d\n", sum);
	printf("두 정수의 차: %d\n", diff);

	//2번문제
	printf("\n2번문제\n");

	int a[SIZE] = { 1,2,3,4,5 };
	int b[SIZE] = { 0 };

	printf("배열 a:");
	print_array(&a, SIZE);

	printf("배열 b:");
	print_array(&b, SIZE);
	
	copy_array(a, b, SIZE);

	printf("복사 후 배열 a:");
	print_array(&a, SIZE);

	printf("복사 후 배열 b:");
	print_array(&b, SIZE);

	//3번문제
	printf("\n3번문제\n");

	int data[10] = { 8, 10, 3, 1, 7, 4, 6, 2, 9, 5 };
	int value;

	printf("검색하는 값:");
	scanf_s("%d", &value);

	printf("검색하는 값 %d의 배열내 위치: %d\n", value, search(&data, 10, value));

	//4번문제
	printf("\n4번문제\n");

	int A[SIZE] = { 1, 3, 5, 6, 7 };
	int B[SIZE] = { 2, 4, 8, 9, 10 };
	int C[SIZE * 2];

	print_array2('A', &A, SIZE);
	print_array2('B', &B, SIZE);

	merge(A, B, C, SIZE*2);

	print_array2('C', &C, SIZE*2);

}

void get_sum_diff(int x, int y, int* psum, int* pdiff)
{
	*psum = (x + y);
	*pdiff = (x - y);
}

void print_array(int* arr, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void copy_array(int* arr1, int* arr2, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr2[i] = arr1[i];
	}
}

int search(int* arr, int size, int x)
{
	for (int i = 0; i < SIZE; i++)
		if (arr[i] == x)
			return i;
		else
			return -1;
}

void print_array2(char* name, int* arr, int size)
{
	printf("배열 %c :", name);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void merge(int* arr1, int* arr2, int* arr3, int size)
{
	int i, j, k;
	i = 0; j = 0; k = 0;
	for (k = 0; k < size; k++)
	{
		if (i >= size / 2)
		{
			arr3[k] = arr2[j];
			j++;
		}
		else if (j >= size / 2)
		{
			arr3[k] = arr1[i];
			i++;
		}
		else if (arr1[i] < arr2[j])
		{
			arr3[k] = arr1[i];
			i++;
		}
		else if (arr1[i] > arr2[j])
		{
			arr3[k] = arr2[j];
			j++;
		}
	}

}