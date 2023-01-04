#include <stdio.h>
#include <stdlib.h>;

int* func_a(int arr[], int arr_size, int num) {
	int* ret = (int*)malloc(sizeof(int) * arr_size);
	int idx = 0;
	for (int i = 0; i < arr_size; ++i) {
		if (arr[i] != num) {
			ret[idx++] = arr[i];
		}
	}

	return ret;
}

int func_b(int a, int b) {
	if (a >= b) {
		return a - b;
	}
	else {
		return b - a;
	}
}

int func_c(int arr[], int arr_size) {
	int ret = -1;
	for (int i = 0; i < arr_size; ++i) {
		if (ret < arr[i]) {
			ret = arr[i];
		}
	}

	return ret;
}

int soltuion(int arr[], int arr_len) {
	int max_first = func_c(arr, arr_len);
	int* visitor_removed = func_a(arr, arr_len, max_first);
	int max_second = func_c(visitor_removed, arr_len - 1);
	int answer = func_b(max_first, max_second);

	return answer;
}


int main() {
	int visitor[] = { 4,7,2,9,3 };
	int visitor_len = 5;
	int ret = soltuion(visitor, visitor_len);
	printf("%d", ret);
}