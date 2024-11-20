// реверс байтов числа
// O(n / 256)

#include <stdio.h>

int main(){
	long long a;
	if (scanf("%lld", &a) < 1 || a < 0) {
		printf("Invalid number");
		return 0;
	}

	long long b = 0;
	while (a != 0) {
		b = b * 256 + a % 256;
		a /= 256;
		// printf("%lld %lld\n", a, b);
	}

	printf("%lld", b);
	return 0;
}