#include <iostream>

using namespace std;

int main() {
	long long a, b;
	cin >> a >> b;
	int cnt = 0;
	while (1) {
		if (a > b) {
			cout << "-1";
			break;
		}
		if (a == b) {
			cout << cnt + 1;
			break;
		}
		if (b % 10 == 1) {
			b--;
			b /= 10;
		}
		else if (b % 2 == 0) {
			b /= 2;
		}
		else {
			cout << "-1";
			break;
		}
		cnt++;
	}
}