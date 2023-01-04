#include <stdio.h>

int func_a(int a[][4], int n) {
	int min = 1001;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 4; j++) {
			if (min > a[i][j]) {
				min = a[i][j];
			}
		}
	}

	return min;
}

int func_b(int a[][4], int n, int del) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 4; j++) {
			if (del == a[i][j]) {
				a[i][j] = 1001;
				return 1;
			}
		}
	}

	return 0;
}

int solution(int arr[][4], int n, int k) {
	int answer = 0;
	int min;
	for (int i = 1; i <= k; i++) {
		min = func_a(arr, k);
		fucn_b(arr, n, min);
	}

	answer = min;
	return answer;
}

int main() {
	int arr[][4] = { {5,12,4,21}, {24,13,11,2}, {43,44,19,26}, {33,65,20,21} };
	int k = 4;
	int ret = solution(arr, k);
	printf("%d", ret);