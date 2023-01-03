#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// c = sseeennnteeecccnnneee

char* solution(char* c) {
	char* result = malloc(sizeof(char) * strlen(c));
	int result_len = 0;
	result[0] = c[0];
	result_len++;

	for (int i = 1; i < strlen(c); i++) {
		if (c[i - 1] != c[i]) {
			result[result_len] = c[i];
			result_len++;
		}
	}

	result[result_len] = NULL;
	return result;
}

int main() {
	char* c = "ssseennttnneeence";
	char *ret = solution(c);

	printf("%s", ret);
}