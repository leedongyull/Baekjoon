#include <iostream>
using namespace std;

int max(int a, int b) { return a > b ? a : b; }

int main(void) {
	int n;
	int card[1001] = { 0, };
	int dp[1001] = { 0, };
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> card[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			dp[i] = max(dp[i], dp[i - j] + card[j]);
		}
	}
	cout << dp[n];
}