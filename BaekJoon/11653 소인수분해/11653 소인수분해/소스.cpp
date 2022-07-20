#include <iostream>

using namespace std;

int main(void) {
	long long n;
	int i = 2;
	cin >> n;
	while (1) {
		if (n == 1) break;
		if (n % i == 0) {
			cout << i << '\n';
			n /= i;
			if (n == 1) break;
		}
		else i++;
	}
}