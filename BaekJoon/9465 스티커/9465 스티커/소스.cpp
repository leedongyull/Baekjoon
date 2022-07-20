#include<iostream>

using namespace std;

int max(int a, int b) { return a > b ? a : b; }

int dp[2][100001] = { 0, };	
int num[2][100001] = { 0, };

int main(void) {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < n; j++) {
				cin >> num[i][j];
			}
		}

		dp[0][0] = num[0][0];
		dp[1][0] = num[1][0];

		for (int i = 1; i < n; i++) {
			dp[0][i] = max(dp[1][i - 1], dp[1][i - 2]) + num[0][i];
			dp[1][i] = max(dp[0][i - 1], dp[0][i - 2]) + num[1][i];
		}
		int res = max(dp[0][n - 1], dp[1][n - 1]);
		cout << res << '\n';
	}
}