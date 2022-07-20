#include <iostream>

using namespace std;

int main(void) {
	int arr[101] = { 0, };
	int num, min;
	cin >> num >> min;
	if (min % 2 == 0) min++;
	while (1) {
		if (num < min) {
			cout << "-1";
			return 0;
		}
		if (num % min == 0) break;
		min += 2;
	}
	if (min >= 100) {
		cout << "-1";
		return 0;
	}
	for (int i = 1; i <= min; i++) {
		int k = min / 2;
		arr[i] = num/min - k + i - 1;
		cout << arr[i] << " ";
	}

}