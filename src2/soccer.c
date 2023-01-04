#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int solution(char *size[], int size_len) {
	int* answer;
	answer = (int*)malloc(sizeof(int) * 6);

	for (int i = 0; i < size_len; i++) {
		if (strcmp(size[i], '7') == 0) {
			answer[0];
		}
		else if (strcmp(size[i], '7.5') == 0) {
			answer[1];
		}
		else if (strcmp(size[i], '8') == 0) {
			answer[2];
		}
		else if (strcmp(size[i], '8.5') == 0) {
			answer[3];
		}
		else if (strcmp(size[i], '9') == 0) {
			answer[4];
		}
		else {
			answer[5];
		}
	}

	return answer;
}

int main() {
	char* size[] = { '7', '7.5', '8', '8', '9', '9.5', '9', '8.5', '7', '7' };
	int size_len = 10;
	int* ret = soultion(size, size_len);

	printf("{");
	for (int i = 0; i < size_len; i++) {
		printf(" %d ", ret[i]);
	}
	printf("}");
}