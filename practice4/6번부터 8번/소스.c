#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main()
{

	//6�� ����
	char ch;

	printf("���� �ҹ��ڸ� �Է��Ͻÿ�:");
	scanf("%c", &ch);

	switch (ch)
	{
	case 'a':
		printf("�����Դϴ�.\n");
		break;

	case 'e':
		printf("�����Դϴ�.\n");
		break;
	case 'i':
		printf("�����Դϴ�.\n");
		break;
	case 'o':
		printf("�����Դϴ�.\n");
		break;
	case 'u':
		printf("�����Դϴ�.\n");
		break;
	default:
		printf("�����Դϴ�.");
	}

	//7�� ����

	int n1=0, n2=0, n3 =0, min = 0;

	printf("������ ���� �Է��Ͻÿ�:");
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

	printf("���� ���� ����: %d\n", min);

	//8�� ����
	int x, y;

	printf("x��ǥ�� �Է��Ͻÿ�:");
	scanf("%d", &x);

	printf("y��ǥ�� �Է��Ͻÿ�:");
	scanf("%d", &y);

	if (x < 0)
	{
		if (y < 0)
			printf("3��и��Դϴ�.");
		else
			printf("2��и��Դϴ�.");
	}
	else
		if (y > 0)
			printf("1��и��Դϴ�.");
		else
			printf("4��и��Դϴ�.");

	return 0;
}