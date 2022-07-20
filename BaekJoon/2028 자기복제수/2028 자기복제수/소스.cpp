#include <iostream>

using namespace std;

int main(void) {
	int n, squre = 0, count = 10, k = 0;
	int num[20];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	for (int i = 0; i < n; i++) {
		k = num[i];
		squre = num[i] * num[i];
		while (1) {
			if (num[i] / 10 > 1) {
				num[i] /= 10;
				count*=10;
			}
			else break;
		}
		squre %= count;
		if (squre == k) cout << "YES" << endl;
		else cout << "NO" << endl;	
		count = 10;
	}
}