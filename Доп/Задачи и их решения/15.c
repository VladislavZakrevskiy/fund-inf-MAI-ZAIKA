// проверка палиндромии машинного слова (32 бита)
// O(32)
#include <stdio.h>

int main() {
	unsigned int a;
	if (scanf("%d", &a) < 1) {
		printf("Invalid number");
		return 0;
	}

	unsigned int b = a, c = 0;

	for (int i = 0; i < 32; i++) {
		c = c * 2 + a % 2;
		a /= 2;
	}

	if (b == c) {
		printf("YES");
	} else {
		printf("NO");
	}
	return 0;
}