#include <stdio.h>

// �ִ�
int func_a(int s[], int arr_size) {
	int ret = 0;
	for (int i = 0; i < arr_size; ++i) {
		if (s[i] > ret) {
			ret = s[i];
		}
	}

	return ret;
}

// ���� ��
int func_b(int s[], int arr_size) {
	int ret = 0;
	for (int i = 0; i < arr_size; ++i) {
		ret += s[i];
	}

	return ret;
}


// �ּҰ�
int func_c(int s[], int arr_size) {
	int ret = 101;
	for (int i = 0; i < arr_size; ++i) {
		if (s[i] < ret) {
			ret = s[i];
		}
	}

	return ret;
}

int solution(int arr[], int arr_len) {
	int sum = func_b(arr, arr_len);
	int max_score = func_a(arr, arr_len);
	int min_score = func_c(arr, arr_len);

	return sum - max_score - min_score;
}

int main() {
	int arr[] = { 50, 35, 78, 91, 85};
	int arr_len = 5;

	int ret = solution(arr, arr_len);
	printf("��� ���� ������ - �ְ� ���� - ���� ���� : %d", ret);
}