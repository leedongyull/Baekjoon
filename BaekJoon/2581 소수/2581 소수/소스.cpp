#include <iostream>

using namespace std;

int main(void) {
	int min, max, count = 0, count2 = 0, sum = 0, k = 0;
	cin >> min >> max;
	for (int i = min; i <= max; i++) {
		if (i == 1) continue;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) count++;
		}
		if (count == 0) {
			sum += i;
			if (count2 == 0) k = i;
			count2++;
		}
		else count = 0;
	}
	if (count2 == 0||max==1) cout << "-1";
	else {
		cout << sum << '\n' << k;
	}
}