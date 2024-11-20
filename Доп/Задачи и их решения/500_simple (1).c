#include <stdio.h>

int main(void)
{
	int cnt = 0;
	int a[100000] = {0};
	a[0] = 1;
	a[1] = 1;
	for (int i = 2; i <= 100001; i++) {
		if (a[i] != 0)
			continue;
		for (int j = i * 2; j <= 100001; j += i) {
			a[j] = 1;
		}
	}
	int i = 0;
	while(cnt != 500) {
		if (a[i] == 0) {
			printf("%d\n", i);
			cnt++;
		}
		i++;
	}
	return 0;
}