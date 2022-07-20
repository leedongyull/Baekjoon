#include <iostream>

using namespace std;

int maze[1001][1001] = { 0, };
int dp[1001][1001] = { 0, };

int max(int a, int b, int c) {
	int max = 0;
	if (max < a) max = a;
	if (max < b)max = b;
	if (max < c)max = c;
	return max;
}


int main(void) {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> maze[i][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (i == 1) {
				dp[i][j] = dp[i][j - 1] + maze[i][j];
			}
			if (j == 1) {
				dp[i][j] = dp[i - 1][j] + maze[i][j];
			}
			else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + maze[i][j];
			}
		}
	}
	cout << dp[n][m];
}