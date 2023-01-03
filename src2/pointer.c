#include <stdio.h>

int main(void) {
	int num;
	int* pNum = NULL; // 주소를 저장하지 않은 상태
	num = 5;
	
	printf("num의 값 : %d\n", num); // 5

	pNum = &num;		// num 변수의 주소를 가리킨다

	printf("num 주소 : %d\n", &num);
	printf("pNum 주소 : %d\n", pNum);

	*pNum = *pNum + 5;	// *pNum은 num 라고 쓴 것과 같다

	printf("num의 값 : %d\n", num); // 10

	//////////////////////////////////////
	
	char* pChar;
	int* pInt;
	double* pDouble;

	// 포인터 변수의 크기는 4byte
	printf("%d\n", sizeof(pChar));	// 8
	printf("%d\n", sizeof(pInt));	// 8
	printf("%d\n", sizeof(pDouble));// 8

	printf("\n");

	// 포인터가 가리키는 변수의 크기이므로 각 자료형에 맞는 byte를 가짐
	printf("%d\n", sizeof(*pChar));	// 8
	printf("%d\n", sizeof(*pInt));	// 8
	printf("%d\n", sizeof(*pDouble));// 8

	/////////////////////////////////////

	int arr[10];
	int* pArr = arr; // pArr은 arr[0]의 주소, 0번방 주소
	
	// 아래 세 코드는 다같은 코드
	*pArr === arr[0];
	*pArr == (*pArr + 0) == arr[0];
	(*pArr + i) == arr[i];

	return 0;
}