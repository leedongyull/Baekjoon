#include <iostream>

using namespace std;

bool board[51][51] = { false, };
char b[51][51] = { ' ', };

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> b[i][j];
		}
	}
	int cnt = 0;
	int row = 0;
	int col = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (b[i][j] == '-') {
				if (j == m || b[i][j + 1] == '|') cnt++;
			}
			else {
				if (i == n || b[i + 1][j] == '-') cnt++;
			}
		}
	}
	cout << cnt;
}