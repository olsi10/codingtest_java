#include <stdio.h>

int main(void) {

	int arr[3][4] = { 0 };
	
	printf("arr의 크기 : %d\n", sizeof(arr));		// 48
	printf("arr의 크기 : %d\n", sizeof(arr[0]));		// 16
	printf("arr의 크기 : %d\n", sizeof(arr[1]));		// 16
	printf("arr의 크기 : %d\n", sizeof(arr[2]));		// 16
	printf("arr의 크기 : %d\n", sizeof(arr[2][3]));	// 4

	char ch = '9';
	int num = ch - 48;
	printf("%3d", num);		// 9
	printf("%3d", ch);		// 57

	return 0;
}