#include <stdio.h>

int max(int a, int b) { return a > b ? a : b; }

int main(void) {
	int n, res = 0;
	int dp[10003] = { 0, };
	int grape[10003] = { 0, };
	scanf("%d",&n);

	for (int i = 3; i < n+3; i++) {
		scanf("%d", &grape[i]);
	}

	for (int i = 3; i < n+3; i++) {
		dp[i] = max(grape[i] + grape[i - 1] + dp[i - 3], grape[i] + dp[i - 2]);
		dp[i] = max(dp[i], dp[i - 1]);
		res = max(res, dp[i]);
	}

	printf("%d", res);

}