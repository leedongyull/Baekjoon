#include <stdio.h>

int dp[501][501] = { 0, };

int max(int a, int b) { return a > b ? a : b; }

int main(void) {
	int n, maximum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			scanf("%d", &dp[i][j]);
		}
	}

	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if (j == 1)	dp[i][j] += dp[i - 1][j];
			else if (i == j) {
				dp[i][j] += dp[i - 1][j - 1];
			}
			else {
				 dp[i][j] += max(dp[i - 1][j - 1], dp[i - 1][j]);
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		if (maximum < dp[n][i]) maximum = dp[n][i];
	}
	printf("%d", maximum);
}