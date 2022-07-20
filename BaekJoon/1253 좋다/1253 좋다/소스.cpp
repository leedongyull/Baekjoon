#include <iostream>
#include <map>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long num[2001] = { 0, };
	int n;
	cin >> n;
	map<int, pair<bool,int>> good;
	for (int i = 1; i <= n; i++) {
		cin >> num[i];
		good[num[i]] = { false,i };
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			int sum = num[i] + num[j];
			if (good.count(sum)) {
				if (good[sum].second == i || good[sum].second == j) continue;
				good[sum].first = true;
			}
		}
	}
	int cnt = 0;

	for (int i = 1; i <= n; i++) {
		if (good[num[i]].first == true) cnt++;
	}
	
	cout << cnt;
}