#include <iostream>

using namespace std;

int main(void) {
	int n, team, plus, count = 0 , k = 0;
	int kayak[11] = { 1,1,1,1,1,1,1,1,1,1,1 };
	cin >> n >> team >> plus;
	for (int i = 0; i < team; i++) {
		cin >> k;
		kayak[k]--;
	}
	for (int i = 0; i < plus; i++) {
		cin >> k;
		kayak[k]++;
	}

	for (int i = 1; i <= n; i++) {
		if (i == n) {
			if (kayak[i] == 0) {
				if (kayak[i - 1] == 2) {
					kayak[i - 1]--;
					kayak[i]++;
				}
			}
		}
		else if (i == 1) {
			if (kayak[i] == 0) {
				if (kayak[i + 1] == 2) {
					kayak[i + 1]--;
					kayak[i]++;
				}
			}
		}
		else if (kayak[i] == 0) {
			if (kayak[i - 1] == 2) {
				kayak[i - 1]--;
				kayak[i]++;
			}
			else if (kayak[i + 1] == 2) {
				kayak[i + 1]--;
				kayak[i]++;
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		if (kayak[i] == 0) count++;
	}
	cout << count;
}