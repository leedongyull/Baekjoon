#include <iostream>

using namespace std;

int main() {
	int have = 0;
	int need = 0;
	cin >> have >> need;
	int tree[10002] = { 0, };
	int count = 0;
	long long max = 0;
	long long min = 1;
	long long mid = 0;
	int res = 0;

	for (int i = 0; i < have; i++) {
		cin >> tree[i];
		if (max < tree[i]) max = tree[i];
	}

	while (min<=max) {
		mid = (max + min) / 2;
		int count = 0;
			for (int i = 0; i < have; i++) {
				count += tree[i] / mid;
			}
			if (count >= need) {
				min = mid + 1;
				if (res < mid) res = mid;
			}
			else max = mid - 1;
	}
	cout << res;
}