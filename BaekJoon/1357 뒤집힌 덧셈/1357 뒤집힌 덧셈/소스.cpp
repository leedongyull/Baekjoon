#include <iostream>

using namespace std;

int rev(int);

int main(void) {
	int x, y;
	cin >> x >> y;
	cout << rev(rev(x) + rev(y));
}

int rev(int a) {
	int sum = 0;
	while (a) {
		sum = sum * 10 + a % 10;
		a /= 10;
	}
	return sum;
}