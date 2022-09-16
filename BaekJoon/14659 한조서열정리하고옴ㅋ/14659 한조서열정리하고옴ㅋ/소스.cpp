#include <iostream>

using namespace std;

int max(int a, int b) { return a > b ? a : b; }

int arr[30001] = { 0, };

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> arr[i];
	}
	int cnt = 0;
	int res = 0;
	int highest=0;
	for (int i = 0; i < t; i++) {
		if (arr[i] > highest) {
			highest = arr[i];
			cnt = 0;
		}
		else cnt++;
		res = max(res, cnt);
	}
	cout << res;
}