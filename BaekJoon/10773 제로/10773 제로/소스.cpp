#include <iostream>

using namespace std;

int num[100000] = { 0, };

int main(void) {
	int n, sum = 0, k = 0, s = 0;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> k;
		if (k != 0) {
			num[s] = k;
			s++;
		}
		else s--;
	}
	for (int i = 0; i < s; i++) {
		sum += num[i];
	}
	cout << sum;
}