#include <stdio.h>

int solution(int scores[], int scores_len) {
	int count = 0;
	for (int i = 0; i < scores_len; i++) {
		// 650 이상이면서 800미만
		if (650 <= scores[i] && scores[i] < 800) {
			count++;
		}
	}

	return count;
}

int main() {
	int scores[] = { 640, 801, 650, 770, 880, 990, 402, 567, 356 };
	int scores_len = 9;
	int ret = solution(scores, scores_len);

	printf(">> %d", ret);
}