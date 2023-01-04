#include <stdio.h>
#include <string.h>

int solution(int price, char *grade) {
	int answer = 0;
	int sale = 0;

	if (strcmp(grade, "S") == 0) {
		answer = price + (price * 0.05);
	}
	else if (strcmp(grade, "G") == 0) {
		answer = price + (price * 0.1);
	}
	else {
		answer = price + (price * 0.15);
	}

	return answer;
}

int main() {
	int price1 = 12000;
	char* grade1 = "S";

	int ret1 = solution(price1, grade1);
	printf("%d\n", ret1);

	int price2 = 400000;
	char* grade2 = "G";

	int ret2 = solution(price2, grade2);
	printf("%d\n", ret2);
}