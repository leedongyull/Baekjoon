#include <iostream>
#include <cstring>
using namespace std;

bool prime[1001] = { false, };

int main(void) {
	int n, k, cnt = 0;
	cin >> n >> k;
	for (int i = 2; i <= n; i++) {
		prime[i] = true;
	}
	for (int i = 2; i <= n; i++) {
		if (prime[i] == true) {
			prime[i] = false;
			cnt++;
			if (cnt == k) {
				cout << i;
				return 0;
			}
			for (int j = i*i; j <= n; j += i) {
				if (prime[j] == true) {
					prime[j] = false;
					cnt++;
					if (cnt == k) {
						cout << j;
						return 0;
					}
				}
			}
		}
	}
}