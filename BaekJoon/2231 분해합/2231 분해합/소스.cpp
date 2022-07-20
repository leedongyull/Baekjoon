#include <iostream>

int main(void) {
	using namespace std;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int res, sum = 0,a=0;
	cin >> res;

	while (1) {
		if (res < 10) {
			for (int i = 1; i < 10; i++) {
				if (i + i == res) {
					cout << i;
					return 0;
				}
			}
		}
		else {
			for (int i = res - 63; i <= res; i++) {
				if (i < 0) continue;
				sum = i;
				a = i;
				while (1) {
					sum += a % 10;
					if (a > 9) a /= 10;
					else break;
				}
				if (sum == res) {
					cout << i;
					return 0;
				}
			}
		}
		cout << '0';
		break;
	}

}