#include <stdio.h>

int main(void)
{
	double a;
	scanf("%lf", &a);
	int denum = 1;
	while (a != (int)a) {
		a *= 10;
		denum *= 10;
	}
	int num = (int)a;
	while ((num % 2 == 0) && (denum % 2 == 0)) {
		denum /= 2;
		num /= 2;
	}
	while ((num % 5 == 0) && (denum % 5 == 0)) {
		denum /= 5;
		num /= 5;
	}
	printf("%d/%d\n", num, denum);
	return 0;
}