#include <stdio.h>

int solution(int arr[], int arr_len, int k) {
	int answer = 0;
	for (int i = 0; i < arr_len; i++) {
		if (arr[i] > k) {
			answer++;
		}
	}

	return answer;
}

int main() {
	int arr[] = { 165, 170, 175, 180, 184 };
	int arr_len = 5;
	int k = 175;
	int ret = solution(arr, arr_len, k);
	printf("%d", ret);
}