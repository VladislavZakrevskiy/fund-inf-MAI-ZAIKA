// целочисленное деление в кардинальной системе
// O(n div m)

#include <stdio.h>

int main() {
	int a = 0, b = 0;
	char d;
	while (scanf("%c", &d) > 0 && d == '|') {
		a++;
	}

	while (scanf("%c", &d) > 0 && d == '|') {
		b++;
	}

	if (a + b == 0) {
		printf("invalid numbers");
		return 0;
	}

	if (b == 1) {
		printf("division by zero");
		return 0;
	}

	int c = 1;
	while (a >= b) {
		a -= b - 1;
		c++;
	}
	// printf("%d %d %d", a, b, c);

	while (c != 0) {
		printf("|");
		c--;
	}

	printf(" (");
	while (a != 0) {
		printf("|");
		a--;
	}
	printf(")");
}