#include <iostream>

using namespace std;

int main(void) {
	int num[10] = { 0, };
	int sum = 0, key = 0, ma = 0;
	int max[1000] = { 0, };
	for (int i = 0; i < 10; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < 10; i++) {
		sum += num[i];
		max[num[i]]++;
	}
	for (int i = 0; i < 1000; i++) {
		if (key < max[i]) {
			key = max[i];
			ma = i;
		}
	}

	cout << sum / 10 << endl << ma;

}