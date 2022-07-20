#include <iostream>

using namespace std;

int max(int a, int b) { return a > b ? a : b; }

int main(void) {
	int n, s;
	cin >> n >> s;
	int arr[21] = { 0, };
	int dp[21] = { 0, };
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	dp[1] = arr[1];
	for (int i = 2; i <= n; i++) {
		if (s > dp[i - 1]) {
			dp[i] = max(dp[i - 1] + arr[i], arr[i]);
		}
		else if (s == dp[i - 1]) {
			cnt++;
		}
	}
	cout << cnt;
}