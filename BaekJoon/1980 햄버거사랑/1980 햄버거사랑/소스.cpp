#include <iostream>

using namespace std;

int main(void) {
	int t, b, time = 0, tco = 0, bco = 0;
	cin >> t >> b >> time;
	while (time) {
		if (time >= t) {
			time -= t;
			tco++;
		}
		else if (time >= b) {
			time -= b;
			bco++;
		}
		else time--;
	}

	cout << tco << bco;
}