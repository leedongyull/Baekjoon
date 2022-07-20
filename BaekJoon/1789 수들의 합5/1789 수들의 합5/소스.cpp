#include <iostream>

using namespace std;

int main(void) {
	long long n, sum = 0, count = 0;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			sum += j;
			if (sum == n) count++;
			else if (sum > n) {
				sum = 0;
				break;
			}
		}
	}

	cout << count;
}