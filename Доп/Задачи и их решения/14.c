// реверс машинного слова (32 бита)
// O(32)
#include <stdio.h>

int main() {
	unsigned int a;
	if (scanf("%d", &a) < 1) {
		printf("Invalid number");
		return 0;
	}

	unsigned int b = 0;

	for (int i = 0; i < 32; i++) {
		b = b * 2 + a % 2;
		a /= 2;
	}

	printf("%u", b);
	return 0;
}