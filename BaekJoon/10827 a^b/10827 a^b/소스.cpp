#include <iostream>

using namespace std;

int main(void) {
	long double a;
	int b;
	cin >> a >> b;
	long double res = a;
	for (int i = 0; i < b-1; i++) {
		a *= res;
	}

	cout << a;
}