#include <stdio.h>

int solution(int arr[], int arr_len) {
	int cnt = 0; // ���� Ƚ��
	int current = 0; // ���� �� ��ġ
	while (current < arr_len) { // ���� �� ��ġ�� ���� ���̺��� ���� ������
		current += arr[current]; // ������ ��ġ��ŭ ����
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