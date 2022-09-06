#include <iostream>

using namespace std;

int min(int a, int b) { return a < b ? a : b; }

int main() {
	string a;
	int zero = 0;
	int one = 0;
	cin >> a;
	if (a[0] == '0') zero++;
	else one++;


	for (int i = 0; i < a.length(); i++) {
		if (a[i] != a[i + 1]) {
			if (a[i] == '0') zero++;
			else one++;
		}
	}
	cout << min(zero, one);
}