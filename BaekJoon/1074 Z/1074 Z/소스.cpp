#include <iostream>
#include <cmath>

using namespace std;
long long arr[20][20] = { 0, };

int n, row, col;
int cnt = 0;
int ans = 0;

void z(int size,int x,int y) {
	if (y == row && x == col) {
		cout << ans;
	}
	else if (col < x + size && row < y + size && col >= x && row >= y) {
		z(size / 2, x, y);
		z(size / 2, x + size / 2, y);
		z(size / 2, x, y + size / 2);
		z(size / 2, x + size / 2, y + size / 2);
	}
	else ans += size * size;

}

int main() {
	cin >> n >> row >> col;
	z(pow(2,n), 0, 0);
}