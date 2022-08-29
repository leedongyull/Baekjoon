#include <iostream>
#define INF 10000000

using namespace std;

int arr[101][101] = { 0, };

int min(int a, int b) { return a < b ? a : b; }

void init(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == j) continue;
			if (arr[i][j] == 0) arr[i][j] = INF;
		}
	}
}

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
	init(n);
	for (int k = 0; k < m; k++) {
		int i, j,cost;
		cin >> i >> j >> cost;
		arr[i][j] = min(arr[i][j],cost);
	}
	floyd(n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (arr[i][j] == INF) cout << "0 ";
			else cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
}