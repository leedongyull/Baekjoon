#include <iostream>

using namespace std;

int land[52][52] = { 0, };
bool visited[52][52] = { false, };
int n, m, cnt;
int dirx[8] = {1,0,0,-1,1,1,-1,-1};
int diry[8] = { 0,1,-1,0,1,-1,1,-1 };

bool isPossible(int x, int y) {
	if (x<1 || y<1 || x>n || y>m) return false;
	return true;
}

void dfs(int x,int y){
	if (visited[y][x] == true) return;
	visited[y][x] = true;
	for (int i = 0; i < 8; i++) {
		int dx = x + dirx[i];
		int dy = y + diry[i];
		if (isPossible(dx, dy) == true && visited[dy][dx] == false && land[dy][dx] == 1) {
			dfs(dx, dy);
		}
	}
}

void clear() {
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			visited[i][j] = false;
			land[i][j] = 0;
		}
	}
}



int main(void) {
	while (1) {
		n = 0,	m = 0, cnt = 0;
		cin >> n >> m;
		if (n == 0 && m == 0) break;
		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= n; j++) {
				cin >> land[i][j];
			}
		}
		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= n; j++) {
				if (visited[i][j] == false && land[i][j] == 1) {
					dfs(j, i);
					cnt++;
				}
			}
		}
		clear();
		cout << cnt << '\n';
	}
}