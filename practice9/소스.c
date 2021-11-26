#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 100

void delete_space(char s[]);
void flip_str(char* s);

int main() {


	//1번문제
	printf("1번문제\n");
	
	char s[SIZE];
	
	printf("문자열을 입력:");
	gets_s(s, SIZE);

	delete_space(s);

	//2번문제
	printf("\n\n2번문제\n");

	char alphabet[SIZE];

	printf("문자열을 입력:");
	gets_s(alphabet, SIZE);

	flip_str(&alphabet);

	for (int i = 0; i <= SIZE; i++) {
		printf("%c", alphabet[i]);
	}

	//3번문제
	printf("\n\n3번문제\n");

	char change_voca[200];
	char find[30];
	char replace[30];

	printf("문자열을 입력:");
	gets_s(change_voca, 200);

	printf("찾을 단어:");
	gets_s(find, 30);

	printf("바꿀 단어:");
	gets_s(replace, 30);

	char seps[] = " ";

	char* target;

	printf("변환된 문자열:");
	
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

	//4번문제
	printf("\n\n4번문제\n");

	char operation[100];

	printf("수학 연산 문자열:");
	gets_s(operation, 200);

	char op[10];
	op[10] = strtok(operation, " ");
	int x = atoi(strtok(NULL, " "));
	int y = atoi(strtok(NULL, " "));

	if (strcmp("add", op)) {
		printf("연산의 결과: %d", x + y);
	}
	else if (strcmp("sub", op)) {
		printf("연산의 결과: %d", x - y);
	}
	else if (strcmp("mul", op)) {
		printf("연산의 결과: %d", x * y);
	}
	else if (strcmp("div", op)) {
		printf("연산의 결과: %d", x / y);
	}
	else
		printf("연산자를 잘못 입력.");
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