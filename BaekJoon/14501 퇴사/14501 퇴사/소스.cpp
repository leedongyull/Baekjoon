#include <iostream>

using namespace std;

int dp[15][2] = { 0, };
int res = 0, real = 0;

int max(int a, int b) { return a > b ? a : b; }
int min(int a, int b) { return a < b ? a : b; }


int main(void) {
	int day = 0;
	int ans = 0;
	cin >> day;
	for (int i = 1; i <= day; i++) {
		cin >> dp[0][i]>>dp[1][i];
	}
	for (int i = day; i >= 1; i--) {
		if (i + dp[0][i] > day + 1) dp[1][i] = dp[1][i + 1];
		dp[1][i] = max(dp[1][i + 1], dp[1][i] + dp[1][i + dp[0][i]]);
		ans = max(ans, dp[1][i]);
	}
	cout << ans;
}