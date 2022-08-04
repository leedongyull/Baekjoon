#include <iostream>

using namespace std;

int fibnum=0;
int fibonaccinum=0;
int fibo[52] = { 0, };

int fib(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	else {
		fibnum++;
		return fib(n - 1) + fib(n - 2);
	}
}

int fibonacci(int n) {
	fibo[1] = 1;
	fibo[2] = 1;
	for (int i = 3; i <= n; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
		fibonaccinum++;
	}
	return fibo[n];
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	fib(n);
	fibonacci(n);
	cout << fibnum+1 << " " << fibonaccinum;
}