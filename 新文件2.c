#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	int arr[10][10];
	for (int m = 0; m < N; m++) {
		for (int n = 0; n <  m + 1; n++) {
			if (n == 0)
				arr[m][n] = 1;
			else if (m == n)
				arr[m][n] = 1;
			else
				arr[m][n] = arr[m - 1][n] + arr[m - 1][n - 1];
		}
	}
	for (int j = 0; j < N; j++) {
		for (int w = 0; w < j + 1; w++) {
			printf("%4d", arr[j][w]);
		}
		printf("\n");
	}
	return 0;
}