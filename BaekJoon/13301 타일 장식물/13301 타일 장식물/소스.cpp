#include <iostream>

using namespace std;

long long fibo[81];
long long area[81];

int main() {
	int n;
	cin >> n;
	fibo[1] = 1;
	fibo[2] = 1;
	area[1] = 4;
	area[2] = 6;
	for (int i = 3; i <= n; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	for (int i = 3; i <= n; i++) {
		area[i] = fibo[i] * 4 + area[i - 1] - area[i - 2];
	}
	cout << area[n];
}