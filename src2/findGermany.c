#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char word[6][20] = { "�ѱ�", "�̱�", "�Ϻ�", "����", "����", "ȣ��" };
	int word_len = 6;
	int i, count = 0;

	for (i = 0; i < word_len; i++) {
		if (strcmp(word[i], "����") == 0) {
			count++;
		}
	}
	printf("���� ��ġ : %d\n", i + 1);
	printf("���� ���� : %d", count);

	return 0;
}