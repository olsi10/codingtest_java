#include <stdio.h>

int solution(char answer[]) {
	int min = 1;
	int max = 100;
	int result;

	for (int i = 0; i < answer[i] != 0; i++) {
		result = (max + min) / 2;

		if (min == max || answer[i] == 'c') break;
		if (answer[i] == 'u') max = result;
		if (answer[i] == 'd') min = result;
	}

	return answer;
}