#include <iostream>

using namespace std;

int max(int a, int b) { return a > b ? a : b; }

int main() {
	int n;
	cin >> n;
	int joy[10] = { 0, };

	joy[1] = 0;
	joy[2] = 1;
	
	for (int i = 3; i <= n; i++) {
		int j = i / 2;
		joy[i] = joy[i - j] + joy[j] + (i - j) * j;
	}

	cout << joy[n];
	
}