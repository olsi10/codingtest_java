#include <stdio.h>

int solution(int number) {
	int answer = 0;

	for (int i = 1; i <= number; i++) {
		int current = i;
		while (current != 0) {
			if (current % 10 == 3 || current % 10 == 6 || current % 10 == 9) {
				answer++;
				printf("짝 ");
			}
			current /= 10;
		}
	}

	return answer;
}

int main() {
	int number = 40;
	int ret = solution(number);
	
	printf("\n>>> %d", ret);
}