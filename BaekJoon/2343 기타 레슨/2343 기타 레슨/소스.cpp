#include <iostream>

using namespace std;

int main() {
	int n,blue;
	int blueray[100001] = { 0, };
	int high, low, mid;
	low = 0;
	int sum = 0;
	cin >> n >> blue;
	for (int i = 0; i < n; i++) {
		cin >> blueray[i];
		if (low < blueray[i]) low = blueray[i];
		sum += blueray[i];
	}
	high = sum;
	while (low <= high) {
		int cnt = 1;
		sum = 0;
		mid = (low + high) / 2;
		for (int i = 0; i < n; i++) {
			if (sum+blueray[i] > mid) {
				sum = 0;
				cnt++;
			}
			sum += blueray[i];
		}
		if (cnt > blue) low = mid + 1;
		else high = mid - 1;
	}
	cout << low;
}