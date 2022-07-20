#include <iostream>

using namespace std;

int squre[1001] = { 0, };

int dp(int num) {
	if (num == 1) return 1;
	else if (num == 2)return 3; 
	else if (squre[num] != 0) return squre[num];
	return squre[num] = (dp(num-1)+ 2*dp(num-2))%10007;
}

int main() {
	int n;
	cin >> n;
	cout << dp(n);
}