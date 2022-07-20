#include <iostream>

using namespace std;

int max(int a, int b) { return a > b ? a : b; }

int main(void) {
	int dp[1001][2] = { 0, };
	int num[1001] = { 0, };

	int t, m = 0;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cin >> num[i];
	}

	for (int i = 1; i <= t; i++) {
		dp[i][0] = num[i];
		for (int j = 1; j <= i; j++) {
			if (num[j] < num[i]) {
				dp[i][1] = dp[j][1] + 1;
				dp[i][0] = max(dp[j][0] + num[i], dp[i][0]);
			}
		}
	}

	for (int i = 1; i <= t; i++) {
		if (m < dp[i][0]) m = dp[i][0];
	}
	cout << m;

}