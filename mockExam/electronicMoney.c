#include <stdio.h>
#include <stdlib.h>

int* solution(int arr[], int arr_len, int bill) {
	int* result = (int*)malloc(sizeof(int) * arr_len);
	int unit_price = (bill / arr[0]) + 1;
	for (int i = 0; i < 8; i++) {
		result[i] = arr[i + 1] * unit_price;
	}

	return result;
}