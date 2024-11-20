// проверка лексикографической упорядоченности
// O()
#include <stdio.h>
#include <stdlib.h>

int main() {
	char *word = (char *)malloc(0);
	char c;

	int ok = 1, end = 1, i = 0;
	while (scanf("%c", &c) >= 0) {
		if ((c != '\n') && (c != ' ') && (c != '\t')) {
			i++;
			if (end == 0) {
				if ((word[i-1] <= c) || (word[i-1] == '\0')) {
					end = 1;
					word[i-1] = c;
				} else {
					ok = 0;
					break;
				}
			} else {
				word = (char *)realloc(word, i*sizeof(char));
				word[i-1] = c;
			}
		} else {
			word[i] = '\0';
			i = 0;
			end = 0;
		}
	}

	free(word);

	if (ok == 1) printf("YES");
	else printf("NO");
	return 0;
}