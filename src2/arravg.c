#include <stdio.h>

int solution(int data[], int data_len) {
	double total = 0;
	for (int i = 0; i < data_len; i++) {
		total += data[i];
	}

	double avg = total / data_len; // [ ÇÕ / °³¼ö ]

	int cnt = 0;
	for (int i = 0; i < data_len; i++) {
		if (data[i] < avg) {
			cnt++;
		}
	}

	return cnt;
}

int main() {
	int data[] = {1,2,3,4,5,6,7,8,9,10};
	int data_len = 10;

	int ret = solution(data, data_len);

	printf("{ %d }", ret);
}