#include <iostream>

using namespace std;

long long dp[2000][2000] = { 0, };

int main(void) {
	long long n, sum = 0;
	long long sum2 = 0;
	cin >> n;
	for (int i = 0; i < 10; i++) {
		dp[1][i] = 1;
	}
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			for (int k = j; k <= 9; k++) {
				dp[i][k] += dp[i - 1][j];
				dp[i][k] %= 10007;
			}
		}
	}

	for (int i = 0; i <= 9; i++) {
		sum += dp[n][i];
	}
	cout << sum % 10007;
}