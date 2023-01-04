#include <stdio.h>

int solution(int arr[], int arr_len) {
	int count = 0;
	for (int i = 0; i < arr_len; i++) {
		if (arr[i] >= 0 && arr[i] <= 200) {
			count++;
		}
	}

	return count;
}

int main() {
	int arr[] = { 100, 50 ,30, 20, 10, 6, 4, 2, 40, 20 };
	int arr_len = 10;
	int ret = solution(arr, arr_len);

	printf("%d", ret);
}