#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* solution(char* s) {
	for (int i = 0; s[i] != 0; i++) {
		if ('0' <= s[i] && '9' >= s[i]) {
			s[i] = 'i' - s[i];
		}
	}

	return s;
}

int main() {
	char* s = "ab1c3d";
	char ret = solution(s);
	printf("%s", ret);
}