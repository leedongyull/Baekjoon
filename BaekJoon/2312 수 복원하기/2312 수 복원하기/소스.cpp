#include <iostream>
#include <cstring>

using namespace std;

bool prime[100011] = { false, };
int ind[100001] = { 0, };

void eratosthenes() {
	memset(prime, true, sizeof(prime));
	for (int i = 2; i < 10000; i++) {
		for (int j = i * i; j < 10000; j += i) {
			if (prime[i] == true) {
				prime[j] = false;
			}
			else continue;
		}
	}
}

int main(void) {
	eratosthenes();
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		for (int j = 2; j <= 100000; j++) {
			if (n % j == 0 && prime[j] == true) {
				while (n % j == 0) {
					n /= j;
					ind[j]++;
				}
				cout << j << ' ' << ind[j] << '\n';
				if (n == 0) break;
			}
		}
		memset(ind, 0, sizeof(ind));
	}
}