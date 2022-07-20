#include <iostream>

using namespace std;

long long num[100010] = { 0, };

int min(int a, int b) { return a < b ? a : b; }

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> num[i];
	}
	for (int i = 1; i <= m; i++) {
		int st = 0, end = 0;
		long long m=1000000001;
		cin >> st >> end;
		for (int j = st; j <= end; j++) {
			m = min(m, num[j]);
		}
		cout << m<<'\n';
	}
}