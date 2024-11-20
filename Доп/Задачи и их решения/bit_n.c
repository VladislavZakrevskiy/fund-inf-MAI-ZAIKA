#include <stdio.h>

int main(void) 
{
	unsigned long long set, bit, n;
	scanf("%lld%lld", &set, &n);
	printf("%lld\n", set >> n & 1);
}