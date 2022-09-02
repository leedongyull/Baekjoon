#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	int m = n / 60;
	int s = n % 60;
	int a=0, b=0, c=0;
	if (m >= 5) {
		a = m / 5;
		b = m % 5;
	}
	else if (m < 5 && m>0) {
		b = m;
	}
	if (s % 10 != 0) cout << -1;
	else{
		c = s / 10;
		cout << a << " " << b << " " << c;
	}
}