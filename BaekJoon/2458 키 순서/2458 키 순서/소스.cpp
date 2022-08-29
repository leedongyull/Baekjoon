#include <iostream>
#define INF 10000000

using namespace std;

int arr[501][501] = { 0, };

int min(int a, int b) { return a < b ? a : b; }

void floyd(int n) {
	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (arr[i][k] && arr[k][j]) {
					arr[i][j] = arr[i][k] + arr[k][j];
				}
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
	}
	floyd(n);
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		int cnt = 0;
		for (int j = 1; j <= n; j++) {
			if (arr[i][j] != 0 || arr[j][i]) cnt++; //배열에 들어있는값은 키가 더 작은 경우만 들어있기때문에 큰경우도 고려해줘야함
		}											//예를들어 1<4 인경우 배열[1][4]에만 들어가지만 1과 4는 서로 비교가능 따라서 [4][1]도 o
		if (cnt == n - 1) ans++;
	}
	cout << ans;
}