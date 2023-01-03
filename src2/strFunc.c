#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char s1[100] = "대한민국 파이팅";
	char s2[100];
	char s3[100];

	printf("s1의 문자열 길이 : %d\n", strlen(s1));
	strcpy(s2, s1);
	printf("%s\n", s2);
	strcat(s2, s1);
	printf("%s\n", s2);

	printf("%d\n", strcmp("school", "boy"));
	printf("%d\n", strcmp("boy", "school"));
	printf("%d\n", strcmp("boy", "boy"));
}
