#include <iostream>

using namespace std;

unsigned long long tree[1000002] = { 0, };

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	unsigned long long high, mid, low;
	low = 0;
	high = 0;
	mid = 0;
	unsigned long long n,m;
	cin >> n >> m;
	unsigned long long max = 0;
	for (int i = 0; i < n; i++) {
		cin >> tree[i];
		if (high < tree[i]) high = tree[i];
	}
	unsigned long long count = 0;
	while (low <= high) {
		count = 0;
		mid = (low + high) / 2;
		for (int j = 0; j < n; j++) {
			if (tree[j] > mid) count += tree[j] - mid;
		}
		if (count >= m) {
			low = mid + 1;
			if (mid > max) max = mid;
		}
		else high = mid - 1;

	}
	cout << max;
}