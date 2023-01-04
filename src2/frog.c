#include <stdio.h>

int solution(int arr[], int arr_len) {
	int cnt = 0; // 점프 횟수
	int current = 0; // 현재 돌 위치
	while (current < arr_len) { // 현재 돌 위치가 돌의 길이보다 작을 때까지
		current += arr[current]; // 본인의 위치만큼 점프
		cnt++;
	}

	return cnt;
}

int main() {
	int arr[] = { 2,5,1,3,2,1 };
	int arr_len = 6;
	int ret = solution(arr, arr_len);
	printf("%d", ret); // 3
}