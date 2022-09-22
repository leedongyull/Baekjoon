#include <iostream>

using namespace std;

int max(int a, int b) { return a > b ? a : b; }

int arr[50001] = { 0, };

int main() {
	int t;
	int m = 0;
	int sum = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> arr[i];
		m = max(m, arr[i]);
		sum += arr[i];
	}
	sum -= m;
	cout << sum;
}