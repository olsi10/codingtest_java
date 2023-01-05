#include <stdio.h>

double solution(int x, int y) {
	double answer;
	double b1 = y - x;
	double b2 = y + x;
	double a1 = (y * (x - b1)) / 2.0;
	double a2 = (y * (b2 - x)) / 2.0;

	answer = a1 + a2;

	return answer;
}