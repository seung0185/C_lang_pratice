#include<stdio.h>

int main(void)
{
	//1번문제
	printf("1번문제\n");
	int total = 0, i = 0;
	while( i <= 100)
	{ 
		if (i % 3 == 0)
		{
			total = total + i;	
		}
		i++;
	}
	printf("1부터 100까지의 모든 3의 배수의 합은 %d 입니다.\n", total);

	//2번문제
	printf("2번문제\n");
	int star, l;

	for (l = 0; l < 7; l++)
	{
		for (star = 0; star < 7; star++)
		{
			if (star < 6 - l)
			{
				printf(" ");
			}
			else
				printf("*");
		}
		printf("\n");
	}


	//3번문제
	printf("3번문제\n");
	int n = 0, sum = 0;
	while (sum < 10000)
	{
		sum = sum + n;
		if (sum > 10000)
		{
			sum = sum - n;
			n--;
			break;
		}
		n++;
	}
	printf("1부터 %d까지의 합은 %d 입니다.", n, sum);

	//4번문제
	printf("\n4번문제\n");
	int num=0;
	printf("정수를 입력하세요:");
	scanf_s("%d", &num);

	do
	{

		printf("%d", num % 10);
		num = num / 10;

	} while (num);

	return 0;
}



