#include <stdio.h>

int main(void) {

	int* pArr[5] = {10, 20, 30, 40, 50};

	pArr[0] = 1;
	pArr[1] = 2;
	pArr[2] = 3;
	pArr[3] = 4;
	pArr[4] = 5;

	for (int i = 0; i < 5; i++) {
		printf("%d번 정수 : %d\n", i, pArr[i]);
	}

	char* pStr[4] = { "red", "green", "blue", "gray" };

	for (int i = 0; i < 4; i++) {
		printf("%d번 문자열 : %s\n", i, pStr[i]);
	}

}
