#include<iostream>

using namespace std;

int pascal[100][100] = { 0, };

int main() {
	int r, c, w;
	cin >> r >> c >> w;
	for (int i = 1; i <= r + w; i++) {
		pascal[i][1] = 1;
	}
	for (int i = 2; i <= r + w; i++) {
		for (int j = 2; j <= i; j++) {
			pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
		}
	}
	int sum = 0;
	for (int i = 0; i < w; i++) {
		for (int j = 0; j <= i; j++) {
			sum += pascal[r + i][c + j];
		}
	}
	cout << sum;
}