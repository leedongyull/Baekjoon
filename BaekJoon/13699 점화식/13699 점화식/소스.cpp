#include <iostream>

using namespace std;

unsigned long long arr[36] = { 0, };

int main() {
	int n;
	cin >> n;
	arr[0] = 1;
	for (int i = 1; i <= n; i++) {
		int k = i-1;
		for (int j = 0; j < i; j++) {
			arr[i] += arr[j] * arr[k];
			k--;
		}
	}
	cout << arr[n];
}