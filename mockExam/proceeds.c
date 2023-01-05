#include <stdio.h>
#include <stdlib.h>

double func_a(double a[], int n) {
	double min;
	min = a[0];

	for (int i = 0; i < n; i++) {
		if(a[i] < min) {
			min = a[i];
		}
	}


	return min;
}

int solution(int arr[][2], int arr_len) {
	double* sales = (double*)malloc(sizeof(double) * arr_len);
	double percent;

	for (int i = 0; i < arr_len; i++) {
		if (arr[i][0] < 5000) percent = 0.25;
		else if (arr[i][0] < 15000) percent = 0.2;
		else if (arr[i][0] < 100000) percent = 0.15;
		else percent = 0.1;

		sales[i] = arr[i][0] * percent + arr[i][1];
	}

	return (int)func_a(sales, arr_len);
}