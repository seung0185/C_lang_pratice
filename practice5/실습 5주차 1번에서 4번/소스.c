#include<stdio.h>

int main(void)
{
	//1������
	printf("1������\n");
	int total = 0, i = 0;
	while( i <= 100)
	{ 
		if (i % 3 == 0)
		{
			total = total + i;	
		}
		i++;
	}
	printf("1���� 100������ ��� 3�� ����� ���� %d �Դϴ�.\n", total);

	//2������
	printf("2������\n");
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


	//3������
	printf("3������\n");
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
	printf("1���� %d������ ���� %d �Դϴ�.", n, sum);

	//4������
	printf("\n4������\n");
	int num=0;
	printf("������ �Է��ϼ���:");
	scanf_s("%d", &num);

	do
	{

		printf("%d", num % 10);
		num = num / 10;

	} while (num);

	return 0;
}



