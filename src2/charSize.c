#include <stdio.h>

int main() {
	char name[20] = { 0 };
	printf("%d \n", sizeof(name)); // �̸��� name�� ������ ũ��
	printf("%d \n", sizeof(*(name))); // �ּҰ� name�� ������ ũ��
	pritnf("%d \n", sizeof(*(&name))); // �ּҰ� &name�� ������ ũ��

}