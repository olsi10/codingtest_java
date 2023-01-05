#include <stdio.h>

int solution(int arr[], int arr_len) {
	int answer = 0;
	int price = 0;

	for (int i = 0; i < arr_len; i++) {
		price = arr[i];
		if (arr_len % 4 == 0) {
			price /= 2;
		}

		answer += price;
	}
	
	return answer;
}

int main() {
	int arr1[] = { 100, 500, 200, 400, 300 };
	int arr_len1 = 5;
	int ret1 = solution(arr1, arr_len1);

	printf("가격 : %d", ret1);

	int arr2[] = { 100, 500};
	int arr_len2 = 2;
	int ret2 = solution(arr2, arr_len2);

	printf("가격 : %d", ret2);
}