#include <iostream>

using namespace std;

int main(void) {
	int n=0, left = 0, right = 0,max=0;
	int tro[50] = { 0, };
	cin >> n;
	if (n < 1 || n>50) exit(0);
	for (int i = 0; i < n; i++) {
		cin >> tro[i];
		if (tro[i] > 100) exit(0);
	}

	for (int i = 0; i < n; i++) {
		if (tro[i] > max) {
			max = tro[i];
			left++;
		}
	}
	max = 0;
	for (int i = n-1; i >=0 ; i--) {
		if (tro[i] > max) {
			max = tro[i];
			right++;
		}
	}
	cout << left  << "\n" << right;
}