#include <iostream>

using namespace std;

int main(void) {
	long long k;
	int a, count = 0;
	int num[15] = { 0, };
	cin >> k >> a;
	bool* check = new bool[k+1];
	for (int i = 0; i < a; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < a; i++) {
		for (int j = 1; j <= k; j++) {
			if (j % num[i] == 0) {
				check[j] = true;
			}
		}
	}
	for (int i = 1; i <= k; i++) {
		if (check[i] == false) count++;
	}
	cout << count;
	delete[] check;
}