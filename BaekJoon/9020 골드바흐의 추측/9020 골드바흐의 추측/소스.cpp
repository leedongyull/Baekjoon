#include <iostream>

using namespace std;

bool prime[10001];

int min(int a, int b) { return a < b ? a : b; }


int main(void) {
	int t;
	int res = 10000;
	int real[2] = { 0, };
	cin >> t;
	for (int i = 2; i <= 10000; i++) {
		prime[i] = true;
	}

	for (int i = 2; i <= 10000; i++) {
		for (int j = i * i; j <= 10000; j += i) {
			if (prime[i] == true) {
				prime[j] = false;
			}
			else continue;
		}
	}

	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		for (int i = 2; i <= 10000; i++) {
			if (n/2 >= i) {
				if (prime[n - i] == true && prime[i] == true) {
					if (res >= (n - i) - i) {
						res = min(res, (n - i) - i);
						real[0] = i;
						real[1] = (n - i);
					}
				}
				else continue;
			}
		}
		cout << real[0] << ' ' << real[1]<<'\n';
		res = 10000;
	}
}