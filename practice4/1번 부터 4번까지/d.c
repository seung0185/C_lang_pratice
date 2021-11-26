char c;
int i;
float f;

c = 10000;
i = 1.23456 + 10;
f = 10 + 20;
printf("d"



	char data = 'a';
char key = 0xff;

char encrpted_data;
encrpted_data = data ^ key;

printf("암호화된 문자=%c \n", encrpted_data);

char orig_data;
orig_data = encrpted_data ^ key;
printf("원래의 데이터 = %c\n", orig_data);
