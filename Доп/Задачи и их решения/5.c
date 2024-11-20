// первые 500 простых чисел

#include <stdio.h>

int main() {
	int n = 1;
	printf("2\n");
	int i = 3;
	while (n != 500) {
		int prime = 1;
		for (int j = 2; j * j <= i; j++) {
			if (i % j == 0) prime = 0;
		}

		if (prime == 1) {
			printf("%d\n", i);
			n++;
		}
		i+=2;
	}
	return 0;
}