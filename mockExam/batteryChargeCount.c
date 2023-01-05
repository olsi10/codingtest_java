#include <stdio.h>

int solution(int arr[], int N) {
	int answer = 0;
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		answer += arr[i];
		if (answer >= 40) {
			cnt++;
			answer -= 40;
		}
	}

	return cnt;
}

int main() {
	int arr[] = { 20,10,30,30 };
	int n = 4;
	int ret = solution(arr, n);
	printf("배터리 충전 횟수 : %d\n", ret);
}