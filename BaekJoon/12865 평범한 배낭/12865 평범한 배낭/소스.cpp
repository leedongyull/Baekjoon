#include<iostream>
using namespace std;

int max(int a, int b) { return a > b ? a : b; }

int main(void) {
	int dp[101][2] = { 0, };
	int bag[101][2] = { 0, };

	int t, weight;
	cin >> t >> weight;
	for (int i = 1; i <= t; i++) {
		cin >> bag[i][0] >> bag[i][1];
	}

	for (int i = 1; i <= t; i++) {
		dp[i][1] = bag[i][1];
		dp[i][0] = bag[i][0];
		for (int j = 1; j < i; j++) {
			if (dp[i][0] + bag[j][0] <= weight) {
				if (dp[i][1] < dp[j][1] + bag[i][1]) dp[i][0] = bag[i][0] + bag[j][0];
				dp[i][1] = max(dp[i][1], dp[j][1] + bag[i][1]);
			}
		}
	}
	int m = 0;

	for (int i = 1; i <= t; i++) {
		if (m < dp[i][1]) m = dp[i][1];
	}
	cout << m;
}