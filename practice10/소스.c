#include <stdio.h>

typedef struct point {
	int x;
	int y;
} POINT;

struct shape {
	int type;
	union p {
		struct tri {
			int base;
			int height;
		};
		struct rect {
			int width;
			int length;
		};
		struct circ {
			int radius;
		};
	};
};

enum shape_type{ TRIANGLE, RECTANGLE, CIRCLE };

int equal(POINT* p1, POINT* p2);
void set_proverb(char** q, int n);
void set_max_ptr(int m[], int size, int** pmax);

int main(void) {

	//1������
	printf("1������\n");

	POINT a, b;

	printf("ù��° ���� ��ǥ�� �Է��Ͻÿ�(��: 1, 3):");
	scanf_s("%d %d", &a.x, &a.y);
	printf("�ι�° ���� ��ǥ�� �Է��Ͻÿ�(��: 1, 3):");
	scanf_s("%d %d", &b.x, &b.y);

	if (equal(&a, &b) == 1) {
		printf("(%d, %d) == (%d, %d)", a.x, a.y, b.x, b.y);
	}
	else
		printf("(%d, %d) != (%d, %d)", a.x, a.y, b.x, b.y);

	//2������
	printf("\n2������\n");

	enum shape_type type;
	struct shape s;

	printf("������ Ÿ���� �Է��Ͻÿ�(0, 1, 2):");
	scanf_s("%d", &s.type);



	switch(s.type)
	{
		case TRIANGLE:
			printf("�غ��� �������� �Է��Ͻÿ�(���� �� 10 20):");
			scanf_s("%d %d", &s.base, &s.height);

			printf("������ %d", s.base * s.height / 2);

			break;

		case RECTANGLE:
			printf("���ο� ������ ���̸� �Է��Ͻÿ�(���� �� 10 20):");
			scanf_s("%d %d", &s.width, &s.height);

			printf("������ %d", s.width * s.length);

			break;

		case CIRCLE:
			printf("�������� �Է��Ͻÿ�(���� �� 10):");
			scanf_s("%d", &s.radius);

			printf("������ %f", s.radius * s.radius * 3.14);

			break;

		default:
			printf("������ Ÿ���� �߸� ���õǾ����ϴ�.");
	}

	//3������
	printf("\n3������\n");

	int n;
	char* str;

	printf("���° �Ӵ��� �����Ͻðڽ��ϱ�?");
	scanf_s("%d", &n);

	set_proverb(&str, n);

	printf("%s", str);

	//4������
	printf("\n4������\n");

	int m[6] = { 5, 6, 1, 3, 7, 9 };
	int* pmax;

	set_max_ptr(m, 6, &pmax);
	
	printf("���� ū ���� %d", pmax);
}

int equal(POINT* p1, POINT* p2) {
	if (p1->x == p2->x) {
		if (p1->y == p2->y) {
			return 1;
		}
		else {
			return 0;
		}
	}
	else
		return 0;
}

void set_proverb(char** q, int n) {
	static char* array[10] = { "A bad shearer never had a good sickle.", 
		"A bad workman (always) blames his tools.", 
		"A bad workman quarrels with his tools.",
		"A bad thing never dies.",
		"A bad workman finds fault with his tools.",
		"A bad workman always blames his tools.",
		"A bargain is a bargain.",
		"A barking dog never bites.",
		"A barking dog was never a good hunter." };

	*q = array[n];
}

void set_max_ptr(int m[], int size, int** pmax) {
	
	*pmax = m[0];
	for (int i = 0; i < size; i++) {
		if (*pmax <= m[i]) {
			*pmax = m[i];
		}
	}
}
