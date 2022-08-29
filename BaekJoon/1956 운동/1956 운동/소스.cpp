#include <iostream>
#define INF 9876543210

using namespace std;

long long arr[401][401] = { 0, };
int min(int a, int b) { return a < b ? a : b; }

void init(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == j)continue;
			else arr[i][j] = INF;
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
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int v, e;
	cin >> v >> e;
	init(v);
	for (int i = 1; i <= e; i++) {
		int a, b, cost;
		cin >> a >> b >> cost;
		arr[a][b] = cost;
	}
	floyd(v);
	long long m=INF;
	for (int i = 1; i <= v; i++) {
		for (int j = 1; j <= v; j++) {
			if (i == j) continue;
			m = min(m, arr[i][j] + arr[j][i]);
		}
	}
	if (m==INF) cout << "-1";
	else cout << m;
}