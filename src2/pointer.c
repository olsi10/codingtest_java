#include <stdio.h>

int main(void) {
	int num;
	int* pNum = NULL; // �ּҸ� �������� ���� ����
	num = 5;
	
	printf("num�� �� : %d\n", num); // 5

	pNum = &num;		// num ������ �ּҸ� ����Ų��

	printf("num �ּ� : %d\n", &num);
	printf("pNum �ּ� : %d\n", pNum);

	*pNum = *pNum + 5;	// *pNum�� num ��� �� �Ͱ� ����

	printf("num�� �� : %d\n", num); // 10

	//////////////////////////////////////
	
	char* pChar;
	int* pInt;
	double* pDouble;

	// ������ ������ ũ��� 4byte
	printf("%d\n", sizeof(pChar));	// 8
	printf("%d\n", sizeof(pInt));	// 8
	printf("%d\n", sizeof(pDouble));// 8

	printf("\n");

	// �����Ͱ� ����Ű�� ������ ũ���̹Ƿ� �� �ڷ����� �´� byte�� ����
	printf("%d\n", sizeof(*pChar));	// 8
	printf("%d\n", sizeof(*pInt));	// 8
	printf("%d\n", sizeof(*pDouble));// 8

	/////////////////////////////////////

	int arr[10];
	int* pArr = arr; // pArr�� arr[0]�� �ּ�, 0���� �ּ�
	
	// �Ʒ� �� �ڵ�� �ٰ��� �ڵ�
	*pArr === arr[0];
	*pArr == (*pArr + 0) == arr[0];
	(*pArr + i) == arr[i];

	return 0;
}