#include <iostream>

using namespace std;

int fibonacci[21] = { 0, };

int dp(int num) {
	if (num <= 2) {
		if (num == 0) return 0;
		else return 1;
	}
	if (fibonacci[num] != 0) return fibonacci[num];
	return fibonacci[num] = dp(num-1) + dp(num-2);
 }

int main(void) { 
	int n;
	cin >> n;
	cout << dp(n);
}