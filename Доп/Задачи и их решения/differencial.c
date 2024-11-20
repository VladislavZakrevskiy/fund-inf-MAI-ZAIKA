#include <stdio.h>

double f(double x)
{
	return x * x;
}

int main(void)
{
	double delta, x_0 = 0.0, x_1 = 10.0, y_0, y_1 = f(x_0);
	scanf("%lf", &delta);
	for (double x = x_0; x <= x_1; x += delta) {
		y_0 = y_1;
		y_1 = f(x);
		printf("%lf\n", (y_1 - y_0));
	}
	return 0;
}