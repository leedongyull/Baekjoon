#include <iostream>
#include <algorithm>

using namespace std;

int tree[100001] = { 0, };
int max(int a, int b) { return a > b ? a : b; }

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> tree[i];
	}
	sort(tree, tree + t);
	int cnt = 2;
	int res = 0;
	for (int j = t-1; j >= 0; j--) {
		res = max(res, tree[j] + cnt);
		cnt++;
	}
	cout << res;
}