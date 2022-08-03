#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int cnt = 0;
	while (1) {
		if (n == 0) break;
		if (n % 5 == 0) cnt++;
		if (n % 25 == 0) cnt++;
		if (n % 125 == 0) cnt++;
		n--;
	}
	cout << cnt;
}