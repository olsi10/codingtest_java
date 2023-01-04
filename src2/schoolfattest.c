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
	int arr[] = { 65, 70, 75, 80, 84 };
	int arr_len = 5;
	int k = 75;
	int ret = solution(arr, arr_len, k);
	printf(" %d 보다 몸무게가 더 큰 사람 : %d", k, ret);
}