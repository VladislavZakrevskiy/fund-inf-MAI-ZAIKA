#include <stdio.h>

int main(void)
{
	int n, fact = 2, a[n];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		a[i] = 0; 
	}
	for (int i = 2; i <= n; i++) {
		if (a[i] == 1) {
			continue;
		}
		for (int j = 2 * i; j <= n; j += i) {
			a[j] = 1;
		}
	}
	while (n > 1) {
		if (n % fact == 0 && a[fact] == 0) {
			printf("%d ", fact);
			n /= fact;
		} else {
			fact++;
		}
	}
	printf("\n");
}