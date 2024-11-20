#include <stdio.h>

int main(void)
{
	char s[1000];
	char res[1000];
	int n, cnt = 0;
	scanf("%d", &n);
	while (n > 0) {
		int o = n % 100;
		n /= 100;
		if (o == 0) {
			res[cnt] = '0';
		} else if (o == 1) {
			res[cnt] = '1';
		} else if (o == 2) {
			res[cnt] = '2';
		} else if (o == 3) {
			res[cnt] = '3';
		} else if (o == 10) {
			res[cnt] = '4';
		} else if (o == 11) {
			res[cnt] = '5';
		} else if (o == 12) {
			res[cnt] = '6';
		} else if (o == 13) {
			res[cnt] = '7';
		} else if (o == 20) {
			res[cnt] = '8';
		} else if (o == 21) {
			res[cnt] = '9';
		} else if (o == 22) {
			res[cnt] = 'a';
		} else if (o == 23) {
			res[cnt] = 'b';
		} else if (o == 30) {
			res[cnt] = 'c';
		} else if (o == 31) {
			res[cnt] = 'd';
		} else if (o == 32) {
			res[cnt] = 'e';
		} else if (o == 33) {
			res[cnt] = 'f';
		} 
		cnt++;
	}
	for (int i = 0; i < cnt; i++) {
		printf("%c", res[cnt - i - 1]);
	}
	printf("\n");
	return 0;
}