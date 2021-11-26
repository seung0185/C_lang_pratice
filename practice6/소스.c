#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static int call_count = 100;
static int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0;
static total = 0;
int base = 0, powerraised = 0, p = 1;

int get_dice_face(void);
int get_random(void);
int sum(int n);
int power(int base, int powerraised);

int main(void)
{
	//1������
	printf("1�� ����\n");
	srand((unsigned)time(NULL));
	for (int i = 0; i < call_count; ++i)
	{
		get_dice_face();
		
	}

	printf("1 -> %d\n", one);
	printf("2 -> %d\n", two);
	printf("3 -> %d\n", three);
	printf("4 -> %d\n", four);
	printf("5 -> %d\n", five);
	printf("6 -> %d\n", six);

	//2������
	printf("2�� ����\n");

	printf("%d\n", get_random());
	printf("%d\n", get_random());
	printf("%d\n", get_random());

	//3������
	printf("3�� ����\n");

	int a=0;

	printf("���� ������ �Է��Ͻÿ�:");
	scanf_s("%d", &a);

	sum(a);

	printf("1���� %d������ ���� %d\n", a, total);

	//4������
	printf("4�� ����\n");
	printf("����:");
	scanf_s("%d", &powerraised);
	printf("��:");
	scanf_s("%d", &base);

	power(base, powerraised);

	printf("%d", p);

	return 0;

}

int get_dice_face(void)
{
	int i = rand() % 6;
	switch(i){
		case 0:
			one++;
			break;
		case 1:
			two++;
			break;
		case 2:
			three++;
			break;
		case 3:
			four++;
			break;
		case 4:
			five++;
			break;
		case 5:
			six++;
			break;
	}
	return 0;
}

int get_random()
{
	static int initial = 0;
	if (initial == 0)
	{
		initial = 1;
		srand((unsigned)time(NULL));
	}
	return rand();
}

int sum(int n)
{
	total = total + n;
	if (n <= 1) return 0;
	else return(sum(n-1));
}

int power(int base, int powerraised)
{
	if (powerraised == 0) return 1;
	else 
		p = p * base;
		return power(base, powerraised - 1);
}