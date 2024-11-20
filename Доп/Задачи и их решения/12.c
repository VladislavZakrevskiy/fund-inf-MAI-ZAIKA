// дифференциал многочлена
// 
#include <stdio.h>
#include <stdlib.h>

int main() {
	double x0, h;
	scanf("%lf %lf", &x0, &h);

	double *kfs = (double *) malloc(0);
	double a;
	int n = -1;
	while (scanf("%lf", &a) > 0) {
		++n;
		kfs = (double *)realloc(kfs, sizeof(double)*(n+1));
		kfs[n] = a;
	}

	double result = 0;
	double x = 1/x0;
	for (int i = 1; i <= n; ++i) {
		x *= x0;
		result += kfs[n-i] * i * x;
	}
	result *= h;

	free(kfs);
	printf("%lf", result);
	return 0;
}