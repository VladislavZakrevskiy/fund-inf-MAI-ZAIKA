// умножение многочленов
// O(n*m)
// перед коэффициентами вводится количество
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n1;
	scanf("%d", &n1);
	int *k1 = (int *)malloc(sizeof(int)*n1);
	for (int i = 0; i < n1; i++) {
		scanf("%d", &k1[i]);
	}

	int n2;
	scanf("%d", &n2);
	int *k2 = (int *)malloc(sizeof(int)*n2);
	for (int i = 0; i < n2; i++) {
		scanf("%d", &k2[i]);
	}

	int nres = n1 + n2 - 1;
	int *res = (int *)malloc(sizeof(int)*nres);
	for (int i = 0; i < nres; i++) {
		res[i] = 0;
	}
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < n2; j++) {
			res[i + j] += k1[i] * k2[j];
		}
	}

	for (int i = 0; i < nres; i++) {
		printf("%d ", res[i]);
	}
	free(res);
	free(k1);
	free(k2);
	return 0;
}