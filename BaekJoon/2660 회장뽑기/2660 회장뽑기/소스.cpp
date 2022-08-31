#include <iostream>
#define INF 100000

using namespace std;

int arr[51][51] = { 0, };
int min(int a, int b) { return a < b ? a : b; }
int max(int a, int b) { return a > b ? a : b; }

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
	int n;
	cin >> n;
	init(n);
	while (1) {
		int a, b;
		cin >> a >> b;
		if (a == -1 && b == -1) break;
		arr[a][b] = 1;
		arr[b][a] = 1;
	}
	floyd(n);
	int m = INF;
	int cnt = 0;
	int res[51] = { 0, };
	for (int i = 1; i <= n; i++) {
		int temp = 0;
		for (int j = 1; j <= n; j++) {
			if (i == j) continue;
			temp = max(temp, arr[i][j]);
		}
		res[i] = temp;
		m = min(m, temp);
	}
	int person=0;
	int p[51] = { 0, };
	for (int i = 1; i <= n; i++) {
		if (res[i] == m) {
			p[person] = i;
			person++;
		}
	}
	cout << m << ' ' << person << "\n";
	for (int i = 0; i < person; i++) {
		cout << p[i]<<" ";
	}
}