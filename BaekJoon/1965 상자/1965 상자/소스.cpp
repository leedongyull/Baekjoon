#include <iostream>
#include <cstring>
using namespace std;
int box[1001] = { 0, };
int dp[1001] = { 0, };
int max(int a, int b) { return a > b ? a : b; }
int main(void) {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> box[i];
		dp[i] = 1;
	}
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			if (box[i] > box[j]) {
				dp[i] = max(dp[j] + 1, dp[i]);
			}
		}
	}
	int res = 0;
	for (int i = 1; i <= n; i++) {
		if (res < dp[i]) res = dp[i];
	}
	cout << res;
}