#include <stdlib.h>
#include <stdio.h>

/*int* solution(int len) {
	int* arr = (int*)malloc(sizeof(int) * len);
	for (int i = 0; i < len; i++) {
		arr[i] = i + 100;
	}
	return arr;
}

int main() {
	int* result;
	result = solution(10);
	for (int i = 0; i < 10; i++) {
		printf(" %d", result[i]);
	}

	return 0;
} */

/*
void main() {
	char title[3][20] = { "first", "second", "third" };
	func_a(title, 3);
}

// int func_a(char p[][20],int n); 배열과 포인터는 같은 것	
int func_a(char(*p)[20], int n) {
	for (int i = 0; i < n; i++) {
		printf("%s\n", p[i]);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 20; j++) {
			printf(" %c", p[i][j]);
		}
	}
}*/