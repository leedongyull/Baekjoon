#include<iostream>

using namespace std;


long long dp[100]= { 0, };


int main(void) {
	int num;
	cin >> num;
	dp[0] = 9;
	dp[1] = 17;
	for (int i = 2; i < num; i++) {
		dp[i] = (dp[i - 1] * 2 - i);
	}
	cout << dp[num - 1]%1000000000;
}