#include <iostream>

using namespace std;

int main(void) {
	int squre[101] = { 0, };
	int min = 0, max = 0, sum = 0, m = 0;

	for (int i = 1; i <= 100; i++) {
		squre[i] = i * i;
	}

	cin >> min >> max;
	if (min > max) exit(0);

	for (int i = 1; i <= 100; i++) {
		if (squre[i] >= min && squre[i] <= max) {
			if (sum == 0) m = squre[i];
			sum += squre[i];
		}
	}
	if (sum == 0) cout << "-1";
	else cout << sum << "\n" << m;

}