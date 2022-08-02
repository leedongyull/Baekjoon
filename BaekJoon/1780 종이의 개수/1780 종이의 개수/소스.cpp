#include <iostream>

using namespace std;

int paper[2200][2200] = { 0, };
int micount = 0;
int zerocount = 0;
int onecount = 0;

bool check(int row, int col, int n) {
	int a = paper[row][col];
	for (int i = row; i < row + n; i++) {
		for (int j = col; j < col + n; j++) {
			if (paper[i][j] != a) return false;
		}
	}
	return true;
}

void divisionpaper(int row,int col, int n) {
	if (check(row, col, n)) {
		if (paper[row][col] == -1) {
			micount += 1;
		}
		else if (paper[row][col] == 0) {
			zerocount += 1;
		}
		else onecount += 1;
	}
	else {
		int size = n / 3;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				divisionpaper(row + i * size, col + j * size, size);
			}
		}
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> paper[i][j];
		}
	}
	
	divisionpaper(1, 1, n);
	cout << micount << '\n' << zerocount << '\n' << onecount;
}