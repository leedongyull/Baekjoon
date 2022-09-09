#include <iostream>

using namespace std;

int main() {
		int t = 1;
	while (1) {
		int l, p, v;
		cin >> l >> p >> v;
		if (l == 0 && p == 0 && v == 0) break;
		int n = v / p;
		int k = v % p;
		if (k > l) k = l;
		cout << "Case "<<t<<": " << l * n + k << "\n";
		t++;
	}
}