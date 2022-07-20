#include <iostream>

using namespace std;

int main(void) {
	long long n, res, cnt = 0;
	int coin[10];
	cin >> n >> res;
	for (int i = 0; i < n; i++) {
		cin >> coin[i];
	}
	while (res) {
		for (int i = n - 1; i >= 0; i--) {
			if (res >= coin[i]) {
				while (res >= coin[i]) {
					res -= coin[i];
					cnt++;
				}
			}
		}
	}
	cout << cnt;

}