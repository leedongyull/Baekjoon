#include <iostream>
#include <algorithm>

using namespace std;

int num[100001] = { 0, };

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int n;
		int cnt = 0;
		cin >> n;
		for (int j = 1; j <= n; j++) {
			int a, b;
			cin >> a >> b;
			num[a] = b;
		}
		int temp = num[1];
		for (int k = 1; k <= n; k++) {
			if (num[k] <= temp) {
				temp = num[k];
				cnt++;
			}
		}
		cout << cnt<<"\n";
	}
}