#include <iostream>

using namespace std;

unsigned long long arr[200] = { 0, };

int main() {
	int n;
	cin >> n;
	arr[1] = 1;
	arr[2] = 1;
	arr[3] = 1;
	for (int i = 4; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i - 3];
	}
	cout << arr[n];
}