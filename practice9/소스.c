#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 100

void delete_space(char s[]);
void flip_str(char* s);

int main() {


	//1������
	printf("1������\n");
	
	char s[SIZE];
	
	printf("���ڿ��� �Է�:");
	gets_s(s, SIZE);

	delete_space(s);

	//2������
	printf("\n\n2������\n");

	char alphabet[SIZE];

	printf("���ڿ��� �Է�:");
	gets_s(alphabet, SIZE);

	flip_str(&alphabet);

	for (int i = 0; i <= SIZE; i++) {
		printf("%c", alphabet[i]);
	}

	//3������
	printf("\n\n3������\n");

	char change_voca[200];
	char find[30];
	char replace[30];

	printf("���ڿ��� �Է�:");
	gets_s(change_voca, 200);

	printf("ã�� �ܾ�:");
	gets_s(find, 30);

	printf("�ٲ� �ܾ�:");
	gets_s(replace, 30);

	char seps[] = " ";

	char* target;

	printf("��ȯ�� ���ڿ�:");
	
	target = strtok(change_voca, seps);
	
	while (target != NULL) {

		int i;
		int k = 0;

		for (i = 0; target[i] != NULL; i++) {

			if (target[i] == find[i]) {
				k++;
			}
		}
		if (i == k) {
			target = replace;
		}
		printf("%s ", target);
		target = strtok(NULL, seps);

	}

	//4������
	printf("\n\n4������\n");

	char operation[100];

	printf("���� ���� ���ڿ�:");
	gets_s(operation, 200);

	char op[10];
	op[10] = strtok(operation, " ");
	int x = atoi(strtok(NULL, " "));
	int y = atoi(strtok(NULL, " "));

	if (strcmp("add", op)) {
		printf("������ ���: %d", x + y);
	}
	else if (strcmp("sub", op)) {
		printf("������ ���: %d", x - y);
	}
	else if (strcmp("mul", op)) {
		printf("������ ���: %d", x * y);
	}
	else if (strcmp("div", op)) {
		printf("������ ���: %d", x / y);
	}
	else
		printf("�����ڸ� �߸� �Է�.");
}

void delete_space(char s[]){

	int i, k = 0;
	char tmp[SIZE];

	for (int i = 0; i < SIZE; i++) {
		if (s[i] != ' ') {
			tmp[k] = s[i];
			k++;
		}
	}

	tmp[k] = "\0";

	for (int j = 0; tmp[j] != NULL; j++) {
		printf("%c", tmp[j]);
	}
	printf("\n");
}

void flip_str(char* s){

	int i;
	for (i = 0; s[i] != NULL; i++) {
		if ((s[i] >= 97) & (s[i] <= 122))
			s[i] = toupper(s[i]);
		else if ((s[i] >= 65) & (s[i] <= 90))
			s[i] = tolower(s[i]);
		else
			continue;
	}
	s[i + 1] = "\0";
}