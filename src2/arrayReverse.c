#include <stdio.h>

int* solution(int arr[], int arr_len) {
	int left = 0;
	int right = arr_len - 1;
	while (left < right) {
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}

	return arr;
}

int main() {
	int arr[] = { 1,4,3,2 };
	int arr_len = 4;
	int ret = solution(arr, arr_len);

	printf("{ ");
	for (int i = 0; i < arr_len; i++) {
		printf(" %d, ", arr[i]);
	}
	printf(" }");

	return 0;
}