#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num;
	int cnt = 0;

	cin >> num;

	int res = 1000 - num;

	while (res != 0) {
		if (res >= 500) {
			res -= 500;
			cnt++;
		}
		else if (res >= 100 && res <500) {
			res -= 100;
			cnt++;
		}
		else if (res >= 50 && res < 100) {
			res -= 50;
			cnt++;
		}

		else if (res >= 10 && res < 50) {
			res -= 10;
			cnt++;
		}

		else if (res >= 5 && res < 10) {
			res -= 5;
			cnt++;
		}
		else if (res >= 1 && res < 5) {
			res -= 1;
			cnt++;
		}
	}
	cout << cnt;
}