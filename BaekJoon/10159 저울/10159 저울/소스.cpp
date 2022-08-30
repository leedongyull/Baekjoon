#include <iostream>
#define INF 1000000

using namespace std;

int min(int a, int b) { return a < b ? a : b; }

int arr[101][101] = { 0, };

void init(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			arr[i][j] = INF;
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
	for (int i = 1; i <= m; i++) {
		int a, b;
		cin >> a >> b;
		arr[a][b] = 1;
	}
	floyd(n);
	for (int i = 1; i <= n; i++) {
		int cnt = 0;
		for (int j = 1; j <= n; j++) {
			if (arr[i][j] == INF && arr[j][i]== INF) cnt++;
		}
		cout << cnt-1 <<"\n";
	}
}