#include <stdio.h>

int main() {
	char name[20] = { 0 };
	printf("%d \n", sizeof(name)); // 이름이 name인 공간의 크기
	printf("%d \n", sizeof(*(name))); // 주소가 name인 공간의 크기
	pritnf("%d \n", sizeof(*(&name))); // 주소가 &name인 공간의 크기

}