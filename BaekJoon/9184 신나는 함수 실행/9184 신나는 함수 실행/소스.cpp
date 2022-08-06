#include<iostream>

using namespace std;

long w[60][60][60] = { 0, };

long solve(long a, long b, long c) {
	if (a <= 0 || b <= 0 || c <= 0) return w[0][0][0];
	else if (a > 20 || b > 20 || c > 20) return w[20][20][20];
	else if (a < b && b < c) return w[a][b][c - 1] + w[a][b - 1][c - 1] - w[a][b - 1][c];
	else return w[a - 1][b][c] + w[a - 1][b - 1][c] + w[a - 1][b][c - 1] - w[a - 1][b - 1][c - 1];
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	w[0][0][0] = 1;
	w[20][20][20] = 1048576; //solve 에서 20 20 20을 넣어줘야하는데 아래처럼 돌리면 19 20 20같은 반례가생김 그래서 20 20 20을 선언해줌
	for (int i = 0; i <= 50; i++) {
		for (int j = 0; j <= 50; j++) {
			for (int k = 0; k <= 50; k++) {
				w[i][j][k] = solve(i, j, k);
			}
		}
	}
	while (1) {
		long a, b, c;
		cin >> a >> b >> c;
		if (a == -1 && b == -1 && c == -1) break;
		if (a <= 0 || b <= 0 || c <= 0) cout << "w(" << a << ", " << b << ", " << c << ") = " << w[0][0][0] << "\n";
		else cout << "w(" << a << ", " << b << ", " << c << ") = " << w[a][b][c]<<"\n";
	}
}