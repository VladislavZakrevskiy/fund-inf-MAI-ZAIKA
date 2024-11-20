// проверка на палиндромию числа
// O(log n)

#include <stdio.h>

int main() {
	long long a;
	int s = scanf("%lld", &a);
	if (s != 1) {
		printf("NO");
		return 0;
	}
	long long b = a, c = 0;
	while (a != 0) {
		c = c * 10 + a % 10;
		a /= 10;
	}

	if (b == c) {
		printf("YES");
	} else {
		printf("NO");
	}
	return 0;
}