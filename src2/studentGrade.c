#include <stdio.h>
#include <stdlib.h>

int *solution(int scores[], int scores_len) {
	int* answer;
	answer = (int*)malloc(sizeof(int) * scores_len + 1);

	for (int i = 0; i < scores_len; i++) {
		answer[i] = 0;
	}

	for (int i = 0; i < scores_len; i++) {
		if (scores[i] >= 85) {
			answer[0]++;
		}
		else if (scores[i] >= 70) {
			answer[1]++;
		}
		else if (scores[i] >= 55) {
			answer[2]++;
		}
		else if (scores[i] >= 40) {
			answer[3]++;
		}
		else {
			answer[4]++;
		}
	}

	return answer;
}

int main() {
	int scores[] = { 86, 72, 98, 60, 45 };
	int scores_len = 5;
	int* ret = solution(scores, scores_len);

	printf("{");
	for (int i = 0; i < scores_len; i++) {
		printf(" %d ", ret[i]);
	}
	printf("}");
}