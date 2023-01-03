#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char word[6][20] = { "한국", "미국", "일본", "영국", "독일", "호주" };
	int word_len = 6;
	int i, count = 0;

	for (i = 0; i < word_len; i++) {
		if (strcmp(word[i], "독일") == 0) {
			count++;
		}
	}
	printf("독일 위치 : %d\n", i + 1);
	printf("독일 개수 : %d", count);

	return 0;
}