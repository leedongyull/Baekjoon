#include <iostream>

using namespace std;

int main(void) {
	int num;
	int n[50] = { 0, };
	int max = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> n[i];
	}
	int min = n[0];

	for (int i = 0; i < num; i++) {
		if (n[i] >= max) max = n[i];
		if (n[i] <= min) min = n[i];
	}

	cout << max * min;
}