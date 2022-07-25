#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int a, b;
		cin >> a >> b;
		long long res = a * b;
		while (b != 0) {
			int c = a % b;
			a = b;
			b = c;
		}
		cout << res / a << endl;
	}
}