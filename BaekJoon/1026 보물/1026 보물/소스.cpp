#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	int a[50] = { 0, };
	int b[50] = { 0, };
	int n,sum=0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

	sort(a, a + n);
	sort(b, b + n, greater<int>());

	for (int i = 0; i < n; i++) {
		sum += a[i] * b[i];
	}
	cout << sum;

}