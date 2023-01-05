#include <stdio.h>

int solution(int down[], int up[], int N) {
	int answer = 0;
	int stand = 0;
	int passenger = 0;

	for (int i = 0; i < N; i++) {
		passenger += up[i] - down[i];
		stand = passenger - 40;
		if (stand > 0 && stand > answer) {
			answer = stand;
		}
	}

	return answer;
}