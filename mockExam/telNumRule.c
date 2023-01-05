#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int func_a(char arr[], char src[]) {
	int k = 0;
	for (int i = 0; i < src[i] != 0; i++) {
		if ('0' <= arr[i] && src[i] <= '9') {
			arr[k++] = src[i];
		}
	}

	arr[k] = 0;
	return k;
}

char* solution(char num[]) {
	char* copy = (char*)malloc(sizeof(char) * strlen(num) + 1);
	char* answer = (char*)malloc(sizeof(char) * 14);
	int k = 0;
	if (num[0] != '0') {
		copy[k++] = '0';
	}

	func_a(copy + k, num);

	if (strlen(copy + 3) < 8) {
		answer[4] = '0';
	}
	k = 0;

	for (int i = 0; i < copy[i] != 0; i++) {
		answer[k++] = copy[i];
		if (k == 3 || k == 8) {
			answer[k++] = '-';
		}
		if (k == 4 && answer[k] == '0') {
			k++;
		}
	}

	answer[k] = 0;
	free(copy);
	
	return answer;
}

int main() {

}