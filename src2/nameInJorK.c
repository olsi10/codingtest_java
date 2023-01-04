#include <stdio.h>

int solution(char *name_list[], int name_list_len) {
	int answer = 0;
	for (int i = 0; i < name_list_len; ++i) {
		for (int j = 0; name_list[i][j] != 0; ++j) {
			if (name_list[i][j] == 'j' || name_list[i][j] == 'k') {
				answer++;
				break; // continue
			}
		}
	}

	return answer;
}

int main() {
	char* name_list[] = { "james", "luke", "oliver", "jack" };
	int name_list_len = 4;
	int ret = solution(name_list, name_list_len);
	
	printf("%d", ret);
}
