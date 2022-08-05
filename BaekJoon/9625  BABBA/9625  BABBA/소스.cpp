#include <iostream>
#include <cstring>

using namespace std;

int fibonacci[200] = { 0, };

int fibo(int n) {
	if (n == 1 || n == 2) return 1;
	for (int i = 3; i <= n; i++) {
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}
	return fibonacci[n];
}

int main() {
	fibonacci[1] = 1;
	fibonacci[2] = 1;
	int n;
	cin >> n;
	fibo(n);
	if (n == 1) cout << "0 1";
	else {
		cout << fibonacci[n-1] << ' ' << fibonacci[n];
	}

}