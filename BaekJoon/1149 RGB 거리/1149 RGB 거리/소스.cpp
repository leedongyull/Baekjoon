#include <iostream>

using namespace std;

int color[1001][4] = { 0, };
int dp[1001][4] = { 0, };

int min(int a, int b) { return a < b ? a : b; }
int mintrio(int a, int b, int c) {
	int m = 2147483647;
	if (m > a) m = a;
	if (m > b) m = b;
	if (m > c) m = c;
	return m;
}

int main(void) {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		for (int j = 1; j <= 3; j++) {
			cin >> color[i][j];
		}
	}
	for (int i = 1; i <= t; i++) {
		if (i == 1) {
			dp[i][1] = color[i][1];
			dp[i][2] = color[i][2];
			dp[i][3] = color[i][3];
		}
		else {
			dp[i][1] = min(dp[i - 1][2], dp[i - 1][3]) + color[i][1];
			dp[i][2] = min(dp[i - 1][1], dp[i - 1][3]) + color[i][2];
			dp[i][3] = min(dp[i - 1][2], dp[i - 1][1]) + color[i][3];
		}
	}
	int res = mintrio(dp[t][1], dp[t][2], dp[t][3]);
	cout << res;

}