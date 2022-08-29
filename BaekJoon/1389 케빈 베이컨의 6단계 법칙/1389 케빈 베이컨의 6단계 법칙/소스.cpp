#include <iostream>
#define INF 100000

using namespace std;

int arr[101][101] = { 0, };

int min(int a, int b) { return a < b ? a : b; }

void init(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (arr[i][j] == 0) arr[i][j] = INF;
			if (i == j) arr[i][j] = 0;
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
	for (int i = 1; i <= m; i++) {
		int a, b;
		cin >> a >> b;
		arr[a][b] = 1;
		arr[b][a] = 1;
	}
	init(n);
	floyd(n);
	int sum = 0;
	int res = 0;
	int cnt = INF;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			sum += arr[i][j];
		}
		if (sum < cnt) {
			res = i;
			cnt = sum;
		}
		sum = 0;
	}
	cout << res;
}