#include <iostream>

using namespace std;

int field[501][501] = { 0, };




int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m;
	long long block;

	cin >> n >> m >> block;

	int high = 0;
	int low = 0;
	int mid = 0;
	long long mintime = 1e9;
	int height = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> field[i][j];
			if (high < field[i][j]) high = field[i][j];
		}
	}

	for (int h = 0; h <= 256; h++) {
		int build = 0;
		int remove = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (h > field[i][j]) build += h - field[i][j];
				else remove += field[i][j] - h;
			}
		}
		if (build <= block+remove) {
			int time = remove * 2 + build;
			if (mintime >= time) { 
				mintime = time; 
				height = h;
			}
		}
	}
	cout << mintime << ' ' << height;
}