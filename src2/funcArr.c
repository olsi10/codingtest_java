#include <stdio.h>

int solution(int p[]) {
	printf("p�� ũ�� %d\n", sizeof(p));

	return 0;
}

int main() {
	int arr[10] = {1,2,3,4,5,6,7,8,9};
	printf("arr�� ũ�� %d\n", sizeof(arr));
	solution(arr); //�迭�� �����ּ�

	return 0;
}