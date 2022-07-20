#include<iostream>

using namespace std;

int main(void) {
	int n, count = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (i >= 1 && i <= 99) {
			count++;
		}
		else if (i >= 100) {
			int x=0, y=0, z = 0;
			x = i / 100;
			y = i / 10 % 10;
			z = i % 10;
			if (x - y == y - z) count++;
			else continue;
		}
	}
	cout << count;
}