#include <iostream>

using namespace std;

int lotto[50] = { 0, };
bool check[50] = { false, };

void clear() {
	for (int i = 0; i < 50; i++) {
		lotto[i] = 0;
		check[i] = false;
	}
}

void combi(int index, int n, int r) {
	if (n == 6) {
		for (int i = 1; i <= r; i++) {
			if (check[i] == true) {
				cout << lotto[i] << " ";
			}
		}
		cout << "\n";
	}
	for (int i = index; i <= r; i++) {
		if (check[i] == true) continue;
		check[i] = true;
		combi(i, n + 1, r);
		check[i] = false;
	}
}

int main(void) {
	while (1) {
		int t;
		cin >> t;
		if (t == 0) break;
		for (int i = 1; i <= t; i++) {
			cin >> lotto[i];
		}
		combi(1, 0, t);
		clear();
		cout << "\n";
	}
}