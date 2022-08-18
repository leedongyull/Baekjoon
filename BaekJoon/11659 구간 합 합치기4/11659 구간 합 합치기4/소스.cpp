#include <iostream>

using namespace std;

int arr[100001] = { 0, };

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, t;
	cin >> n >> t;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		if (i == 1) continue;
		arr[i] += arr[i - 1];
	}
	for (int i = 1; i <= t; i++) {
		int start, end;
		cin >> start >> end;
		int res = 0;
		res = arr[end] - arr[start - 1];
		cout << res << '\n';
	}
}