#include <iostream>
#define INF 999999

using namespace std;

int res[50001] = { 0, };
int arr[402][402] = { 0, };
int min(int a, int b) { return a < b ? a : b; }

void floyd(int n) {
	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]);
			}
		}
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			arr[i][j] = INF;
		}
	}
	for (int i = 1; i <= m; i++) {
		int a, b;
		cin >> a >> b;
		arr[a][b]=1;
	}
	floyd(n);
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int c, d;
		cin >> c >> d;
		if (arr[c][d] == INF && arr[d][c] == INF) res[i] = 0;
		else if (arr[c][d] != INF) res[i] = -1;
		else res[i] = 1;
	}
	for (int i = 1; i <= t; i++) {
		cout << res[i]<<"\n";
	}
}