#include <stdio.h>

/*int* Add(int x, int y) {
	int sum = x + y;
	return &sum;
}

int main(void) {
	int x = 5, y = 7;
	int* pz;

	pz = Add(x, y);
	printf("%d\n", *pz);

	// 메모리 차치 후 함수 종료 시 메모리 공간 차지는 해제
	printf("%d\n", *pz);
	return 0;

}*/

void swap(int* pa, int* pb) {
	int a = *pa;
	int b = *pb;
	*pa = b;
	*pb = a;
}

int main() {
	int a = 5, b = 8;
	swap(&a, &b);
	printf("함수 호출 후\n");
	printf("a = %d, b = %d", a, b);
	return 0;
}